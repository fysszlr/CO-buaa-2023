`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:00:04 11/09/2023 
// Design Name: 
// Module Name:    stall 
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
module stall(
    input wire [31:0] d_instr,
    input wire [31:0] e_instr,
    input wire [31:0] m_instr,
	 input wire e_mdu_busy,
    output wire stall
    );
	wire [3:0] d_tuse_rs;
	wire [3:0] d_tuse_rt;
	wire [3:0] d_tnew; 
	wire [4:0] d_rs;
	wire [4:0] d_rt;
	wire d_md,d_mt,d_mf,d_eret;
	controller d_judgeStall(
		.instr(d_instr),
		.rs(d_rs),
		.rt(d_rt),
		.tuse_rs(d_tuse_rs),
		.tuse_rt(d_tuse_rt),
		.tnew(d_tnew),
		.eret(d_eret),
		.md(d_md),
		.mt(d_mt),
		.mf(d_mf)
		);
	//----------------------
	wire [4:0] e_regDst;
	wire [3:0] e_tuse_rs;
	wire [3:0] e_tuse_rt;
	wire [3:0] e_d_tnew;
	wire [3:0] e_tnew;
	wire [4:0] e_cp0AddrOut;
	wire e_mdu_start,e_mtc0;
	assign e_tnew = (e_d_tnew > 1) ? e_d_tnew - 1 : 0;
	controller e_judgeStall(
		.instr(e_instr),
		.mtc0(e_mtc0),
		.cp0AddrOut(e_cp0AddrOut),
		.regDst(e_regDst),
		.tuse_rs(e_tuse_rs),
		.tuse_rt(e_tuse_rt),
		.tnew(e_d_tnew),
		.mdu_start(e_mdu_start)
		);
	//----------------------
	wire [4:0] m_regDst;
	wire [3:0] m_tuse_rs;
	wire [3:0] m_tuse_rt;
	wire [3:0] m_d_tnew;
	wire [3:0] m_tnew;
	wire [4:0] m_cp0AddrOut;
	wire m_mtc0;
	assign m_tnew = (m_d_tnew > 2) ? m_d_tnew - 2 : 0;
	controller m_judgeStall(
		.instr(m_instr),
		.mtc0(m_mtc0),
		.cp0AddrOut(m_cp0AddrOut),
		.regDst(m_regDst),
		.tuse_rs(m_tuse_rs),
		.tuse_rt(m_tuse_rt),
		.tnew(m_d_tnew)
		);
	//----------------------
	wire e_stall_rs = d_rs && (d_rs == e_regDst) && (d_tuse_rs < e_tnew);
	wire e_stall_rt = d_rt && (d_rt == e_regDst) && (d_tuse_rt < e_tnew);
	wire m_stall_rs = d_rs && (d_rs == m_regDst) && (d_tuse_rs < m_tnew);
	wire m_stall_rt = d_rt && (d_rt == m_regDst) && (d_tuse_rt < m_tnew);
	wire e_stall_mdu = (d_md || d_mt || d_mf) && (e_mdu_busy | e_mdu_start);
	wire d_eret_stall = d_eret && ((e_mtc0 && (e_cp0AddrOut == 12 || e_cp0AddrOut == 14)) || (m_mtc0 && (m_cp0AddrOut == 12 || m_cp0AddrOut == 14)));
	assign stall = e_stall_rs | e_stall_rt | m_stall_rs | m_stall_rt | e_stall_mdu | d_eret_stall;
	
endmodule
