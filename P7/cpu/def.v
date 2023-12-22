`timescale 1ns / 1ps

`define op_special 6'b000000
`define op_lw 6'b100011
`define op_sw 6'b101011
`define op_lui 6'b001111
`define op_ori 6'b001101
`define op_beq 6'b000100
`define op_jal 6'b000011
`define op_lh 6'b100001
`define op_sh 6'b101001
`define op_lb 6'b100000
`define op_sb 6'b101000
`define op_addi 6'b001000
`define op_andi 6'b001100
`define op_bne 6'b000101
`define op_addiu 6'b001001
`define op_eretOrMtc0OrMfc0 6'b010000

`define funct_add 6'b100000
`define funct_sub 6'b100010
`define funct_jr 6'b001000
`define funct_sll 6'b000000
`define funct_and 6'b100100
`define funct_or 6'b100101
`define funct_slt 6'b101010
`define funct_sltu 6'b101011
`define funct_mult 6'b011000
`define funct_multu 6'b011001
`define funct_div 6'b011010
`define funct_divu 6'b011011
`define funct_mthi 6'b010001
`define funct_mtlo 6'b010011
`define funct_mfhi 6'b010000
`define funct_mflo 6'b010010
`define funct_eret 6'b011000
`define funct_syscall 6'b001100
`define funct_srl 6'b000010

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
`define aluOp_and 5
`define aluOp_slt 6
`define aluOp_sltu 7
`define aluOp_addu 8
`define aluOp_srl 9

`define cmpOp_nope 0
`define cmpOp_equal 1
`define cmpOp_not_equal 2

`define nPcOp_pc4 0
`define nPcOp_pcImm16 1
`define nPcOp_pcImm26 2
`define nPcOp_pcReg 3
`define nPcOp_epc 4

`define memOp_nope 0
`define memOp_w 1
`define memOp_h 2
`define memOp_b 3

`define srcASel_nope 0
`define srcASel_grf_rs 1

`define srcBSel_nope 0
`define srcBSel_grf_rt 1
`define srcBSel_extImm 2

`define d1Sel_nope 0
`define d1Sel_grf_rs 1

`define d2Sel_nope 0
`define d2Sel_grf_rt 1

`define regWdSel_nope 0
`define regWdSel_aluResult 1
`define regWdSel_memRd 2
`define regWdSel_extImm 3
`define regWdSel_pc4 4
`define regWdSel_hi 5
`define regWdSel_lo 6
`define regWdSel_cp0Rd 7

`define mudOp_nope 0
`define mudOp_mult 1
`define mudOp_multu 2
`define mudOp_div 3
`define mudOp_divu 4
`define mudOp_mthi 5
`define mudOp_mtlo 6

`define cp0_sr 12
`define cp0_cause 13
`define cp0_epc 14

`define excCode_nope 5'd0
`define excCode_adel 5'd4
`define excCode_ades 5'd5
`define excCode_syscall 5'd8
`define excCode_ri 5'd10
`define excCode_ov 5'd12