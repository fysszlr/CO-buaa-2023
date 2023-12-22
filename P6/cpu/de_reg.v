`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:14:21 11/09/2023 
// Design Name: 
// Module Name:    de_reg 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`default_nettype none
module de_reg(
    input wire clk,
    input wire reset,
    input wire halt,
    input wire [31:0] d_pc,
    input wire [31:0] d_instr,
    input wire [31:0] d_extImm,
    input wire [31:0] d_grf_rs,
    input wire [31:0] d_grf_rt,
	 input wire d_new_instr,
    output wire [31:0] e_pc,
    output wire [31:0] e_instr,
    output wire [31:0] e_extImm,
    output wire [31:0] e_grf_rs,
    output wire [31:0] e_grf_rt,
	 output wire e_new_instr
    );
	reg [31:0] pc;
	reg [31:0] instr;
	reg [31:0] extImm;
	reg [31:0] grf_rs;
	reg [31:0] grf_rt;
	reg new_instr;
	always @(posedge clk) begin
		if (reset || halt) begin
			pc <= 0;
			instr <= 0;
			extImm <= 0;
			grf_rs <= 0;
			grf_rt <= 0;
			new_instr <= 0;
		end
		else begin
			pc <= d_pc;
			instr <= d_instr;
			extImm <= d_extImm;
			grf_rs <= d_grf_rs;
			grf_rt <= d_grf_rt;
			new_instr <= d_new_instr;
		end
	end
	assign e_pc = pc;
	assign e_instr = instr;
	assign e_extImm = extImm;
	assign e_grf_rs = grf_rs;
	assign e_grf_rt = grf_rt;
	assign e_new_instr = new_instr;
endmodule
