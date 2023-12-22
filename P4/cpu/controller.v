`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:27:14 10/31/2023 
// Design Name: 
// Module Name:    controller 
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
module controller(
    input wire [5:0] op,
    input wire [5:0] funct,
	 output reg [2:0] memtoReg,
	 output reg memWrite,
	 output reg branch,
	 output reg [2:0] aluControl,
	 output reg [1:0] aluSrc,
	 output reg [1:0] regDst,
	 output reg regWrite,
	 output reg sllOp,
	 output reg [1:0]wdOp,
	 output reg jalSel,
	 output reg jrSel
    );
	reg alu;
	reg add;
	reg sub;
	reg sll;
	reg ori;
	reg lw;
	reg sw;
	reg beq;
	reg lui;
	reg lb;
	reg sb;
	reg jal;
	reg jr;
	reg lh;
	reg xorxor;
	always @(*) begin : andLogic1
		alu = 0;
		ori = 0;
		lw = 0;
		sw = 0;
		beq = 0;
		lui = 0;
		lb = 0;
		sb = 0;
		jal = 0;
		lh = 0;
		case (op)
			`op_alu : alu = 1;
			`op_ori : ori = 1;
			`op_lw : lw = 1;
			`op_sw : sw = 1;
			`op_beq : beq = 1;
			`op_lui : lui = 1;
			`op_lb : lb = 1;
			`op_sb : sb = 1;
			`op_jal : jal = 1;
			`op_lh : lh = 1;
			default : ;
		endcase
	end
	always @(*) begin : andLogic2
		add = 0;
		sub = 0;
		sll = 0;
		jr = 0;
		xorxor = 0;
		if (alu) begin
			case (funct) 
				`funct_add : add = 1;
				`funct_sub : sub = 1;
				`funct_sll : sll = 1;
				`funct_jr : jr = 1;
				`funct_xor : xorxor = 1;
				default : ;
			endcase
		end
	end
	always @(*) begin : orLogic
		memtoReg[2] = jal | lh;
		memtoReg[1] = lui | lb;
		memtoReg[0] = lw | lb | lh;
		memWrite = sw | sb;
		jrSel = jr;
		jalSel = jal;
		branch = beq;
		aluControl[2] = sll;
		aluControl[1] = ori | xorxor;
		aluControl[0] = sub | beq | xorxor;
		aluSrc[1] = ori | sll;
		aluSrc[0] = lw | lb | sw | sb | sll | lh;
		regDst[1] = jal;
		regDst[0] = add | sub | sll;
		regWrite = jal | add | sub | ori | lw | lui | lb | xorxor | sll | lh;
		sllOp = lui;
		wdOp[1] = sh;
		wdOp[0] = sb;
	end
	

endmodule
