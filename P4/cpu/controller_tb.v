`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:52:28 10/31/2023
// Design Name:   controller
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P4/cpu/controller_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module controller_tb;

	// Inputs
	reg [5:0] op;
	reg [5:0] funct;

	// Outputs
	wire [2:0] memtoReg;
	wire memWrite;
	wire branch;
	wire [1:0] aluContorl;
	wire [1:0] aluSrc;
	wire [1:0] regDst;
	wire regWrite;
	wire sllOp;
	wire wdOp;
	wire jalSel;

	// Instantiate the Unit Under Test (UUT)
	controller uut (
		.op(op), 
		.funct(funct), 
		.memtoReg(memtoReg), 
		.memWrite(memWrite), 
		.branch(branch), 
		.aluContorl(aluContorl), 
		.aluSrc(aluSrc), 
		.regDst(regDst), 
		.regWrite(regWrite), 
		.sllOp(sllOp), 
		.wdOp(wdOp), 
		.jalSel(jalSel)
	);

	initial begin
		// Initialize Inputs
		op = 0;
		funct = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

