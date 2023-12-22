`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:47:43 11/14/2023
// Design Name:   controller
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P6/cpu/controller_tb.v
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
	reg [31:0] instr;
	reg new_instr;

	// Outputs
	wire [3:0] tuse_rs;
	wire [3:0] tuse_rt;
	wire [3:0] tnew;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [15:0] imm16;
	wire [25:0] imm26;
	wire [3:0] cmpOp;
	wire [3:0] nPcOp;
	wire [3:0] extOp;
	wire md;
	wire mt;
	wire mf;
	wire [3:0] srcASel;
	wire [3:0] srcBSel;
	wire [4:0] shamt;
	wire [3:0] aluOp;
	wire [4:0] regDst;
	wire [3:0] regWdSel;
	wire [3:0] d1Sel;
	wire [3:0] d2Sel;
	wire [3:0] mduOp;
	wire mdu_start;
	wire memWrite;
	wire [3:0] memOp;

	// Instantiate the Unit Under Test (UUT)
	controller uut (
		.instr(instr), 
		.new_instr(new_instr), 
		.tuse_rs(tuse_rs), 
		.tuse_rt(tuse_rt), 
		.tnew(tnew), 
		.rs(rs), 
		.rt(rt), 
		.imm16(imm16), 
		.imm26(imm26), 
		.cmpOp(cmpOp), 
		.nPcOp(nPcOp), 
		.extOp(extOp), 
		.md(md), 
		.mt(mt), 
		.mf(mf), 
		.srcASel(srcASel), 
		.srcBSel(srcBSel), 
		.shamt(shamt), 
		.aluOp(aluOp), 
		.regDst(regDst), 
		.regWdSel(regWdSel), 
		.d1Sel(d1Sel), 
		.d2Sel(d2Sel), 
		.mduOp(mduOp), 
		.mdu_start(mdu_start), 
		.memWrite(memWrite), 
		.memOp(memOp)
	);

	initial begin
		// Initialize Inputs
		instr = 0;
		new_instr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

