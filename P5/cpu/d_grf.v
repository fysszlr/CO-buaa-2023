`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:04:46 11/09/2023 
// Design Name: 
// Module Name:    d_grf 
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
module d_grf(
    input wire clk,
    input wire reset,
	 input wire [31:0] pc,
	 input wire [31:0] instr,
    input wire [4:0] rs,
    input wire [4:0] rt,
	 input wire [4:0] regDst,
	 input wire [31:0] regWd,
	 output reg [31:0] grf_rs,
	 output reg [31:0] grf_rt
    );
	reg [31:0] register [0:31];
	integer i;
	always @(posedge clk) begin : write_back_word
		if (reset) begin
			for (i = 0; i < 32; i = i + 1) register[i] <= 0;
		end
		else begin
			if (regDst != 0) begin
				$display("%d@%h: $%d <= %h", $time, pc, regDst, regWd);
				register[regDst] <= regWd;
			end
		end
	end
	always @(*) begin	: get_grfRs_grfRt
		grf_rs = register[rs];
		grf_rt = register[rt];
		if (rs == regDst && rs != 0) grf_rs = regWd;
		if (rt == regDst && rt != 0) grf_rt = regWd;
	end
	
endmodule
