`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:04:29 11/09/2023
// Design Name:   d_ext
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/d_ext_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: d_ext
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module d_ext_tb;

	// Inputs
	reg [15:0] imm16;
	reg [25:0] imm26;
	reg [3:0] extOp;
	reg [31:0] pc;

	// Outputs
	wire [31:0] extImm;

	// Instantiate the Unit Under Test (UUT)
	d_ext uut (
		.imm16(imm16), 
		.imm26(imm26), 
		.extOp(extOp), 
		.pc(pc), 
		.extImm(extImm)
	);

	initial begin
		// Initialize Inputs
		imm16 = 0;
		imm26 = 0;
		extOp = 0;
		pc = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

