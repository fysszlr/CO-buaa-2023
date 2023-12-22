`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:55:16 11/09/2023
// Design Name:   em_reg
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/em_reg_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: em_reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module em_reg_tb;

	// Inputs
	reg clk;
	reg reset;
	reg halt;
	reg [31:0] e_pc;
	reg [31:0] e_instr;
	reg [31:0] e_extImm;
	reg [31:0] e_grf_rt;
	reg [31:0] e_aluResult;
	reg [31:0] m_pc;
	reg [31:0] m_instr;
	reg [31:0] m_extImm;
	reg [31:0] m_grf_rt;
	reg [31:0] m_aluResult;

	// Instantiate the Unit Under Test (UUT)
	em_reg uut (
		.clk(clk), 
		.reset(reset), 
		.halt(halt), 
		.e_pc(e_pc), 
		.e_instr(e_instr), 
		.e_extImm(e_extImm), 
		.e_grf_rt(e_grf_rt), 
		.e_aluResult(e_aluResult), 
		.m_pc(m_pc), 
		.m_instr(m_instr), 
		.m_extImm(m_extImm), 
		.m_grf_rt(m_grf_rt), 
		.m_aluResult(m_aluResult)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		halt = 0;
		e_pc = 0;
		e_instr = 0;
		e_extImm = 0;
		e_grf_rt = 0;
		e_aluResult = 0;
		m_pc = 0;
		m_instr = 0;
		m_extImm = 0;
		m_grf_rt = 0;
		m_aluResult = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

