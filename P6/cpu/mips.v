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
module mips(
    input wire clk,
    input wire reset,
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
	wire [31:0] f_pc;
	wire f_new_instr=0;
	
	wire fd_reg_halt = stall;				
	wire [31:0] d_instr,d_pc,d_nPc,d_grf_rs,d_grf_rt,d_fwd_grf_rs,d_fwd_grf_rt,d_extImm;
	wire [4:0] d_rs,d_rt;
	wire [15:0] d_imm16;
	wire [25:0] d_imm26;
	wire [3:0] d_nPcOp,d_extOp,d_cmpOp;
	wire d_branch,d_new_instr;
	
	wire de_reg_halt = stall;
	wire [31:0] e_instr,e_pc,e_extImm,e_grf_rs,e_grf_rt,e_fwd_grf_rs,e_fwd_grf_rt,e_aluResult,e_hi,e_lo;
	reg [31:0] e_sendWd,e_srcA,e_srcB,e_d1,e_d2;
	wire [4:0] e_regDst,e_rs,e_rt,e_shamt;
	wire [3:0] e_regWdSel,e_srcASel,e_srcBSel,e_aluOp,e_d1Sel,e_d2Sel,e_mduOp;
	wire e_new_instr,e_mdu_busy,e_mdu_start;
	
	wire em_reg_halt = 0;
	wire [31:0] m_aluResult,m_grf_rt,m_fwd_grf_rt,m_extImm,m_pc,m_instr,m_memRd,m_hi,m_lo;
	reg [31:0] m_sendWd;
	wire [4:0] m_regDst,m_rt;
	wire [3:0] m_regWdSel,m_memOp;
	wire m_memWrite,m_new_instr;
	
	wire mw_reg_halt = 0;
	wire [31:0] w_pc,w_instr,w_memRd,w_aluResult,w_extImm,w_hi,w_lo;
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
	assign f_instr = i_inst_rdata;
	f_ifu _ifu(
	 .clk(clk),
	 .reset(reset),
	 .halt(ifu_halt),
	 .nPc(d_nPc),
	 .pc(f_pc)
	 );
	//-----------------------------------	 
	fd_reg _fd_reg (
	 .clk(clk), 
	 .reset(reset), 
	 .halt(fd_reg_halt), 
  	 .f_pc(f_pc), 
	 .f_instr(f_instr), 
	 .f_new_instr(f_new_instr),
	 .d_pc(d_pc), 
	 .d_instr(d_instr),
	 .d_new_instr(d_new_instr)
	 );
	assign d_fwd_grf_rs = (d_rs == 0) ? 0 :
								 (d_rs == e_regDst) ? e_sendWd :
								 (d_rs == m_regDst) ? m_sendWd :
								 d_grf_rs;
	assign d_fwd_grf_rt = (d_rt == 0) ? 0 :
								 (d_rt == e_regDst) ? e_sendWd :
								 (d_rt == m_regDst) ? m_sendWd :
								 d_grf_rt;		
	controller d_controller(
	 .instr(d_instr),
	 .new_instr(0),
	 .rs(d_rs),
	 .rt(d_rt),
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
    .d_pc(d_pc), 
    .d_instr(d_instr), 
    .d_extImm(d_extImm), 
    .d_grf_rs(d_fwd_grf_rs), 
    .d_grf_rt(d_fwd_grf_rt), 
	 .d_new_instr(d_new_instr),
    .e_pc(e_pc), 
    .e_instr(e_instr), 
    .e_extImm(e_extImm), 
    .e_grf_rs(e_grf_rs), 
    .e_grf_rt(e_grf_rt),
	 .e_new_instr(e_new_instr) 
    );
	assign e_fwd_grf_rs = (e_rs == 0) ? 0 :
								 (e_rs == m_regDst) ? m_sendWd :
								 (e_rs == w_regDst) ? w_sendWd :
								 e_grf_rs;
	assign e_fwd_grf_rt = (e_rt == 0) ? 0 :
								 (e_rt == m_regDst) ? m_sendWd :
								 (e_rt == w_regDst) ? w_sendWd :
								 e_grf_rt;		
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
	 .mdu_start(e_mdu_start)
	 );
	e_alu _alu(
    .srcA(e_srcA), 
    .srcB(e_srcB), 
    .shamt(e_shamt), 
    .aluOp(e_aluOp), 
    .aluResult(e_aluResult)
    );
	e_mdu _mdu(
	 .clk(clk),
	 .reset(reset),
	 .mduOp(e_mduOp),
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
    .e_pc(e_pc), 
    .e_instr(e_instr), 
    .e_extImm(e_extImm), 
    .e_grf_rt(e_fwd_grf_rt), 
    .e_aluResult(e_aluResult), 
	 .e_new_instr(e_new_instr),
	 .e_hi(e_hi),
	 .e_lo(e_lo),
    .m_pc(m_pc), 
    .m_instr(m_instr), 
    .m_extImm(m_extImm), 
    .m_grf_rt(m_grf_rt), 
    .m_aluResult(m_aluResult),
	 .m_hi(m_hi),
	 .m_lo(m_lo),
	 .m_new_instr(m_new_instr)
    );
	assign m_fwd_grf_rt = (m_rt == 0) ? 0 :
								 (m_rt == w_regDst) ? w_sendWd :
								 m_grf_rt;
	
	assign m_inst_addr = m_pc;
	assign m_data_addr = m_aluResult;
	
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
	 .memOp(m_memOp),
	 .memWrite(m_memWrite),
	 .regDst(m_regDst),
	 .regWdSel(m_regWdSel)
	 );
	m_dm _dm (
    .memOp(m_memOp),
	 .memWrite(m_memWrite),
	 .data_addr(m_data_addr),
	 .data_rdata(m_data_rdata),
	 .fwd_grf_rt(m_fwd_grf_rt),
	 .data_byteen(m_data_byteen),
	 .data_wdata(m_data_wdata),
	 .memRd(m_memRd)
    );
	//------------------------------------
	mw_reg _mw_reg (
    .clk(clk), 
    .reset(reset), 
    .halt(mw_reg_halt), 
    .m_pc(m_pc), 
    .m_instr(m_instr), 
    .m_memRd(m_memRd), 
    .m_aluResult(m_aluResult), 
	 .m_extImm(m_extImm),
	 .m_hi(m_hi),
	 .m_lo(m_lo),
	 .m_new_instr(m_new_instr),
    .w_pc(w_pc), 
    .w_instr(w_instr), 
    .w_memRd(w_memRd), 
    .w_aluResult(w_aluResult),
	 .w_extImm(w_extImm),
	 .w_hi(w_hi),
	 .w_lo(w_lo),
	 .w_new_instr(w_new_instr)
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
