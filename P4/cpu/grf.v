`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:28:25 10/31/2023 
// Design Name: 
// Module Name:    grf 
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
module grf(
    input wire [4:0] a1,
    input wire [4:0] a2,
    input wire [4:0] a3,
    input wire [31:0] wd3,
	 input wire [31:0] pc,
	 input wire [31:0] instr,
    input wire we,
    input wire clk,
    input wire reset,
    output reg [31:0] rd1,
    output reg [31:0] rd2
    );
	reg [31:0] register [0:31];
	always @(posedge clk) begin
		//if(we==1&&pc==32'h00003024&&a3==8&&wd3==32'h00000010)$display("@%h: $%d <= %h", instr, a3, 32'h12345678);
		if(we && reset==0)$display("@%h: $%d <= %h", pc, a3, wd3);
	end
	always @(posedge clk) begin : register0Write
		register[0] <= 0;
	end
	always @(posedge clk) begin : register1Write
		if (reset) register[1] <= 0;
		else if (a3 == 1 && we) register[1] <= wd3;
		else register[1] <= register[1];
	end
	always @(posedge clk) begin : register2Write
		if (reset) register[2] <= 0;
		else if (a3 == 2 && we) register[2] <= wd3;
		else register[2] <= register[2];
	end
	always @(posedge clk) begin : register3Write
		if (reset) register[3] <= 0;
		else if (a3 == 3 && we) register[3] <= wd3;
		else register[3] <= register[3];
	end
	always @(posedge clk) begin : register4Write
		if (reset) register[4] <= 0;
		else if (a3 == 4 && we) register[4] <= wd3;
		else register[4] <= register[4];
	end
	always @(posedge clk) begin : register5Write
		if (reset) register[5] <= 0;
		else if (a3 == 5 && we) register[5] <= wd3;
		else register[5] <= register[5];
	end
	always @(posedge clk) begin : register6Write
		if (reset) register[6] <= 0;
		else if (a3 == 6 && we) register[6] <= wd3;
		else register[6] <= register[6];
	end
	always @(posedge clk) begin : register7Write
		if (reset) register[7] <= 0;
		else if (a3 == 7 && we) register[7] <= wd3;
		else register[7] <= register[7];
	end
	always @(posedge clk) begin : register8Write
		if (reset) register[8] <= 0;
		else if (a3 == 8 && we) register[8] <= wd3;
		else register[8] <= register[8];
	end
	always @(posedge clk) begin : register9Write
		if (reset) register[9] <= 0;
		else if (a3 == 9 && we) register[9] <= wd3;
		else register[9] <= register[9];
	end
	always @(posedge clk) begin : register10Write
		if (reset) register[10] <= 0;
		else if (a3 == 10 && we) register[10] <= wd3;
		else register[10] <= register[10];
	end
	always @(posedge clk) begin : register11Write
		if (reset) register[11] <= 0;
		else if (a3 == 11 && we) register[11] <= wd3;
		else register[11] <= register[11];
	end
	always @(posedge clk) begin : register12Write
		if (reset) register[12] <= 0;
		else if (a3 == 12 && we) register[12] <= wd3;
		else register[12] <= register[12];
	end
	always @(posedge clk) begin : register13Write
		if (reset) register[13] <= 0;
		else if (a3 == 13 && we) register[13] <= wd3;
		else register[13] <= register[13];
	end
	always @(posedge clk) begin : register14Write
		if (reset) register[14] <= 0;
		else if (a3 == 14 && we) register[14] <= wd3;
		else register[14] <= register[14];
	end
	always @(posedge clk) begin : register15Write
		if (reset) register[15] <= 0;
		else if (a3 == 15 && we) register[15] <= wd3;
		else register[15] <= register[15];
	end
	always @(posedge clk) begin : register16Write
		if (reset) register[16] <= 0;
		else if (a3 == 16 && we) register[16] <= wd3;
		else register[16] <= register[16];
	end
	always @(posedge clk) begin : register17Write
		if (reset) register[17] <= 0;
		else if (a3 == 17 && we) register[17] <= wd3;
		else register[17] <= register[17];
	end
	always @(posedge clk) begin : register18Write
		if (reset) register[18] <= 0;
		else if (a3 == 18 && we) register[18] <= wd3;
		else register[18] <= register[18];
	end
	always @(posedge clk) begin : register19Write
		if (reset) register[19] <= 0;
		else if (a3 == 19 && we) register[19] <= wd3;
		else register[19] <= register[19];
	end
	always @(posedge clk) begin : register20Write
		if (reset) register[20] <= 0;
		else if (a3 == 20 && we) register[20] <= wd3;
		else register[20] <= register[20];
	end
	always @(posedge clk) begin : register21Write
		if (reset) register[21] <= 0;
		else if (a3 == 21 && we) register[21] <= wd3;
		else register[21] <= register[21];
	end
	always @(posedge clk) begin : register22Write
		if (reset) register[22] <= 0;
		else if (a3 == 22 && we) register[22] <= wd3;
		else register[22] <= register[22];
	end
	always @(posedge clk) begin : register23Write
		if (reset) register[23] <= 0;
		else if (a3 == 23 && we) register[23] <= wd3;
		else register[23] <= register[23];
	end
	always @(posedge clk) begin : register24Write
		if (reset) register[24] <= 0;
		else if (a3 == 24 && we) register[24] <= wd3;
		else register[24] <= register[24];
	end
	always @(posedge clk) begin : register25Write
		if (reset) register[25] <= 0;
		else if (a3 == 25 && we) register[25] <= wd3;
		else register[25] <= register[25];
	end
	always @(posedge clk) begin : register26Write
		if (reset) register[26] <= 0;
		else if (a3 == 26 && we) register[26] <= wd3;
		else register[26] <= register[26];
	end
	always @(posedge clk) begin : register27Write
		if (reset) register[27] <= 0;
		else if (a3 == 27 && we) register[27] <= wd3;
		else register[27] <= register[27];
	end
	always @(posedge clk) begin : register28Write
		if (reset) register[28] <= 0;
		else if (a3 == 28 && we) register[28] <= wd3;
		else register[28] <= register[28];
	end
	always @(posedge clk) begin : register29Write
		if (reset) register[29] <= 0;
		else if (a3 == 29 && we) register[29] <= wd3;
		else register[29] <= register[29];
	end
	always @(posedge clk) begin : register30Write
		if (reset) register[30] <= 0;
		else if (a3 == 30 && we) register[30] <= wd3;
		else register[30] <= register[30];
	end
	always @(posedge clk) begin : register31Write
		if (reset) register[31] <= 0;
		else if (a3 == 31 && we) register[31] <= wd3;
		else register[31] <= register[31];
	end
	
	always @(*) begin : register0Read
		if (a1 == 0) rd1 = 0;
		if (a2 == 0) rd2 = 0;
	end
	always @(*) begin : register1Read
		if (a1 == 1) rd1 = register[1];
		if (a2 == 1) rd2 = register[1];
	end
	always @(*) begin : register2Read
		if (a1 == 2) rd1 = register[2];
		if (a2 == 2) rd2 = register[2];
	end
	always @(*) begin : register3Read
		if (a1 == 3) rd1 = register[3];
		if (a2 == 3) rd2 = register[3];
	end
	always @(*) begin : register4Read
		if (a1 == 4) rd1 = register[4];
		if (a2 == 4) rd2 = register[4];
	end
	always @(*) begin : register5Read
		if (a1 == 5) rd1 = register[5];
		if (a2 == 5) rd2 = register[5];
	end
	always @(*) begin : register6Read
		if (a1 == 6) rd1 = register[6];
		if (a2 == 6) rd2 = register[6];
	end
	always @(*) begin : register7Read
		if (a1 == 7) rd1 = register[7];
		if (a2 == 7) rd2 = register[7];
	end
	always @(*) begin : register8Read
		if (a1 == 8) rd1 = register[8];
		if (a2 == 8) rd2 = register[8];
	end
	always @(*) begin : register9Read
		if (a1 == 9) rd1 = register[9];
		if (a2 == 9) rd2 = register[9];
	end
	always @(*) begin : register10Read
		if (a1 == 10) rd1 = register[10];
		if (a2 == 10) rd2 = register[10];
	end
	always @(*) begin : register11Read
		if (a1 == 11) rd1 = register[11];
		if (a2 == 11) rd2 = register[11];
	end
	always @(*) begin : register12Read
		if (a1 == 12) rd1 = register[12];
		if (a2 == 12) rd2 = register[12];
	end
	always @(*) begin : register13Read
		if (a1 == 13) rd1 = register[13];
		if (a2 == 13) rd2 = register[13];
	end
	always @(*) begin : register14Read
		if (a1 == 14) rd1 = register[14];
		if (a2 == 14) rd2 = register[14];
	end
	always @(*) begin : register15Read
		if (a1 == 15) rd1 = register[15];
		if (a2 == 15) rd2 = register[15];
	end
	always @(*) begin : register16Read
		if (a1 == 16) rd1 = register[16];
		if (a2 == 16) rd2 = register[16];
	end
	always @(*) begin : register17Read
		if (a1 == 17) rd1 = register[17];
		if (a2 == 17) rd2 = register[17];
	end
	always @(*) begin : register18Read
		if (a1 == 18) rd1 = register[18];
		if (a2 == 18) rd2 = register[18];
	end
	always @(*) begin : register19Read
		if (a1 == 19) rd1 = register[19];
		if (a2 == 19) rd2 = register[19];
	end
	always @(*) begin : register20Read
		if (a1 == 20) rd1 = register[20];
		if (a2 == 20) rd2 = register[20];
	end
	always @(*) begin : register21Read
		if (a1 == 21) rd1 = register[21];
		if (a2 == 21) rd2 = register[21];
	end
	always @(*) begin : register22Read
		if (a1 == 22) rd1 = register[22];
		if (a2 == 22) rd2 = register[22];
	end
	always @(*) begin : register23Read
		if (a1 == 23) rd1 = register[23];
		if (a2 == 23) rd2 = register[23];
	end
	always @(*) begin : register24Read
		if (a1 == 24) rd1 = register[24];
		if (a2 == 24) rd2 = register[24];
	end
	always @(*) begin : register25Read
		if (a1 == 25) rd1 = register[25];
		if (a2 == 25) rd2 = register[25];
	end
	always @(*) begin : register26Read
		if (a1 == 26) rd1 = register[26];
		if (a2 == 26) rd2 = register[26];
	end
	always @(*) begin : register27Read
		if (a1 == 27) rd1 = register[27];
		if (a2 == 27) rd2 = register[27];
	end
	always @(*) begin : register28Read
		if (a1 == 28) rd1 = register[28];
		if (a2 == 28) rd2 = register[28];
	end
	always @(*) begin : register29Read
		if (a1 == 29) rd1 = register[29];
		if (a2 == 29) rd2 = register[29];
	end
	always @(*) begin : register30Read
		if (a1 == 30) rd1 = register[30];
		if (a2 == 30) rd2 = register[30];
	end
	always @(*) begin : register31Read
		if (a1 == 31) rd1 = register[31];
		if (a2 == 31) rd2 = register[31];
	end
endmodule
