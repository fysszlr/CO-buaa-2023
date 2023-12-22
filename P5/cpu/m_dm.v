`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:24:19 11/09/2023 
// Design Name: 
// Module Name:    m_dm 
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
`define word ram[memDst>>2]
`define half_word ram[memDst>>2][16*memDst[1] +: 16]
`define byte_word ram[memDst>>2][8*memDst[1:0] +: 8]
`define bit_sign ram[memDst>>2][8*memDst[1:0]+7]
module m_dm(
    input wire clk,
    input wire reset,
	 input wire [31:0] pc,
    input wire memWrite,
    input wire [31:0] memDst,
    input wire [31:0] memWd,
    input wire [3:0] memOp,
    output reg [31:0] rd
    );
	reg [31:0] ram[0:4096];
	integer i;
	always @(*) begin
		case (memOp)
			`memOp_nope : rd = 0;
			`memOp_w : rd = `word;
			`memOp_h : rd = {{16{`bit_sign}},`half_word};
			`memOp_b : rd = {{24{`bit_sign}},`byte_word};
			default : rd = 0;
		endcase
	end
	always @(posedge clk) begin
		if (reset) begin
			for (i = 0; i < 4096; i = i + 1) ram[i] = 0;
		end
		else if (memWrite) begin
			case (memOp)
				`memOp_nope : ;
				`memOp_w : begin
					$display("%d@%h: *%h <= %h", $time, pc, memDst, memWd);
					`word <= memWd;
				end
				`memOp_h : begin
					case (memDst[1])
						1'b0 : $display("%d@%h: *%h <= %h", $time, pc, memDst, {ram[memDst>>2][31:16],memWd[15:0]});
						1'b1 : $display("%d@%h: *%h <= %h", $time, pc, memDst, {memWd[15:0],ram[memDst>>2][15:0]});
					endcase
					`half_word <= memWd[15:0];
				end
				`memOp_b : begin
					case (memDst[1:0])
						2'b00 : $display("%d@%h: *%h <= %h", $time, pc, memDst, {ram[memDst>>2][31:8],memWd[7:0]});
						2'b01 : $display("%d@%h: *%h <= %h", $time, pc, memDst, {ram[memDst>>2][31:16],memWd[7:0],ram[memDst>>2][7:0]});
						2'b10 : $display("%d@%h: *%h <= %h", $time, pc, memDst, {ram[memDst>>2][31:24],memWd[7:0],ram[memDst>>2][15:0]});
						2'b11 : $display("%d@%h: *%h <= %h", $time, pc, memDst, {memWd[7:0],ram[memDst>>2][23:0]});
					endcase
					`byte_word <= memWd[7:0];
				end
				default : ;
			endcase
		end
	end

endmodule
