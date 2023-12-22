`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:33:07 10/31/2023
// Design Name:   sll
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P4/cpu/sll_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sll
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sll_tb;

	// Inputs
	reg [15:0] imm;
	reg sllOp;

	// Outputs
	wire [31:0] sllImm;

	// Instantiate the Unit Under Test (UUT)
	sll uut (
		.imm(imm), 
		.sllOp(sllOp), 
		.sllImm(sllImm)
	);

	initial begin
		// Initialize Inputs
		imm = 0;
		sllOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

