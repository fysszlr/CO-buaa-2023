`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:55:00 10/31/2023
// Design Name:   dm
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P4/cpu/dm_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dm_tb;

	// Inputs
	reg [13:0] a;
	reg wdOp;
	reg [31:0] wd;
	reg we;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] rdw;
	wire [7:0] rdb;

	// Instantiate the Unit Under Test (UUT)
	dm uut (
		.a(a), 
		.wdOp(wdOp), 
		.wd(wd), 
		.we(we), 
		.clk(clk), 
		.reset(reset), 
		.rdw(rdw), 
		.rdb(rdb)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		wdOp = 0;
		wd = 0;
		we = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

