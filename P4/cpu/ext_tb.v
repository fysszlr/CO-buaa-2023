`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:24:13 10/31/2023
// Design Name:   ext
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P4/cpu/ext_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ext
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ext_tb;

	// Inputs
	reg [15:0] imm;

	// Outputs
	wire [31:0] signImm;
	wire [31:0] zeroImm;

	// Instantiate the Unit Under Test (UUT)
	ext uut (
		.imm(imm), 
		.signImm(signImm), 
		.zeroImm(zeroImm)
	);

	initial begin
		// Initialize Inputs
		imm = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

