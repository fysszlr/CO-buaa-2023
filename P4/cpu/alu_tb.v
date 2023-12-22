`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:20:50 10/31/2023
// Design Name:   alu
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P4/cpu/alu_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [31:0] srcA;
	reg [31:0] srcB;
	reg [1:0] aluOp;

	// Outputs
	wire zero;
	wire [31:0] aluResult;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.srcA(srcA), 
		.srcB(srcB), 
		.aluOp(aluOp), 
		.zero(zero), 
		.aluResult(aluResult)
	);

	initial begin
		// Initialize Inputs
		srcA = 0;
		srcB = 0;
		aluOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

