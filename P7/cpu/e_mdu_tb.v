`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:54:55 11/14/2023
// Design Name:   e_mdu
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P6/cpu/e_mdu_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: e_mdu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module e_mdu_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] mduOp;
	reg [31:0] d1;
	reg [31:0] d2;
	reg start;

	// Outputs
	wire busy;
	wire [31:0] hi;
	wire [31:0] lo;

	// Instantiate the Unit Under Test (UUT)
	e_mdu uut (
		.clk(clk), 
		.reset(reset), 
		.mduOp(mduOp), 
		.d1(d1), 
		.d2(d2), 
		.start(start), 
		.busy(busy), 
		.hi(hi), 
		.lo(lo)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		mduOp = 0;
		d1 = 0;
		d2 = 0;
		start = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

