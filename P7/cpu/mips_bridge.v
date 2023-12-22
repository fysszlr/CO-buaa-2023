`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:26:08 11/30/2023 
// Design Name: 
// Module Name:    mips_bridge 
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
`define dm_start 32'h00000000
`define dm_end 32'h00002fff
`define timer0_start 32'h00007f00
`define timer0_end 32'h00007f0b
`define timer1_start 32'h00007f10
`define timer1_end 32'h00007f1b
`define errorTimer_start 32'h00007f20
`define errorTimer_end 32'h00007f23
module mips_bridge(
	 output wire [31:0] m_data_addr,
	 output wire [31:0] m_data_wdata,
	 output wire [3:0] m_data_byteen,
	 input wire [31:0] m_data_rdata,
	 input wire [31:0] m_tmp_data_addr,
	 input wire [31:0] m_tmp_data_wdata,
	 input wire [3:0] m_tmp_data_byteen,
	 output wire [31:0] m_tmp_data_rdata,
	 output wire [31:0] timer0_addr,
	 output wire timer0_we,
	 output wire [31:0] timer0_wd,
	 input wire [31:0] timer0_rd,
	 output wire [31:0] timer1_addr,
	 output wire timer1_we,
	 output wire [31:0] timer1_wd,
	 input wire [31:0] timer1_rd
    );
	 
	wire timer0_sel = timer0_addr >= `timer0_start && timer0_addr <= `timer0_end;
	wire timer1_sel = timer1_addr >= `timer1_start && timer1_addr <= `timer1_end;
	wire we = |m_tmp_data_byteen;
	
	assign m_data_addr = m_tmp_data_addr;
	assign timer0_addr = m_tmp_data_addr;
	assign timer1_addr = m_tmp_data_addr;
	assign m_data_wdata = m_tmp_data_wdata;
	assign timer0_wd = m_tmp_data_wdata;
	assign timer1_wd = m_tmp_data_wdata;
	assign timer0_we = timer0_sel && we;
	assign timer1_we = timer1_sel && we;
	assign m_data_byteen = (timer0_we || timer1_we) ? 4'b0 : m_tmp_data_byteen;
	assign m_tmp_data_rdata = (timer0_sel) ? timer0_rd :
									  (timer1_sel) ? timer1_rd :
									  m_data_rdata;
endmodule
