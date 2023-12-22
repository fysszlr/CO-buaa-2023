`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:13:06 11/09/2023 
// Design Name: 
// Module Name:    d_cmp 
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
module d_cmp(
    input wire [31:0] srcA,
    input wire [31:0] srcB,
    input wire [3:0] cmpOp,
    output reg branch
    );
	always @(*) begin	
		case (cmpOp) 
			`cmpOp_nope : branch = 0;
			`cmpOp_equal : branch = (srcA == srcB) ? 1 : 0;
			`cmpOp_not_equal : branch = (srcA == srcB) ? 0 : 1;
			default : branch = 0;
		endcase
	end

endmodule
