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
	 
	 output reg [3:0] srcASel,
	 output reg [3:0] srcBSel,
	 output wire [4:0] shamt,
	 output reg [3:0] aluOp,
	 output reg [4:0] regDst,
	 output reg [3:0] regWdSel,
	 
	 output reg memWrite,
	 output reg [3:0] memOp 
	 );
	wire [5:0] op;
	wire [5:0] funct;
	reg special;
	reg add,sub,sll;
	reg ori,lw,sw,lui,beq,jal,jr,j,lh,sh,lb,sb;
	assign op = instr[31:26];
	assign funct = instr[5:0];
	assign rs = instr[25:21];
	assign rt = instr[20:16];
	always @(*) begin : and_logic_or_logic
		special = 0;
		add = 0;
		sub = 0;
		ori = 0;
		lw = 0;
		sw = 0;
		lui = 0;
		beq = 0;
		jal = 0;
		jr = 0;
		sll = 0;
		j = 0;
		lh = 0;
		sh = 0;
		lb = 0;
		sb = 0;
		case (op)
			`op_special : special = 1;
			`op_lw : lw = 1;
			`op_sw : sw = 1;
			`op_lui : lui = 1;
			`op_beq : beq = 1;
			`op_jal : jal = 1;
			`op_ori : ori = 1;
			`op_j : j = 1;
			`op_lh : lh = 1;
			`op_sh : sh = 1;
			`op_lb : lb = 1;
			`op_sb : sb = 1;
			default : ;
		endcase
		if (special) case (funct)
			`funct_add : add = 1;
			`funct_sub : sub = 1;
			`funct_jr : jr = 1;
			`funct_sll : sll = 1;
		endcase
	end
	//--------------------------------------
	assign imm16 = instr[15:0];
	assign imm26 = instr[25:0];
	always @(*) begin : get_tuse_tnew
		tuse_rs = 0;
		tuse_rt = 0;
		tnew = 0;
		tuse_rs[3] = lui | jal | sll | j;
		tuse_rs[0] = add | sub | ori | lw | sw | lh | sh | lb | sb;
		tuse_rt[3] = jal | jr | ori | lw | lui | j | lh | lb;
		tuse_rt[1] = sw | sh | sb;
		tuse_rt[0] = add | sub | sll;
		tnew[1] = add | sub | ori | lw | sll | lh | lb;
		tnew[0] = lw | lui | jal | jr | lb | lh;	
	end
	always @(*) begin : get_cmpOp_nPcOp_extOp
		cmpOp = 0;
		nPcOp = 0;
		extOp = 0;
		cmpOp[0] = beq;
		nPcOp[1] = jal | jr | j;
		nPcOp[0] = beq | jr;
		extOp[2] = ori | jal | j;
		extOp[1] = beq | lui;
		extOp[0] = ori | lw | sw | lui | lh | sh | lb | sb;
	end
	//--------------------------------------
	reg [3:0] regDstSel;
	assign shamt = instr[10:6];
	always @(*) begin : get_srcASel_srcBSel
		srcASel = 0;
		srcBSel = 0;
		srcASel[0] = add | sub | ori | lw | sw | lh | sh | lb | sb;
		srcBSel[1] = ori | lw | sw | lh | sh | lb | sb;
		srcBSel[0] = add | sub | sll;
	end
	always @(*) begin : get_aluOp
		aluOp = 0;
		aluOp[2] = sll;
		aluOp[1] = sub | ori;
		aluOp[0] = add | ori | lw | sw | lh | sh | lb | sb;
	end
	always @(*) begin : get_regDstSel_regWdSel
		regDstSel = 0;
		regWdSel = 0;
		regDstSel[1] = ori | lw | lui | jal | lh | lb;
		regDstSel[0] = add | sub | jal | sll;
		regWdSel[2] = jal;
		regWdSel[1] = lw | lui | lh | lb;
		regWdSel[0] = add | sub | ori | lui | sll;
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
		memWrite = sw | sh | sb;
		memOp[1] = lh | sh | lb | sb;
		memOp[0] = lw | sw | lb | sb;
	end 
	//------------------------------------
	
endmodule
