`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:51:14 11/08/2023 
// Design Name: 
// Module Name:    controller 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`default_nettype none
`include "def.v"
module controller(
    input wire [31:0] instr,
	 input wire new_instr,
	 
	 output reg [3:0] tuse_rs,
	 output reg [3:0] tuse_rt,
	 output reg [3:0] tnew,
    output wire [4:0] rs,
	 output wire [4:0] rt,
	 output wire [15:0] imm16,
	 output wire [25:0] imm26,
	 output reg [3:0] cmpOp,
	 output reg [3:0] nPcOp,
	 output reg [3:0] extOp,
	 output wire ri,
	 output wire md,
	 output wire mt,
	 output wire mf,
	 output reg eret,
	 output reg syscall,
	 output wire delaySlotCode,
	  
	 output reg [3:0] srcASel,
	 output reg [3:0] srcBSel,
	 output wire [4:0] shamt,
	 output reg [3:0] aluOp,
	 output reg [4:0] regDst,
	 output reg [3:0] regWdSel,
	 output reg [3:0] d1Sel,
	 output reg [3:0] d2Sel,
	 output reg [3:0] mduOp,
	 output wire mdu_start,
	 output wire aluDmOv,
	 output wire aluAriOv,
	 output reg mtc0,
	 
	 output reg cp0Write,
	 output reg [4:0] cp0AddrIn,
	 output reg [4:0] cp0AddrOut,
	 
	 output reg memWrite,
	 output reg [3:0] memOp 
	 );
	wire [5:0] op;
	wire [5:0] funct;
	reg special;
	reg add,sub,andand,oror,slt,sltu,lui;
	reg addi,andi,ori,sll;
	reg lb,lh,lw,sb,sh,sw;
	reg mult,multu,div,divu,mthi,mtlo,mfhi,mflo;
	reg beq,bne,jal,jr;
	reg mfc0;
	reg addiu,srl;
	reg eretOrMtc0OrMfc0;
	wire load,save,alu_r,alu_i,j_b;
	assign op = instr[31:26];
	assign funct = instr[5:0];
	assign rs = instr[25:21];
	assign rt = instr[20:16];
	assign load = lw | lh | lb;
	assign save = sw | sh | sb;
	assign alu_r = add | sub | andand | oror | slt | sltu;
	assign alu_i = addi | andi | ori | addiu;
	assign md = mult | multu | div | divu;
	assign mt = mthi | mtlo;
	assign mf = mfhi | mflo;
	assign j_b = beq | bne;
	assign mdu_start = md;
	assign ri = !(load | save | alu_r | alu_i | md | mt | mf | j_b | jal | jr | lui | eret | syscall | sll | (op == 6'b010000 && funct == 6'b000000));
	assign aluDmOv = load | save;
	assign aluAriOv = add | addi | sub;
	assign delaySlotCode = j_b | jal | jr;
	always @(*) begin : and_logic_or_logic
		special = 0;
		add = 0; sub = 0; andand = 0; oror = 0; slt = 0; sltu = 0; lui = 0;
		addi = 0; andi = 0; ori = 0; sll = 0;
		lb = 0; lh = 0; lw = 0; sb = 0; sh = 0; sw = 0;
		mult = 0; multu = 0; div = 0; divu = 0; mthi = 0; mtlo = 0; mfhi = 0; mflo = 0;
		beq = 0; bne = 0; jal = 0; jr = 0;
		mfc0 = 0; mtc0 = 0; eret = 0; syscall = 0;
		addiu = 0; srl = 0;
		eretOrMtc0OrMfc0 = 0;
		case (op)
			`op_special : special = 1;
			`op_lw : lw = 1;
			`op_sw : sw = 1;
			`op_lui : lui = 1;
			`op_beq : beq = 1;
			`op_jal : jal = 1;
			`op_ori : ori = 1;
			`op_lh : lh = 1;
			`op_sh : sh = 1;
			`op_lb : lb = 1;
			`op_sb : sb = 1;
			`op_addi : addi = 1;
			`op_andi : andi = 1;
			`op_bne : bne = 1;
			`op_eretOrMtc0OrMfc0 : eretOrMtc0OrMfc0 = 1;
			default : ;
		endcase
		if (special) case (funct)
			`funct_add : add = 1;
			`funct_sub : sub = 1;
			`funct_jr : jr = 1;
			`funct_sll : sll = 1;
			`funct_and : andand = 1;
			`funct_or : oror = 1;
			`funct_slt : slt = 1;
			`funct_sltu : sltu = 1;
			`funct_mult : mult = 1;
			`funct_multu : multu = 1;
			`funct_div : div = 1;
			`funct_divu : divu = 1;
			`funct_mthi : mthi = 1;
			`funct_mtlo : mtlo = 1;
			`funct_mfhi : mfhi = 1;
			`funct_mflo : mflo = 1;
			`funct_syscall : syscall = 1;
			default : ;
		endcase
		if (eretOrMtc0OrMfc0) begin
			if (funct == `funct_eret) eret = 1;
			if (instr[25:21] == 5'b00000) mfc0 = 1;
			if (instr[25:21] == 5'b00100) mtc0 = 1;
		end
	end
	//--------------------------------------
	assign imm16 = instr[15:0];
	assign imm26 = instr[25:0];
	always @(*) begin : get_tuse_tnew
		tuse_rs = 0;
		tuse_rt = 0;
		tnew = 0;
		tuse_rs[3] = mf | jal | lui | mfc0 | mtc0 | eret | syscall | srl;
		tuse_rs[0] = load | save | alu_r | alu_i | md | mt;
		tuse_rt[3] = load | alu_i | mt | mf | jal | jr | lui | mfc0 | eret | syscall;
		tuse_rt[1] = save | mtc0;
		tuse_rt[0] = alu_r | md | srl;
		tnew[3] = div | divu;
		tnew[2] = mult | multu | mf;
		tnew[1] = load | alu_r | alu_i | mult | multu | div | divu | mfc0 | srl;
		tnew[0] = load | jal | lui | mf | div | divu | mfc0;
	end
	always @(*) begin : get_cmpOp_nPcOp_extOp
		cmpOp = 0;
		nPcOp = 0;
		extOp = 0;
		cmpOp[1] = bne;
		cmpOp[0] = beq;
		nPcOp[2] = eret;
		nPcOp[1] = jal | jr;
		nPcOp[0] = j_b | jr;
		extOp[2] = jal | andi | ori;
		extOp[1] = j_b | lui;
		extOp[0] = load | save | lui | alu_i;
	end
	//--------------------------------------
	reg [3:0] regDstSel;
	assign shamt = instr[10:6];
	always @(*) begin : get_srcASel_srcBSel
		srcASel = 0;
		srcBSel = 0;
		srcASel[0] = load | save | alu_r | alu_i;
		srcBSel[1] = load | save | alu_i;
		srcBSel[0] = alu_r | srl;
	end
	always @(*) begin : get_aluOp
		aluOp = 0;
		aluOp[3] = addiu | srl;
		aluOp[2] = andand | slt | sltu | andi | sll;
		aluOp[1] = sub | slt | sltu | oror | ori;
		aluOp[0] = load | save | add | andand | andi | oror | ori | addi | sltu | srl;
	end
	always @(*) begin : get_d1Sel_d2Sel_mduOp
		d1Sel = 0;
		d2Sel = 0;
		mduOp = 0;
		d1Sel[0] = md | mt;
		d2Sel[0] = md;
		mduOp[2] = divu | mthi | mtlo;
		mduOp[1] = multu | div | mtlo;
		mduOp[0] = mult | div | mthi;
	end
	always @(*) begin : get_cp0Write_cp0AddrIn_cp0AddrOut
		cp0Write = 0;
		cp0AddrIn = 0;
		cp0AddrOut = 0;
		if (mfc0) cp0AddrIn = instr[15:11];
		if (mtc0) begin
			cp0Write = 1;
			cp0AddrOut = instr[15:11];
		end
	end
	always @(*) begin : get_regDstSel_regWdSel
		regDstSel = 0;
		regWdSel = 0;
		regDstSel[1] = load | alu_i | jal | lui | mfc0;
		regDstSel[0] = alu_r | mf | jal | srl;
		regWdSel[2] = jal | mfhi | mflo | mfc0;
		regWdSel[1] = load | lui | mflo | mfc0;
		regWdSel[0] = alu_r | alu_i | lui | mfhi | mfc0 | srl;
	end
	always @(*) begin : get_regDst
		case (regDstSel)
			`regDstSel_0 : regDst = 0;
			`regDstSel_15_11 : regDst = instr[15:11];
			`regDstSel_20_16 : regDst = instr[20:16];
			`regDstSel_31 : regDst = 31;
			default : regDst = 0;
		endcase
	end
	//------------------------------------
	always @(*) begin : get_memWrite_memOp
		memOp = 0;
		memWrite = save;
		memOp[1] = lh | lb | sh | sb;
		memOp[0] = lw | lb | sw | sb;
	end 
	//------------------------------------
	
endmodule
