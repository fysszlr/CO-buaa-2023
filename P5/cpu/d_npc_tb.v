`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:03:01 11/09/2023
// Design Name:   d_npc
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/d_npc_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: d_npc
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module d_npc_tb;

	// Inputs
	reg [31:0] f_pc;
	reg [31:0] d_pc;
	reg [3:0] nPcOp;
	reg branch;
	reg [31:0] extImm;
	reg [31:0] grf_rs;

	// Outputs
	wire [31:0] nPc;

	// Instantiate the Unit Under Test (UUT)
	d_npc uut (
		.f_pc(f_pc), 
		.d_pc(d_pc), 
		.nPcOp(nPcOp), 
		.branch(branch), 
		.extImm(extImm), 
		.grf_rs(grf_rs), 
		.nPc(nPc)
	);

	initial begin
		// Initialize Inputs
		f_pc = 0;
		d_pc = 0;
		nPcOp = 0;
		branch = 0;
		extImm = 0;
		grf_rs = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

