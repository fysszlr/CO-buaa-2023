`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:20:08 11/09/2023 
// Design Name: 
// Module Name:    em_reg 
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
module em_reg(
    input wire clk,
    input wire reset,
    input wire halt,
    input wire [31:0] e_pc,
    input wire [31:0] e_instr,
    input wire [31:0] e_extImm,
    input wire [31:0] e_grf_rt,
    input wire [31:0] e_aluResult,
	 input wire [31:0] e_hi,
	 input wire [31:0] e_lo,
	 input wire e_new_instr,
    output wire [31:0] m_pc,
    output wire [31:0] m_instr,
    output wire [31:0] m_extImm,
    output wire [31:0] m_grf_rt,
    output wire [31:0] m_aluResult,
	 output wire [31:0] m_hi,
	 output wire [31:0] m_lo,
	 output wire m_new_instr
    );
	reg [31:0] pc;
	reg [31:0] instr;
	reg [31:0] extImm;
	reg [31:0] grf_rt;
	reg [31:0] aluResult;
	reg [31:0] hi;
	reg [31:0] lo;
	reg new_instr;
	assign m_pc = pc;
	assign m_instr = instr;
	assign m_extImm = extImm;
	assign m_grf_rt = grf_rt;
	assign m_aluResult = aluResult;
	assign m_new_instr = new_instr;
	assign m_hi = hi;
	assign m_lo = lo;
	always @(posedge clk) begin
		if (reset || halt) begin
			pc <= 0;
			instr <= 0;
			extImm <= 0;
			grf_rt <= 0;
			aluResult <= 0;
			hi <= 0;
			lo <= 0;
			new_instr <= 0;
		end
		else begin
			pc <= e_pc;
			instr <= e_instr;
			extImm <= e_extImm;
			grf_rt <= e_grf_rt;
			aluResult <= e_aluResult;
			hi <= e_hi;
			lo <= e_lo;
			new_instr <= e_new_instr;
		end
	end

endmodule
