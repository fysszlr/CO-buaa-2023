`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:08:32 11/09/2023 
// Design Name: 
// Module Name:    fd_reg 
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
module fd_reg(
    input wire clk,
    input wire reset,
    input wire halt,
    input wire [31:0] f_pc,
    input wire [31:0] f_instr,
	 input wire f_new_instr,
    output wire [31:0] d_pc,
    output wire [31:0] d_instr,
	 output wire d_new_instr
    );
	reg [31:0] pc;
	reg [31:0] instr;
	reg new_instr;
	always @(posedge clk) begin
		if (reset) begin
			pc <= 0;
			instr <= 0;
			new_instr <= 0;
		end
		else if (halt) begin
			pc <= pc;
			instr <= instr;
			new_instr <= new_instr;
		end
		else begin
			pc <= f_pc;
			instr <= f_instr;
			new_instr <= f_new_instr;
		end
	end
	assign d_pc = pc;
	assign d_instr = instr;
	assign d_new_instr = new_instr;
endmodule
