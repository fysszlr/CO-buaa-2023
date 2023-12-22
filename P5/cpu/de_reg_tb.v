`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:55:02 11/09/2023
// Design Name:   de_reg
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/de_reg_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: de_reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module de_reg_tb;

	// Inputs
	reg clk;
	reg reset;
	reg halt;
	reg [31:0] d_pc;
	reg [31:0] d_instr;
	reg [31:0] d_extImm;
	reg [31:0] d_grf_rs;
	reg [31:0] d_grf_rt;

	// Outputs
	wire [31:0] e_pc;
	wire [31:0] e_instr;
	wire [31:0] e_extImm;
	wire [31:0] e_grf_rs;
	wire [31:0] e_grf_rt;

	// Instantiate the Unit Under Test (UUT)
	de_reg uut (
		.clk(clk), 
		.reset(reset), 
		.halt(halt), 
		.d_pc(d_pc), 
		.d_instr(d_instr), 
		.d_extImm(d_extImm), 
		.d_grf_rs(d_grf_rs), 
		.d_grf_rt(d_grf_rt), 
		.e_pc(e_pc), 
		.e_instr(e_instr), 
		.e_extImm(e_extImm), 
		.e_grf_rs(e_grf_rs), 
		.e_grf_rt(e_grf_rt)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		halt = 0;
		d_pc = 0;
		d_instr = 0;
		d_extImm = 0;
		d_grf_rs = 0;
		d_grf_rt = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

