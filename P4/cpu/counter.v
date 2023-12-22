`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:30:04 10/31/2023 
// Design Name: 
// Module Name:    counter 
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
module counter(
    input wire clk,
    input wire reset,
    output reg counter
    );
	always @(posedge clk) begin
		if (reset) begin
			counter <= 0;
		end
		else begin
			counter <= 1;
		end
	end

endmodule
