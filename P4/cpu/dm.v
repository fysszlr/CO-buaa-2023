`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:38:07 10/31/2023 
// Design Name: 
// Module Name:    dm 
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
module dm(
    input wire [31:0] addr,
    input wire wdOp,
    input wire [31:0] wd,
	 input wire [31:0] pc,
    input wire we,
    input wire clk,
    input wire reset,
    output wire [31:0] rdw,
    output reg [7:0] rdb,
	 output reg [15:0] rdh
    );
	wire [13:0]a;
	assign a = addr[13:0];
	reg [31:0] ram [0:4096];
	wire [31:0] wdw;
	reg [31:0] wdb;
	reg [31:0] wdh;
	assign wdw = wd;
	integer i;
	always @(*) begin : getWdb
		case (a[1:0])
			2'b00 : wdb = {wd[31:8],ram[a[13:2]][7:0]};
			2'b01 : wdb = {wd[31:16],ram[a[13:2]][15:8],wd[7:0]};
			2'b10 : wdb = {wd[31:24],ram[a[13:2]][23:16],wd[15:0]};
			2'b11 : wdb = {ram[a[13:2]][31:24],wd[23:0]};
			default : wdb <= 0;
		endcase 
	end
	always @(*) begin : getWdh
		case (a[1])
			1'b0 : wdh = {ram[a[13:2]][31:16],wd[15:0]};
			1'b1 : wdh = {wd[15:0],ram[a[13:2]][31:16]};
		endcase
	end
	always @(posedge clk) begin
		if (reset) begin
			for (i = 0; i <= 4096; i=i+1) begin
				ram[i] <= 0;
			end
		end
		else begin
			if (we) begin
				$display("@%h: *%h <= %h", pc, addr, wd);
				case (wdOp) 
					`wdOp_w : ram[a[13:2]] <= wdw;
					`wdOp_b : ram[a[13:2]] <= wdb;
					`wdOp_h : ram[a[13:2]] <= wdh;
					default : ram[a[13:2]] <= 0;
				endcase
			end
		end
	end
	assign rdw = ram[a[13:2]];
	always @(*) begin
		case (a[1])
			1'b0 : rdh = ram[a[13:2]][15:0];
			1'b1 : rdh = ram[a[13:2]][31:16];
		endcase
	end
	always @(*) begin
		case (a[1:0])
			2'b00 : rdb = ram[a[13:2]][7:0];
			2'b01 : rdb = ram[a[13:2]][15:8];
			2'b10 : rdb = ram[a[13:2]][23:16];
			2'b11 : rdb = ram[a[13:2]][31:24];
		endcase
	end
endmodule