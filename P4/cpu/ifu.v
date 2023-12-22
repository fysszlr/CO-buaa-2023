`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:47:23 10/31/2023 
// Design Name: 
// Module Name:    ifu 
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
module ifu(
    input wire clk,
    input wire reset,
    input wire counter,
	 input wire branch,
	 input wire zero,
    input wire jalSel,
	 input wire jrSel,
    input wire [31:0] pc4,
    input wire [31:0] pcOffset,
    input wire [31:0] jalPc,
	 input wire [31:0] jrPc,
    output wire [31:0] pc,
    output wire [31:0] instr
    );
	wire branchSel = branch & zero;
	reg [31:0] nPc;
	reg [31:0] rom [0:4096];
	initial begin
		$readmemh("code.txt", rom);
	end
	always @(posedge clk) begin
		if (reset) begin 
			nPc <= 0;
		end
		else begin
			case (jrSel)
				`jrSel_jrPc : nPc <= jrPc;
				`jrSel_oldPc : begin	
					case (jalSel) 
						`jalSel_jalPc : nPc <= jalPc;
						`jalSel_oldPc : begin
							case (branchSel)
								`branchSel_pc4 : nPc <= pc4;
								`branchSel_pcOffset : nPc <= pcOffset;
								default : nPc <= 0;
							endcase
						end
						default : nPc <= 0;
					endcase
				end
				default : nPc <= 0;
			endcase
		end
	end
	assign pc = (counter == `counter_0) ? 32'h00003000 :
					nPc;
	wire [31:0] pcSub = pc - 32'h00003000;
	assign instr = rom[pcSub[13:2]]; 
endmodule
