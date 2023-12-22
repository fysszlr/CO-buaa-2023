`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:48:42 11/09/2023
// Design Name:   stall
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/stall_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: stall
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module stall_tb;

	// Inputs
	reg [31:0] d_instr;
	reg [31:0] e_instr;
	reg [31:0] m_instr;

	// Outputs
	wire stall;

	// Instantiate the Unit Under Test (UUT)
	stall uut (
		.d_instr(d_instr), 
		.e_instr(e_instr), 
		.m_instr(m_instr), 
		.stall(stall)
	);

	initial begin
		// Initialize Inputs
		d_instr = 0;
		e_instr = 0;
		m_instr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

