`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:10:45 11/09/2023 
// Design Name: 
// Module Name:    d_ifu 
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
module f_ifu(
    input wire clk,
	 input wire reset,
	 input wire req,
	 input wire halt,
    input wire [31:0] nPc,
    output reg [31:0] pc
    );
	always @(posedge clk) begin
		if (reset) pc <= 32'h00003000;
		else if (req) pc <= 32'h00004180;
		else if (!halt) pc <= nPc;
	end

endmodule
