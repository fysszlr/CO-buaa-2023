`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:09:46 11/09/2023
// Design Name:   e_alu
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/e_alu_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: e_alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module e_alu_tb;

	// Inputs
	reg [31:0] srcA;
	reg [31:0] srcB;
	reg [4:0] shamt;
	reg [31:0] aluOp;

	// Outputs
	wire [31:0] aluResult;

	// Instantiate the Unit Under Test (UUT)
	e_alu uut (
		.srcA(srcA), 
		.srcB(srcB), 
		.shamt(shamt), 
		.aluOp(aluOp), 
		.aluResult(aluResult)
	);

	initial begin
		// Initialize Inputs
		srcA = 0;
		srcB = 0;
		shamt = 0;
		aluOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

