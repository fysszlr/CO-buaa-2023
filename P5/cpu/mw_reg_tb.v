`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:54:48 11/09/2023
// Design Name:   mw_reg
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/mw_reg_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mw_reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mw_reg_tb;

	// Inputs
	reg clk;
	reg reset;
	reg halt;
	reg [31:0] m_pc;
	reg [31:0] m_instr;
	reg [31:0] m_memRd;
	reg [31:0] m_aluResult;
	reg [31:0] m_extImm;

	// Outputs
	wire [31:0] w_pc;
	wire [31:0] w_instr;
	wire [31:0] w_memRd;
	wire [31:0] w_aluResult;
	wire [31:0] w_extImm;

	// Instantiate the Unit Under Test (UUT)
	mw_reg uut (
		.clk(clk), 
		.reset(reset), 
		.halt(halt), 
		.m_pc(m_pc), 
		.m_instr(m_instr), 
		.m_memRd(m_memRd), 
		.m_aluResult(m_aluResult), 
		.m_extImm(m_extImm), 
		.w_pc(w_pc), 
		.w_instr(w_instr), 
		.w_memRd(w_memRd), 
		.w_aluResult(w_aluResult), 
		.w_extImm(w_extImm)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		halt = 0;
		m_pc = 0;
		m_instr = 0;
		m_memRd = 0;
		m_aluResult = 0;
		m_extImm = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

