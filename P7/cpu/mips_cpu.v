`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:52:54 11/14/2023 
// Design Name: 
// Module Name:    mips 
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
module cpu(
    input wire clk,
    input wire reset,
	 input wire [5:0] hwInt,
	 output wire [31:0] macroscopic_pc,
	 output wire testIntResponse,
    input wire [31:0] i_inst_rdata,
    input wire [31:0] m_data_rdata,
    output wire [31:0] i_inst_addr,
    output wire [31:0] m_data_addr,
    output wire [31:0] m_data_wdata,
    output wire [3 :0] m_data_byteen,
    output wire [31:0] m_inst_addr,
    output wire w_grf_we,
    output wire [4:0] w_grf_addr,
    output wire [31:0] w_grf_wdata,
    output wire [31:0] w_inst_addr
	 );
	
	wire stall;
	
	wire ifu_halt = stall;
	wire f_counter;
	wire [31:0] f_instr;
	wire [31:0] f_pc,f_tmp_pc;
	wire f_new_instr=0;
	wire f_err_pcAligned,f_err_pcAddrOv,f_err_pcAdel,f_delaySlot;
	wire [4:0] f_excCode;
	
	wire fd_reg_halt = stall;				
	wire [31:0] d_instr,d_pc,d_nPc,d_grf_rs,d_grf_rt,d_fwd_grf_rs,d_fwd_grf_rt,d_extImm,d_tmp_instr;
	wire [4:0] d_rs,d_rt;
	wire [15:0] d_imm16;
	wire [25:0] d_imm26;
	wire [3:0] d_nPcOp,d_extOp,d_cmpOp;
	wire d_branch,d_new_instr;
	wire d_err_eret,d_err_syscall,d_delaySlot,d_err_ri,d_delaySlotCode;
	wire [4:0] d_tmp_excCode,d_excCode;
	
	wire de_reg_halt = stall;
	wire [31:0] e_instr,e_pc,e_extImm,e_grf_rs,e_grf_rt,e_fwd_grf_rs,e_fwd_grf_rt,e_aluResult,e_hi,e_lo;
	reg [31:0] e_sendWd,e_srcA,e_srcB,e_d1,e_d2;
	wire [4:0] e_regDst,e_rs,e_rt,e_shamt;
	wire [3:0] e_regWdSel,e_srcASel,e_srcBSel,e_aluOp,e_d1Sel,e_d2Sel,e_mduOp;
	wire e_new_instr,e_mdu_busy,e_mdu_start;
	wire [4:0] e_tmp_excCode,e_excCode;
	wire e_err_dmAdel,e_err_dmAdes,e_err_ariOv,e_delaySlot,e_err_dmOv,e_aluDmOv,e_aluAriOv,e_memWrite;
	
	wire em_reg_halt = 0;
	wire [31:0] m_aluResult,m_grf_rt,m_fwd_grf_rt,m_extImm,m_pc,m_instr,m_memRd,m_hi,m_lo,m_epc,m_cp0Wd;
	reg [31:0] m_sendWd;
	wire [31:0] m_cp0Rd;
	wire [4:0] m_regDst,m_rt;
	wire [3:0] m_regWdSel,m_memOp;
	wire m_memWrite,m_new_instr,m_eret;
	wire [4:0] m_tmp_excCode,m_excCode;
	wire m_req,m_delaySlot,m_err_dmAdel,m_err_dmAdes,m_cp0Write,m_exlClr;
	wire [4:0] m_cp0AddrIn,m_cp0AddrOut;
	wire m_tmp_memWrite;
	
	wire mw_reg_halt = 0;
	wire [31:0] w_pc,w_instr,w_memRd,w_aluResult,w_extImm,w_hi,w_lo,w_cp0Rd;
	reg [31:0] w_sendWd;
	wire [4:0] w_regDst;
	wire [3:0] w_regWdSel;
	wire w_new_instr;
	
	stall _stall(
		.d_instr(d_instr),
		.e_instr(e_instr),
		.m_instr(m_instr),
		.e_mdu_busy(e_mdu_busy),
		.stall(stall)
		);
	//----------------------------------
	assign i_inst_addr = f_pc;
	assign f_err_pcAligned = |f_pc[1:0];
	assign f_err_pcAddrOv = !(f_pc >= 32'h00003000 && f_pc <= 32'h00006ffc);
	assign f_err_pcAdel = (f_err_pcAligned || f_err_pcAddrOv) && !d_err_eret;
	assign f_pc = d_err_eret ? m_epc : f_tmp_pc;
	assign f_instr = f_err_pcAdel ? 32'b0 : i_inst_rdata;
	assign f_excCode = (f_err_pcAdel) ? `excCode_adel : `excCode_nope;
	assign f_delaySlot = (d_delaySlotCode) ? 1 : 0;
	f_ifu _ifu(
	 .clk(clk),
	 .reset(reset),
	 .req(m_req),
	 .halt(ifu_halt),
	 .nPc(d_nPc),
	 .pc(f_tmp_pc)
	 );
	//-----------------------------------	 
	fd_reg _fd_reg (
	 .clk(clk), 
	 .reset(reset), 
	 .halt(fd_reg_halt), 
	 .req(m_req),
  	 .f_pc(f_pc), 
	 .f_instr(f_instr), 
	 .f_new_instr(f_new_instr),
	 .f_excCode(f_excCode),
	 .f_delaySlot(f_delaySlot),
	 .d_pc(d_pc), 
	 .d_instr(d_tmp_instr),
	 .d_new_instr(d_new_instr),
	 .d_excCode(d_tmp_excCode),
	 .d_delaySlot(d_delaySlot)
	 );
	assign d_fwd_grf_rs = (d_rs == 0) ? 0 :
								 (d_rs == e_regDst) ? e_sendWd :
								 (d_rs == m_regDst) ? m_sendWd :
								 d_grf_rs;
	assign d_fwd_grf_rt = (d_rt == 0) ? 0 :
								 (d_rt == e_regDst) ? e_sendWd :
								 (d_rt == m_regDst) ? m_sendWd :
								 d_grf_rt;		
	assign d_excCode = d_tmp_excCode ? d_tmp_excCode :
							 d_err_syscall ? `excCode_syscall :
							 d_err_ri ? `excCode_ri :
							 `excCode_nope;
	assign d_instr = d_err_ri ? 32'b0 : d_tmp_instr;
	controller d_controller(
	 .instr(d_tmp_instr),
	 .new_instr(0),
	 .rs(d_rs),
	 .rt(d_rt),
	 .eret(d_err_eret),
	 .ri(d_err_ri),
	 .syscall(d_err_syscall),
	 .delaySlotCode(d_delaySlotCode),
	 .imm16(d_imm16),
	 .imm26(d_imm26), 
	 .cmpOp(d_cmpOp),
	 .nPcOp(d_nPcOp),
	 .extOp(d_extOp)
	 );
	d_grf _grf (
    .clk(clk), 
    .reset(reset), 
    .pc(w_pc), 
	 .instr(d_instr),
    .rs(d_rs), 
    .rt(d_rt), 
    .regDst(w_regDst), 
    .regWd(w_sendWd), 
    .grf_rs(d_grf_rs), 
    .grf_rt(d_grf_rt)
    );
	d_cmp _cmp (
    .srcA(d_fwd_grf_rs), 
    .srcB(d_fwd_grf_rt), 
    .cmpOp(d_cmpOp), 
    .branch(d_branch)
    );
	d_ext _ext (
    .imm16(d_imm16), 
    .imm26(d_imm26), 
    .extOp(d_extOp), 
    .pc(d_pc), 
    .extImm(d_extImm)
    );
	d_npc _npc (
    .f_pc(f_pc), 
    .d_pc(d_pc), 
    .nPcOp(d_nPcOp), 
	 .epc(m_epc),
    .branch(d_branch), 
    .extImm(d_extImm), 
    .grf_rs(d_fwd_grf_rs), 
    .nPc(d_nPc)
    );
	//-----------------------------------
	de_reg _de_reg (
    .clk(clk), 
    .reset(reset), 
    .halt(de_reg_halt), 
	 .req(m_req),
    .d_pc(d_pc), 
    .d_instr(d_instr), 
    .d_extImm(d_extImm), 
    .d_grf_rs(d_fwd_grf_rs), 
    .d_grf_rt(d_fwd_grf_rt), 
	 .d_new_instr(d_new_instr),
	 .d_excCode(d_excCode),
	 .d_delaySlot(d_delaySlot),
    .e_pc(e_pc), 
    .e_instr(e_instr), 
    .e_extImm(e_extImm), 
    .e_grf_rs(e_grf_rs), 
    .e_grf_rt(e_grf_rt),
	 .e_new_instr(e_new_instr),
	 .e_excCode(e_tmp_excCode),
	 .e_delaySlot(e_delaySlot)
    );
	assign e_fwd_grf_rs = (e_rs == 0) ? 0 :
								 (e_rs == m_regDst) ? m_sendWd :
								 (e_rs == w_regDst) ? w_sendWd :
								 e_grf_rs;
	assign e_fwd_grf_rt = (e_rt == 0) ? 0 :
								 (e_rt == m_regDst) ? m_sendWd :
								 (e_rt == w_regDst) ? w_sendWd :
								 e_grf_rt;		
	assign e_err_dmAdel = e_err_dmOv && !e_memWrite;
	assign e_err_dmAdes = e_err_dmOv && e_memWrite;
	assign e_excCode = e_tmp_excCode ? e_tmp_excCode : 
							 e_err_ariOv ? `excCode_ov :
							 e_err_dmAdel ? `excCode_adel :
							 e_err_dmAdes ? `excCode_ades :
							 `excCode_nope;
	always @(*) begin : get_e_sendWd
		case (e_regWdSel)
			`regWdSel_nope : e_sendWd = 0;
			`regWdSel_extImm : e_sendWd = e_extImm;
			`regWdSel_pc4 : e_sendWd = e_pc + 8;
			default : e_sendWd = 0;
		endcase
	end
	always @(*) begin : get_srcA_srcB
		case (e_srcASel) 
			`srcASel_nope : e_srcA = 0;
			`srcASel_grf_rs : e_srcA = e_fwd_grf_rs;
			default : e_srcA = 0;
		endcase
		case (e_srcBSel)
			`srcBSel_nope : e_srcB = 0;
			`srcBSel_grf_rt : e_srcB = e_fwd_grf_rt;
			`srcBSel_extImm : e_srcB = e_extImm;
			default : e_srcB = 0;
		endcase
	end
	always @(*) begin : get_d1_d2
		case (e_d1Sel)
			`d1Sel_nope : e_d1 = 0;
			`d1Sel_grf_rs : e_d1 = e_fwd_grf_rs;
			default : e_d1 = 0;
		endcase
		case (e_d2Sel)
			`d2Sel_nope : e_d2 = 0;
			`d2Sel_grf_rt : e_d2 = e_fwd_grf_rt;
			default : e_d2 = 0;
		endcase
	end 
	controller e_controller(
	 .instr(e_instr),
	 .new_instr(0),
	 .rs(e_rs),
	 .rt(e_rt),
	 .aluOp(e_aluOp),
	 .srcASel(e_srcASel),
	 .srcBSel(e_srcBSel),
	 .shamt(e_shamt),
	 .regDst(e_regDst),
	 .regWdSel(e_regWdSel),
	 .d1Sel(e_d1Sel),
	 .d2Sel(e_d2Sel),
	 .mduOp(e_mduOp),
	 .mdu_start(e_mdu_start),
	 .aluDmOv(e_aluDmOv),
	 .aluAriOv(e_aluAriOv),
	 .memWrite(e_memWrite)
	 );
	e_alu _alu(
	 .aluDmOv(e_aluDmOv),
	 .aluAriOv(e_aluAriOv),
    .srcA(e_srcA), 
    .srcB(e_srcB), 
    .shamt(e_shamt), 
    .aluOp(e_aluOp), 
    .aluResult(e_aluResult),
	 .err_dmOv(e_err_dmOv),
	 .err_ariOv(e_err_ariOv)
    );
	e_mdu _mdu(
	 .clk(clk),
	 .reset(reset),
	 .mduOp(e_mduOp),
	 .req(m_req),
	 .d1(e_fwd_grf_rs),
	 .d2(e_fwd_grf_rt),
	 .start(e_mdu_start),
	 .busy(e_mdu_busy),
	 .hi(e_hi),
	 .lo(e_lo)
	 );
	//-----------------------------------
	em_reg _em_reg (
    .clk(clk), 
    .reset(reset), 
    .halt(em_reg_halt), 
	 .req(m_req),
    .e_pc(e_pc), 
    .e_instr(e_instr), 
    .e_extImm(e_extImm), 
    .e_grf_rt(e_fwd_grf_rt), 
    .e_aluResult(e_aluResult), 
	 .e_hi(e_hi),
	 .e_lo(e_lo),
	 .e_new_instr(e_new_instr),
	 .e_excCode(e_excCode),
	 .e_delaySlot(e_delaySlot),
    .m_pc(m_pc), 
    .m_instr(m_instr), 
    .m_extImm(m_extImm), 
    .m_grf_rt(m_grf_rt), 
    .m_aluResult(m_aluResult),
	 .m_hi(m_hi),
	 .m_lo(m_lo),
	 .m_new_instr(m_new_instr),
	 .m_excCode(m_tmp_excCode),
	 .m_delaySlot(m_delaySlot)
    );
	assign m_fwd_grf_rt = (m_rt == 0) ? 0 :
								 (m_rt == w_regDst) ? w_sendWd :
								 m_grf_rt;
	
	assign m_inst_addr = m_pc;
	assign m_data_addr = m_aluResult;
	assign m_excCode = m_tmp_excCode ? m_tmp_excCode :
							 m_err_dmAdel ? `excCode_adel :
							 m_err_dmAdes ? `excCode_ades :
							 `excCode_nope;
	assign macroscopic_pc = m_pc;
	assign m_cp0Wd = m_fwd_grf_rt;
	assign m_exlClr = m_eret;
	assign m_memWrite = m_tmp_memWrite & !m_req;
	always @(*) begin : get_m_sendWd
		case (m_regWdSel)
			`regWdSel_nope : m_sendWd = 0;
			`regWdSel_aluResult : m_sendWd = m_aluResult;
			`regWdSel_extImm : m_sendWd = m_extImm;
			`regWdSel_pc4 : m_sendWd = m_pc + 8;
			`regWdSel_hi : m_sendWd = m_hi;
			`regWdSel_lo : m_sendWd = m_lo;
			default : m_sendWd = 0;
		endcase
	end
	controller m_controller(
	 .instr(m_instr),
	 .new_instr(0),
	 .rt(m_rt),
	 .eret(m_eret),
	 .memOp(m_memOp),
	 .memWrite(m_tmp_memWrite),
	 .regDst(m_regDst),
	 .regWdSel(m_regWdSel),
	 .cp0Write(m_cp0Write),
	 .cp0AddrIn(m_cp0AddrIn),
	 .cp0AddrOut(m_cp0AddrOut)
	 );
	m_dm _dm (
    .memOp(m_memOp),
	 .tmp_memWrite(m_tmp_memWrite),
	 .memWrite(m_memWrite),
	 .data_addr(m_data_addr),
	 .data_rdata(m_data_rdata),
	 .fwd_grf_rt(m_fwd_grf_rt),
	 .data_byteen(m_data_byteen),
	 .data_wdata(m_data_wdata),
	 .memRd(m_memRd),
	 .err_dmAdel(m_err_dmAdel),
	 .err_dmAdes(m_err_dmAdes)
    );
	m_cp0 _cp0 (
	 .clk(clk),
	 .reset(reset),
	 .cp0Write(m_cp0Write),
	 .a1(m_cp0AddrIn),
	 .a2(m_cp0AddrOut),
	 .din(m_cp0Wd),
	 .pc(m_pc),
	 .instr(m_instr),
	 .excCodeIn(m_excCode),
	 .delaySlot(m_delaySlot),
	 .hwInt(hwInt),
	 .exlClr(m_exlClr),
	 .req(m_req),
	 .epcOut(m_epc),
	 .dout(m_cp0Rd),
	 .testIntResponse(testIntResponse)
	 );
	//------------------------------------
	mw_reg _mw_reg (
    .clk(clk), 
    .reset(reset), 
    .halt(mw_reg_halt), 
	 .req(m_req),
    .m_pc(m_pc),
    .m_instr(m_instr), 
    .m_memRd(m_memRd), 
    .m_aluResult(m_aluResult), 
	 .m_extImm(m_extImm),
	 .m_hi(m_hi),
	 .m_lo(m_lo),
	 .m_new_instr(m_new_instr),
	 .m_cp0Rd(m_cp0Rd),
    .w_pc(w_pc), 
    .w_instr(w_instr), 
    .w_memRd(w_memRd), 
    .w_aluResult(w_aluResult),
	 .w_extImm(w_extImm),
	 .w_hi(w_hi),
	 .w_lo(w_lo),
	 .w_new_instr(w_new_instr),
	 .w_cp0Rd(w_cp0Rd)
    );
	assign w_grf_we = (w_regDst == 0) ? 0 : 1;
	assign w_grf_addr = w_regDst;
	assign w_grf_wdata = w_sendWd;
	assign w_inst_addr = w_pc;
	always @(*) begin : get_w_sendWd
		case (w_regWdSel) 
			`regWdSel_nope : w_sendWd = 0;
			`regWdSel_aluResult : w_sendWd = w_aluResult;
			`regWdSel_memRd : w_sendWd = w_memRd;
			`regWdSel_extImm : w_sendWd = w_extImm;
			`regWdSel_pc4 : w_sendWd = w_pc + 8;
			`regWdSel_hi : w_sendWd = w_hi;
			`regWdSel_lo : w_sendWd = w_lo;
			`regWdSel_cp0Rd : w_sendWd = w_cp0Rd;
			default : w_sendWd = 0;
		endcase
	end
	controller w_controller(
	 .instr(w_instr),
	 .new_instr(0),
	 .regDst(w_regDst),
	 .regWdSel(w_regWdSel)
	 );

endmodule
