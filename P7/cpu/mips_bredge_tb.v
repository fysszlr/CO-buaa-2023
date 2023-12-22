`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:55:12 11/30/2023
// Design Name:   mips_bridge
// Module Name:   C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P7/cpu/mips_bredge_tb.v
// Project Name:  cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips_bridge
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_bredge_tb;

	// Inputs
	reg [31:0] m_data_rdata;
	reg [31:0] m_tmp_data_addr;
	reg [31:0] m_tmp_data_wdata;
	reg [3:0] m_tmp_data_byteen;
	reg [31:0] tmier0_rd;
	reg [31:0] timer1_rd;

	// Outputs
	wire [31:0] m_data_addr;
	wire [31:0] m_data_wdata;
	wire [3:0] m_data_byteen;
	wire [31:0] m_tmp_data_rdata;
	wire [31:0] timer0_addr;
	wire timer0_we;
	wire [31:0] timer0_wd;
	wire [31:0] timer1_addr;
	wire timer1_we;
	wire [31:0] timer1_wd;

	// Instantiate the Unit Under Test (UUT)
	mips_bridge uut (
		.m_data_addr(m_data_addr), 
		.m_data_wdata(m_data_wdata), 
		.m_data_byteen(m_data_byteen), 
		.m_data_rdata(m_data_rdata), 
		.m_tmp_data_addr(m_tmp_data_addr), 
		.m_tmp_data_wdata(m_tmp_data_wdata), 
		.m_tmp_data_byteen(m_tmp_data_byteen), 
		.m_tmp_data_rdata(m_tmp_data_rdata), 
		.timer0_addr(timer0_addr), 
		.timer0_we(timer0_we), 
		.timer0_wd(timer0_wd), 
		.tmier0_rd(tmier0_rd), 
		.timer1_addr(timer1_addr), 
		.timer1_we(timer1_we), 
		.timer1_wd(timer1_wd), 
		.timer1_rd(timer1_rd)
	);

	initial begin
		// Initialize Inputs
		m_data_rdata = 0;
		m_tmp_data_addr = 0;
		m_tmp_data_wdata = 0;
		m_tmp_data_byteen = 0;
		tmier0_rd = 0;
		timer1_rd = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

