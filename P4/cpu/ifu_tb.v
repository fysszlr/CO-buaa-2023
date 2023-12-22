`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:52:52 10/31/2023
// Design Name:   ifu
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P4/cpu/ifu_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ifu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ifu_tb;

	// Inputs
	reg clk;
	reg reset;
	reg counter;
	reg branchSel;
	reg jalSel;
	reg [31:0] pc4;
	reg [31:0] pcOffset;
	reg [31:0] jalPc;

	// Outputs
	wire [31:0] pc;
	wire [31:0] rd;

	// Instantiate the Unit Under Test (UUT)
	ifu uut (
		.clk(clk), 
		.reset(reset), 
		.counter(counter), 
		.branchSel(branchSel), 
		.jalSel(jalSel), 
		.pc4(pc4), 
		.pcOffset(pcOffset), 
		.jalPc(jalPc), 
		.pc(pc), 
		.rd(rd)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		counter = 0;
		branchSel = 0;
		jalSel = 0;
		pc4 = 0;
		pcOffset = 0;
		jalPc = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

