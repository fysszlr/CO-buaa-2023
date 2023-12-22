`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:31:55 11/09/2023 
// Design Name: 
// Module Name:    mw_reg 
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
module mw_reg(
    input wire clk,
    input wire reset,
    input wire halt,
    input wire [31:0] m_pc,
    input wire [31:0] m_instr,
    input wire [31:0] m_memRd,
    input wire [31:0] m_aluResult,
	 input wire [31:0] m_extImm,
	 input wire m_new_instr,
    output wire [31:0] w_pc,
    output wire [31:0] w_instr,
    output wire [31:0] w_memRd,
    output wire [31:0] w_aluResult,
	 output wire [31:0] w_extImm,
	 output wire w_new_instr
    );
	reg [31:0] pc;
	reg [31:0] instr;
	reg [31:0] memRd;
	reg [31:0] aluResult;
	reg [31:0] extImm;
	reg new_instr;
	assign w_pc = pc;
	assign w_instr = instr;
	assign w_memRd = memRd;
	assign w_aluResult = aluResult;
	assign w_extImm = extImm;
	assign w_new_instr = new_instr;
	always @(posedge clk) begin
		if (reset || halt) begin
			pc <= 0;
			instr <= 0;
			memRd <= 0;
			aluResult <= 0;
			extImm <= 0;
			new_instr <= 0;
		end
		else begin
			pc <= m_pc;
			instr <= m_instr;
			memRd <= m_memRd;
			aluResult <= m_aluResult;
			extImm <= m_extImm;
			new_instr <= m_new_instr;
		end
	end
	
endmodule
