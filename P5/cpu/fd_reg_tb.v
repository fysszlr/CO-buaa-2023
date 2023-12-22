`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:55:30 11/09/2023
// Design Name:   fd_reg
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/fd_reg_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fd_reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fd_reg_tb;

	// Inputs
	reg clk;
	reg reset;
	reg halt;
	reg [31:0] f_pc;
	reg [31:0] f_instr;

	// Outputs
	wire [31:0] d_pc;
	wire [31:0] d_instr;

	// Instantiate the Unit Under Test (UUT)
	fd_reg uut (
		.clk(clk), 
		.reset(reset), 
		.halt(halt), 
		.f_pc(f_pc), 
		.f_instr(f_instr), 
		.d_pc(d_pc), 
		.d_instr(d_instr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		halt = 0;
		f_pc = 0;
		f_instr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

