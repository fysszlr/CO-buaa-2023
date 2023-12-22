`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:59:01 11/08/2023 
// Design Name: 
// Module Name:    d_ext 
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
module d_ext(
    input wire [15:0] imm16,
    input wire [25:0] imm26,
    input wire [3:0] extOp,
	 input wire [31:0] pc,
    output reg [31:0] extImm
    );
	always @(*) begin
		case (extOp)
			`extOp_nope : extImm = 0;
			`extOp_signext : extImm = {{16{imm16[15]}},imm16};
			`extOp_signext00 : extImm = pc + 4 + {{14{imm16[15]}},imm16,{2{1'b0}}};
			`extOp_sll16 : extImm = {imm16,{16{1'b0}}};
			`extOp_ext00 : extImm = {pc[31:28],imm26,{2{1'b0}}};
			`extOp_zeroext : extImm = {{16{1'b0}},imm16};
			default : extImm = 0;
		endcase
	end
endmodule
