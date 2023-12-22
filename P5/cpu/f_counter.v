`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:01 11/09/2023 
// Design Name: 
// Module Name:    f_counter 
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
module f_counter(
    input wire clk,
    input wire reset,
    output reg counter
    );
	always @(posedge clk) begin	
		if (reset) counter <= 0;
		else counter <= 1;
	end

endmodule
