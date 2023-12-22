`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:36 11/14/2023 
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
module m_dm(
    input wire [3:0] memOp,
	 input wire memWrite,
	 input wire [31:0] data_addr,
	 input wire [31:0] data_rdata,
    input wire [31:0] fwd_grf_rt,
    output reg [3:0] data_byteen,
    output reg [31:0] data_wdata,
	 output reg [31:0] memRd
    );
	always @(*) begin : get_memRd
		case (memOp)
			`memOp_nope : memRd = 0;
			`memOp_w : memRd = data_rdata;
			`memOp_h : begin
				case (data_addr[1])
					1'b0 : memRd = {{16{data_rdata[15]}},data_rdata[15:0]};
					1'b1 : memRd = {{16{data_rdata[31]}},data_rdata[31:16]};
				endcase
			end
			`memOp_b : begin
				case (data_addr[1:0])
					2'b00 : memRd = {{24{data_rdata[7]}},data_rdata[7:0]};
					2'b01 : memRd = {{24{data_rdata[15]}},data_rdata[15:8]};
					2'b10 : memRd = {{24{data_rdata[23]}},data_rdata[23:16]};
					2'b11 : memRd = {{24{data_rdata[31]}},data_rdata[31:24]};
				endcase
			end
			default : memRd = 0;
		endcase
	end
	always @(*) begin : get_data_byteen_data_wdata
		if (memWrite == 0) begin
			data_byteen = 4'b0000;
			data_wdata = 0;
		end
		else begin
			case (memOp)
				`memOp_nope : begin
					data_byteen = 4'b0000;
					data_wdata = 0;
				end
				`memOp_w : begin
					data_byteen = 4'b1111;
					data_wdata = fwd_grf_rt;
				end
				`memOp_h : begin
					case (data_addr[1])
						1'b0 : begin
							data_byteen = 4'b0011;
							data_wdata[15:0] = fwd_grf_rt[15:0];
						end
						1'b1 : begin
							data_byteen = 4'b1100;
							data_wdata[31:16] = fwd_grf_rt[15:0];
						end
					endcase
				end
				`memOp_b : begin
					case (data_addr[1:0])
						2'b00 : begin
							data_byteen = 4'b0001;
							data_wdata[7:0] = fwd_grf_rt[7:0];
						end
						2'b01 : begin
							data_byteen = 4'b0010;
							data_wdata[15:8] = fwd_grf_rt[7:0];
						end
						2'b10 : begin
							data_byteen = 4'b0100;
							data_wdata[23:16] = fwd_grf_rt[7:0];
						end
						2'b11 : begin
							data_byteen = 4'b1000;
							data_wdata[31:24] = fwd_grf_rt[7:0];
						end
					endcase
				end
				default : begin
					data_byteen = 4'b0000;
					data_wdata = 0;
				end
			endcase
		end
	end
	
endmodule
