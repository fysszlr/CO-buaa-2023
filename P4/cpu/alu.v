`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:04:56 10/31/2023 
// Design Name: 
// Module Name:    alu 
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
`include "def.v"
module alu(
    input wire [31:0] srcA,
    input wire [31:0] srcB,
    input wire [2:0] aluOp,
    output reg zero,
    output reg [31:0] aluResult
    );
	reg [31:0] opAdd;
	reg [31:0] opSub;
	reg [31:0] opOr;
	reg [31:0] opXor;
	reg [31:0] opSll;
	always @(*) begin
		opAdd = srcA + srcB;
		opSub = srcA - srcB;
		opOr = srcA | srcB;
		opXor = srcA ^srcB;
		opSll = srcA << srcB;
	end
	always @(*) begin
		case (aluOp)
			`aluOp_add : aluResult = opAdd;
			`aluOp_sub : aluResult = opSub;
			`aluOp_or : aluResult = opOr;
			`aluOp_xor : aluResult = opXor;
			`aluOp_sll : aluResult = opSll;
			default : aluResult = 0;
		endcase
		zero = (aluResult == 0) ? 1 : 0;
	end
endmodule
