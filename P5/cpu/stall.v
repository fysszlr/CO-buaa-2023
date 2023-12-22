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
module stall(
    input wire [31:0] d_instr,
    input wire [31:0] e_instr,
    input wire [31:0] m_instr,
    output wire stall
    );
	wire [3:0] d_tuse_rs;
	wire [3:0] d_tuse_rt;
	wire [3:0] d_tnew; 
	wire [4:0] d_rs;
	wire [4:0] d_rt;
	controller d_judgeStall(
		.instr(d_instr),
		.rs(d_rs),
		.rt(d_rt),
		.tuse_rs(d_tuse_rs),
		.tuse_rt(d_tuse_rt),
		.tnew(d_tnew)
		);
	//----------------------
	wire [4:0] e_regDst;
	wire [3:0] e_tuse_rs;
	wire [3:0] e_tuse_rt;
	wire [3:0] e_d_tnew;
	wire [3:0] e_tnew;
	assign e_tnew = (e_d_tnew > 1) ? e_d_tnew - 1 : 0;
	controller e_judgeStall(
		.instr(e_instr),
		.regDst(e_regDst),
		.tuse_rs(e_tuse_rs),
		.tuse_rt(e_tuse_rt),
		.tnew(e_d_tnew)
		);
	//----------------------
	wire [4:0] m_regDst;
	wire [3:0] m_tuse_rs;
	wire [3:0] m_tuse_rt;
	wire [3:0] m_d_tnew;
	wire [3:0] m_tnew;
	assign m_tnew = (m_d_tnew > 2) ? m_d_tnew - 2 : 0;
	controller m_judgeStall(
		.instr(m_instr),
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
	assign stall = e_stall_rs | e_stall_rt | m_stall_rs | m_stall_rt;
	
endmodule
