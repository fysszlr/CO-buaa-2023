`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:51:48 10/31/2023
// Design Name:   grf
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P4/cpu/grf_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: grf
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module grf_tb;

	// Inputs
	reg [4:0] a1;
	reg [4:0] a2;
	reg [4:0] a3;
	reg [31:0] wd3;
	reg we;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] rd1;
	wire [31:0] rd2;

	// Instantiate the Unit Under Test (UUT)
	grf uut (
		.a1(a1), 
		.a2(a2), 
		.a3(a3), 
		.wd3(wd3), 
		.we(we), 
		.clk(clk), 
		.reset(reset), 
		.rd1(rd1), 
		.rd2(rd2)
	);

	initial begin
		// Initialize Inputs
		a1 = 0;
		a2 = 0;
		a3 = 0;
		wd3 = 0;
		we = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

