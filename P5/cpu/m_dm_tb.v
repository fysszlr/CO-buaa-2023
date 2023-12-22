`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:18:56 11/09/2023
// Design Name:   m_dm
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/m_dm_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: m_dm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module m_dm_tb;

	// Inputs
	reg clk;
	reg reset;
	reg memWrite;
	reg [31:0] memDst;
	reg [31:0] memWd;
	reg [3:0] memOp;

	// Outputs
	wire [31:0] rd;

	// Instantiate the Unit Under Test (UUT)
	m_dm uut (
		.clk(clk), 
		.reset(reset), 
		.memWrite(memWrite), 
		.memDst(memDst), 
		.memWd(memWd), 
		.memOp(memOp), 
		.rd(rd)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		memWrite = 0;
		memDst = 0;
		memWd = 0;
		memOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

