`timescale 1ns / 1ps

`define op_special 6'b000000
`define op_lw 6'b100011
`define op_sw 6'b101011
`define op_lui 6'b001111
`define op_ori 6'b001101
`define op_beq 6'b000100
`define op_jal 6'b000011
`define op_j 6'b000010
`define op_lh 6'b100001
`define op_sh 6'b101001
`define op_lb 6'b100000
`define op_sb 6'b101000

`define funct_add 6'b100000
`define funct_sub 6'b100010
`define funct_jr 6'b001000
`define funct_sll 6'b000000

`define extOp_nope 0
`define extOp_signext 1
`define extOp_signext00 2
`define extOp_sll16 3
`define extOp_ext00 4
`define extOp_zeroext 5

`define regDstSel_0 0
`define regDstSel_15_11 1
`define regDstSel_20_16 2
`define regDstSel_31 3

`define aluOp_nope 0
`define aluOp_add 1
`define aluOp_sub 2
`define aluOp_or 3
`define aluOp_sll 4

`define cmpOp_nope 0
`define cmpOp_equal 1

`define nPcOp_pc4 0
`define nPcOp_pcImm16 1
`define nPcOp_pcImm26 2
`define nPcOp_pcReg 3

`define memOp_nope 0
`define memOp_w 1
`define memOp_h 2
`define memOp_b 3

`define srcASel_nope 0
`define srcASel_grf_rs 1

`define srcBSel_nope 0
`define srcBSel_grf_rt 1
`define srcBSel_extImm 2

`define regWdSel_nope 0
`define regWdSel_aluResult 1
`define regWdSel_memRd 2
`define regWdSel_extImm 3
`define regWdSel_pc4 4
