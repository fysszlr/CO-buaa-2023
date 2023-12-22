`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:04:54 11/09/2023 
// Design Name: 
// Module Name:    d_npc 
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
module d_npc(
    input wire [31:0] f_pc,
	 input wire [31:0] d_pc,
    input wire [3:0] nPcOp,
    input wire branch,
    input wire [31:0] extImm,
    input wire [31:0] grf_rs,
    output reg [31:0] nPc
    );
	always @(*) begin
		case (nPcOp)
			`nPcOp_pc4 : nPc = f_pc + 4;
			`nPcOp_pcImm16 : nPc = branch ? extImm : f_pc + 4;
			`nPcOp_pcImm26 : nPc = extImm;
			`nPcOp_pcReg : nPc = grf_rs;
		endcase
	end

endmodule
