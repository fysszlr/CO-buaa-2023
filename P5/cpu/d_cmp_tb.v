`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:05:11 11/09/2023
// Design Name:   d_cmp
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/d_cmp_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: d_cmp
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module d_cmp_tb;

	// Inputs
	reg [31:0] srcA;
	reg [31:0] srcB;
	reg [3:0] cmpOp;

	// Outputs
	wire branch;

	// Instantiate the Unit Under Test (UUT)
	d_cmp uut (
		.srcA(srcA), 
		.srcB(srcB), 
		.cmpOp(cmpOp), 
		.branch(branch)
	);

	initial begin
		// Initialize Inputs
		srcA = 0;
		srcB = 0;
		cmpOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

