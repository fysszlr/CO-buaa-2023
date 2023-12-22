`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:25:35 10/31/2023 
// Design Name: 
// Module Name:    sll 
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
module sll(
    input wire [15:0] imm,
    input wire sllOp,
    output wire [31:0] sllImm
    );
	assign sllImm = (sllOp == `sllOp_sign2) ? {{14{imm[15]}},imm,2'b0} :
							{imm,16'b0};
endmodule
