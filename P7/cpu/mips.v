`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:52:54 11/14/2023 
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
    input wire clk,                    // 时钟信号
    input wire reset,                  // 同步复位信号
    input wire interrupt,              // 外部中断信号
    output wire [31:0] macroscopic_pc, // 宏观 PC

    output wire [31:0] i_inst_addr,    // IM 读取地址（取指 PC）
    input  wire [31:0] i_inst_rdata,   // IM 读取数据

    output wire [31:0] m_data_addr,    // DM 读写地址
    input  wire [31:0] m_data_rdata,   // DM 读取数据
    output wire [31:0] m_data_wdata,   // DM 待写入数据
    output wire [3 :0] m_data_byteen,  // DM 字节使能信号

    output wire [31:0] m_int_addr,     // 中断发生器待写入地址
    output wire [3 :0] m_int_byteen,   // 中断发生器字节使能信号

    output wire [31:0] m_inst_addr,    // M 级 PC

    output wire w_grf_we,              // GRF 写使能信号
    output wire [4 :0] w_grf_addr,     // GRF 待写入寄存器编号
    output wire [31:0] w_grf_wdata,    // GRF 待写入数据

    output wire [31:0] w_inst_addr     // W 级 PC
	 );
	wire [31:0] m_tmp_data_wdata,m_tmp_data_addr,m_tmp_data_rdata;
	wire [3:0] m_tmp_data_byteen;
	wire [5:0] hwInt = {3'b0, interrupt, TC1_IRQ, TC0_IRQ};
	wire [31:0] TC0_Addr,TC0_Din,TC0_Dout;
	wire [31:0] TC1_Addr,TC1_Din,TC1_Dout;
	wire TC0_WE,TC1_WE;
	wire TC0_IRQ,TC1_IRQ;
	wire testIntResponse;
	assign m_int_addr = (testIntResponse && interrupt) ? 32'h00007f20 : m_data_addr;
	assign m_int_byteen = (testIntResponse && interrupt) ? 4'b0001 : m_data_byteen;
	cpu _cpu (
    .clk(clk), 
    .reset(reset),
	 .hwInt(hwInt),
	 .macroscopic_pc(macroscopic_pc),
	 .testIntResponse(testIntResponse),
    .i_inst_rdata(i_inst_rdata), 
    .m_data_rdata(m_tmp_data_rdata), 
    .i_inst_addr(i_inst_addr), 
    .m_data_addr(m_tmp_data_addr), 
    .m_data_wdata(m_tmp_data_wdata), 
    .m_data_byteen(m_tmp_data_byteen), 
    .m_inst_addr(m_inst_addr), 
    .w_grf_we(w_grf_we), 
    .w_grf_addr(w_grf_addr), 
    .w_grf_wdata(w_grf_wdata), 
    .w_inst_addr(w_inst_addr)
    );
	 mips_bridge _bridge (
    .m_data_addr(m_data_addr), 
    .m_data_wdata(m_data_wdata), 
    .m_data_byteen(m_data_byteen), 
    .m_data_rdata(m_data_rdata), 
    .m_tmp_data_addr(m_tmp_data_addr), 
    .m_tmp_data_wdata(m_tmp_data_wdata), 
    .m_tmp_data_byteen(m_tmp_data_byteen), 
    .m_tmp_data_rdata(m_tmp_data_rdata), 
    .timer0_addr(TC0_Addr), 
    .timer0_we(TC0_WE), 
    .timer0_wd(TC0_Din), 
    .timer0_rd(TC0_Dout), 
    .timer1_addr(TC1_Addr), 
    .timer1_we(TC1_WE), 
    .timer1_wd(TC1_Din), 
    .timer1_rd(TC1_Dout)
    );
	 TC _timer0(
        .clk(clk),
        .reset(reset),
        .Addr(TC0_Addr[31:2]),
        .WE(TC0_WE),
        .Din(TC0_Din),
        .Dout(TC0_Dout),
        .IRQ(TC0_IRQ)
    );

    TC _timer1(
        .clk(clk),
        .reset(reset),
        .Addr(TC1_Addr[31:2]),
        .WE(TC1_WE),
        .Din(TC1_Din),
        .Dout(TC1_Dout),
        .IRQ(TC1_IRQ)
    );


endmodule
