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
	 input wire aluDmOv,
	 input wire aluAriOv,
    input wire [31:0] srcA,
    input wire [31:0] srcB,
	 input wire [4:0] shamt,
    input wire [3:0] aluOp,
    output reg [31:0] aluResult,
	 output reg err_dmOv,
	 output reg err_ariOv
    );
	wire [31:0] add = srcA + srcB;
	wire [31:0] sub = srcA - srcB;
	wire [31:0] oror = srcA | srcB;
	wire [31:0] andand = srcA & srcB;
	wire [31:0] slt = $signed(($signed(srcA) < $signed(srcB))) ? {{31{1'b0}},1'b1} : 0;
	wire [31:0] sltu = (srcA < srcB) ? {{31{1'b0}},1'b1} : 0;
	wire [31:0] addu = srcA + srcB;
	wire [32:0] ext_srcA = {srcA[31], srcA};
	wire [32:0] ext_srcB = {srcB[31], srcB};
	wire [32:0] ext_add = ext_srcA + ext_srcB;
	wire [32:0] ext_sub = ext_srcA - ext_srcB;
	wire add_ov = aluOp == `aluOp_add && ext_add[32] != ext_add[31];
	wire sub_ov = aluOp == `aluOp_sub && ext_sub[32] != ext_sub[31];
	integer i;
	reg [31:0] sll;
	reg [31:0] srl;
	always @(*) begin : get_err_dmOv_err_ariOv
		err_dmOv = 0;
		err_ariOv = 0;
		if (aluDmOv && (add_ov || sub_ov)) err_dmOv = 1;
		if (aluAriOv && (add_ov || sub_ov)) err_ariOv = 1;
	end
	always @(*) begin : get_sll
		for (i = 0; i < 32; i = i + 1) begin
			if (i < shamt) sll[i] = 1'b0;
			else sll[i] = srcA[i - shamt];
		end
	end
	always @(*) begin : get_srl
		for (i = 0; i < 32 + shamt; i = i + 1) begin
			if (i >= shamt && i < 32) srl[i - shamt] = srcB[i];
			else if (i >= shamt) srl[i - shamt] = 1'b0;
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
			`aluOp_addu : aluResult = addu;
			`aluOp_srl : aluResult = srl;
			default : aluResult = 0;
		endcase
	end

endmodule
