`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:19:45 11/09/2023
// Design Name:   f_ifu
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/f_ifu_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: f_ifu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module f_ifu_tb;

	// Inputs
	reg clk;
	reg counter;
	reg halt;
	reg [31:0] nPc;

	// Outputs
	wire [31:0] pc;
	wire [31:0] instr;

	// Instantiate the Unit Under Test (UUT)
	f_ifu uut (
		.clk(clk), 
		.counter(counter), 
		.halt(halt), 
		.nPc(nPc), 
		.pc(pc), 
		.instr(instr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		counter = 0;
		halt = 0;
		nPc = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

