`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:07:41 11/09/2023
// Design Name:   d_grf
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/d_grf_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: d_grf
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module d_grf_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] pc;
	reg [5:0] rs;
	reg [5:0] rt;
	reg [4:0] regDst;
	reg [31:0] regWd;

	// Outputs
	wire [31:0] grf_rs;
	wire [31:0] grf_rt;

	// Instantiate the Unit Under Test (UUT)
	d_grf uut (
		.clk(clk), 
		.reset(reset), 
		.pc(pc), 
		.rs(rs), 
		.rt(rt), 
		.regDst(regDst), 
		.regWd(regWd), 
		.grf_rs(grf_rs), 
		.grf_rt(grf_rt)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		pc = 0;
		rs = 0;
		rt = 0;
		regDst = 0;
		regWd = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

