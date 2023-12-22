`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:17:28 11/28/2023
// Design Name:   m_cp0
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P7/cpu/m_cp0_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: m_cp0
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module m_cp0_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [4:0] a1;
	reg [4:0] a2;
	reg [31:0] din;
	reg [31:0] pc;
	reg [4:0] excCodeIn;
	reg [31:0] delaySlot;
	reg [5:0] hwInt;
	reg exlClear;

	// Outputs
	wire req;
	wire [31:0] epcOut;
	wire [31:0] dout;
	wire testIntResponse;

	// Bidirs
	wire we;

	// Instantiate the Unit Under Test (UUT)
	m_cp0 uut (
		.clk(clk), 
		.reset(reset), 
		.we(we), 
		.a1(a1), 
		.a2(a2), 
		.din(din), 
		.pc(pc), 
		.excCodeIn(excCodeIn), 
		.delaySlot(delaySlot), 
		.hwInt(hwInt), 
		.exlClear(exlClear), 
		.req(req), 
		.epcOut(epcOut), 
		.dout(dout), 
		.testIntResponse(testIntResponse)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		a1 = 0;
		a2 = 0;
		din = 0;
		pc = 0;
		excCodeIn = 0;
		delaySlot = 0;
		hwInt = 0;
		exlClear = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

