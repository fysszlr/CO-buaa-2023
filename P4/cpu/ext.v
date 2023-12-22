`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:21:23 10/31/2023 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input wire [15:0] imm,
    output wire [31:0] signImm,
    output wire [31:0] zeroImm
    );
	assign signImm = {{16{imm[15]}},imm};
	assign zeroImm = {16'b0,imm};

endmodule
