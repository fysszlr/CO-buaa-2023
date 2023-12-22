`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:38:05 10/31/2023 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input wire clk,
    input wire reset
    );
	wire counter;//
	wire [31:0] instr;//
	wire [5:0] op;//
	wire [5:0] funct;//
	wire [2:0] memtoReg;//
	wire memWrite;//
	wire branch;//
	wire [2:0] aluControl;//
	wire [1:0] aluSrc;//
	wire [1:0] regDst;//
	wire regWrite;//
	wire sllOp;//
	wire [1:0]wdOp;//
	wire jalSel;//
	wire jrSel;
	reg [31:0] pc4;//
	reg [31:0] jalPc;//
	wire [31:0] jrPc;
	wire zero;//
	wire [31:0] pc;//
	reg [31:0] pcOffset;//
	reg [31:0] srcB;//
	wire [31:0] rd1;//
	wire [31:0] rd2;//
	wire [31:0] signImm;//
	wire [31:0] zeroImm;//
	wire [31:0] aluResult;//
	wire [4:0] a1;//
	wire [4:0] a2;//
	reg [4:0] a3;//
	reg [31:0] wd3;//
	wire [15:0] imm;//
	wire [13:0] a;//
	wire [31:0] sllImm;
	wire [31:0] wd;
	wire [31:0] rdw;//
	wire [7:0] rdb;//
	wire [15:0] rdh;
	
	assign op = instr[31:26];
	assign funct = instr [5:0];
	assign imm = instr[15:0];
	assign wd = rd2;
	assign jrPc = rd1;
	assign a1 = instr[25:21];
	assign a2 = instr[20:16];
	assign wd = rd2;
	
	always @(*) begin : getPc4
		pc4 = pc + 4;
	end
	
	always @(*) begin : getJalPc
		jalPc = {pc[31:28],instr[25:0],{2{1'b0}}}; 
	end
	
	always @(*) begin : muxSrcB
		case (aluSrc)
			`aluSrc_rd2 : srcB = rd2;
			`aluSrc_signImm : srcB = signImm;
			`aluSrc_zeroImm : srcB = zeroImm;
			`aluSrc_6_10 : srcB = instr[10:6];
			default : srcB = 0;
		endcase
	end
	
	always @(*) begin : muxA3
		case (regDst)
			`regDst_16_20 : a3 = instr[20:16];
			`regDst_11_15 : a3 = instr[15:11];
			`regDst_31 : a3 = 31;
			default : a3 = 0;
		endcase
	end
	
	always @(*) begin : getPcOffset
		pcOffset <= sllImm + pc4;
	end
	
	always @(*) begin : muxGetWd3
		case (memtoReg)
			`memtoReg_aluResult : wd3 = aluResult;
			`memtoReg_rdw : wd3 = rdw;
			`memtoReg_sllImm : wd3 = sllImm;
			`memtoReg_rdb : wd3 = rdb;
			`memtoReg_pc4 : wd3 = pc4;
			default : wd3 = 0;
		endcase
	end
	
	counter _counter (
		 .clk(clk), 
		 .reset(reset), 
		 .counter(counter)
		 );
	
	controller _controller (
    .op(op), 
    .funct(funct), 
    .memtoReg(memtoReg), 
    .memWrite(memWrite), 
    .branch(branch), 
    .aluControl(aluControl), 
    .aluSrc(aluSrc), 
    .regDst(regDst), 
    .regWrite(regWrite), 
    .sllOp(sllOp), 
    .wdOp(wdOp), 
    .jalSel(jalSel),
	 .jrSel(jrSel)
    );
	
	ifu _ifu (
    .clk(clk), 
    .reset(reset), 
    .counter(counter), 
    .branch(branch),
	 .zero(zero),
	 .jalSel(jalSel), 
	 .jrSel(jrSel),
    .pc4(pc4), 
    .pcOffset(pcOffset), 
    .jalPc(jalPc), 
	 .jrPc(jrPc),
    .pc(pc), 
    .instr(instr)  
    );
	
	alu _alu (
    .srcA(rd1), 
    .srcB(srcB), 
    .aluOp(aluControl), 
    .zero(zero), 
    .aluResult(aluResult)
    );
	
	grf _grf (
    .a1(a1), 
    .a2(a2), 
    .a3(a3), 
    .wd3(wd3), 
	 .pc(pc),
	 .instr(instr),
    .we(regWrite), //we = regWrite
    .clk(clk), 
    .reset(reset), 
    .rd1(rd1), 
    .rd2(rd2)
    );

	ext _ext (
    .imm(imm), 
    .signImm(signImm), 
    .zeroImm(zeroImm)
    );
	
	sll _sll (
    .imm(imm), 
    .sllOp(sllOp), 
    .sllImm(sllImm)
    );
	
	dm _dm (
    .addr(aluResult), 
    .wdOp(wdOp), 
    .wd(wd), 
	 .pc(pc),
    .we(memWrite), 
    .clk(clk), 
    .reset(reset), 
    .rdw(rdw), 
    .rdb(rdb),
	 .rdh(rdh)
    );
	
endmodule
