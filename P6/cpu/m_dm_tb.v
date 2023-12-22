`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:49:07 11/14/2023
// Design Name:   m_dm
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P6/cpu/m_dm_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: m_dm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module m_dm_tb;

	// Inputs
	reg [3:0] memOp;
	reg [31:0] data_addr;
	reg [31:0] fwd_grf_rt;

	// Outputs
	wire [3:0] data_byteen;
	wire [31:0] data_wdata;

	// Instantiate the Unit Under Test (UUT)
	m_dm uut (
		.memOp(memOp), 
		.data_addr(data_addr), 
		.fwd_grf_rt(fwd_grf_rt), 
		.data_byteen(data_byteen), 
		.data_wdata(data_wdata)
	);

	initial begin
		// Initialize Inputs
		memOp = 0;
		data_addr = 0;
		fwd_grf_rt = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

