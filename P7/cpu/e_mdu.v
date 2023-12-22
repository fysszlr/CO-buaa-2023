`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:18:32 11/14/2023 
// Design Name: 
// Module Name:    e_mdu 
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
module e_mdu(
    input wire clk,
    input wire reset,
	 input wire req,
    input wire [3:0] mduOp,
    input wire [31:0] d1,
    input wire [31:0] d2,
    input wire start,
    output reg busy,
    output reg [31:0] hi,
    output reg [31:0] lo
    );
	reg [31:0] tmp_hi;
	reg [31:0] tmp_lo;
	reg [3:0] cnt;
	always @(posedge clk) begin : get_hi_lo
		if (reset) begin
			busy <= 0;
			hi <= 0;
			lo <= 0;
			tmp_hi <= 0;
			tmp_lo <= 0;
			cnt <= 0;
		end
		else begin
			if (cnt > 1) cnt <= cnt - 1;
			else if (cnt == 1) begin
				hi <= tmp_hi;
				lo <= tmp_lo;
				busy <= 0;
				cnt <= 0;
			end
			else begin
				if (!req) begin
					if (start) begin
						case (mduOp)
							`mudOp_nope : begin
								{tmp_hi,tmp_lo} <= 64'b0;
								cnt <= 0;
								busy <= 0;
							end
							`mudOp_mult : begin
								{tmp_hi,tmp_lo} <= $signed(d1) * $signed(d2);
								cnt <= 5;
								busy <= 1;
							end
							`mudOp_multu : begin
								{tmp_hi,tmp_lo} <= d1 * d2;
								cnt <= 5;
								busy <= 1;
							end
							`mudOp_div : begin
								tmp_hi <= $signed(d1) % $signed(d2);
								tmp_lo <= $signed(d1) / $signed(d2);
								cnt <= 10;
								busy <= 1;
							end
							`mudOp_divu : begin
								tmp_hi <= d1 % d2;
								tmp_lo <= d1 / d2;
								cnt <= 10;
								busy <= 1;
							end
						endcase
					end
					else begin
						case (mduOp)
							`mudOp_mthi : begin
								hi <= d1;
								lo <= lo;
							end
							`mudOp_mtlo : begin
								hi <= hi;
								lo <= d1;
							end
						endcase
					end
				end
			end
		end
	end

endmodule
