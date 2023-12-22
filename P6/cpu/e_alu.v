`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:15:20 11/09/2023 
// Design Name: 
// Module Name:    e_alu 
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
module e_alu(
    input wire [31:0] srcA,
    input wire [31:0] srcB,
	 input wire [4:0] shamt,
    input wire [3:0] aluOp,
    output reg [31:0] aluResult
    );
	wire [31:0] add = $signed(srcA) + $signed(srcB);
	wire [31:0] sub = $signed(srcA) - $signed(srcB);
	wire [31:0] oror = srcA | srcB;
	wire [31:0] andand = srcA & srcB;
	wire [31:0] slt = $signed(($signed(srcA) < $signed(srcB))) ? {{31{1'b0}},1'b1} : 0;
	wire [31:0] sltu = (srcA < srcB) ? {{31{1'b0}},1'b1} : 0;
	integer i;
	reg [31:0] sll;
	always @(*) begin : get_sll
		for (i = 0; i < 32; i = i + 1) begin
			if (i < shamt) sll[i] = 1'b0;
			else sll[i] = srcA[i -shamt];
		end
	end
	always @(*) begin
		case (aluOp)
			`aluOp_nope : aluResult = 0;
			`aluOp_add : aluResult = add;
			`aluOp_sub : aluResult = sub;
			`aluOp_or : aluResult = oror;
			`aluOp_sll : aluResult = sll;
			`aluOp_and : aluResult = andand;
			`aluOp_slt : aluResult = slt;
			`aluOp_sltu : aluResult = sltu;
			default : aluResult = 0;
		endcase
	end

endmodule
