`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:12:44 11/28/2023 
// Design Name: 
// Module Name:    m_cp0 
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
`define im sr[15:10]
`define exl sr[1]
`define ie sr[0]
`define bd cause[31]
`define ip cause[15:10]
`define excCode cause[6:2]
module m_cp0(
    input wire clk,
    input wire reset,
    input wire cp0Write,
    input wire [4:0] a1, //read
    input wire [4:0] a2, //write
    input wire [31:0] din,
    input wire [31:0] pc,
	 input wire [31:0] instr,
    input wire [4:0] excCodeIn,
    input wire delaySlot,
    input wire [5:0] hwInt,
    input wire exlClr,
    output wire req,
    output wire [31:0] epcOut,
    output reg [31:0] dout,
	 output wire testIntResponse
    );
	reg [31:0] sr,cause,epc;
	wire errReq = !`exl && (|excCodeIn);
	wire intReq = !`exl && `ie && (|(hwInt & `im));
	wire [31:0] tmp_epc = (req) ? (delaySlot ? pc - 32'd4 : pc) : epc;
	assign req = (errReq || intReq) ? 1 : 0;
	assign epcOut = tmp_epc;
	assign testIntResponse = !`exl && `ie && (hwInt[2] & sr[12]);
	always @(*) begin : get_dout
		case (a1) 
			`cp0_sr : dout = sr;
			`cp0_cause : dout = cause;
			`cp0_epc : dout = epc;
			default : dout = 0;
		endcase
	end
	always @(posedge clk) begin : get_all
		if (reset) begin
			sr <= 0;
			cause <= 0;
			epc <= 0;
		end
		else begin
			`ip <= hwInt;
			if (exlClr) `exl <= 1'b0;
			if (req) begin
				`exl <= 1'b1;
				`bd <= delaySlot;
				`excCode <= intReq ? 0 : excCodeIn;
				epc <= tmp_epc;
			end
			else if (cp0Write) begin
				case (a2)
					`cp0_sr : sr <= din;
					`cp0_epc : epc <= din;
					default : ;
				endcase
			end
		end
	end
endmodule