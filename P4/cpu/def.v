`define branchSel_pc4 0
`define branchSel_pcOffset 1

`define jalSel_oldPc 0
`define jalSel_jalPc 1

`define jrSel_oldPc 0
`define jrSel_jrPc 1

`define counter_0 0
`define counter_1 1

`define op_alu 6'b000000
`define op_ori 6'b001101
`define op_lw 6'b100011
`define op_sw 6'b101011
`define op_beq 6'b000100
`define op_lui 6'b001111
`define op_lb 6'b100000
`define op_sb 6'b101000
`define op_jal 6'b000011
`define op_lh 6'b100001

`define funct_add 6'b100000
`define funct_sub 6'b100010
`define funct_sll 6'b000000
`define funct_jr 6'b001000
`define funct_xor 6'b100110

`define aluOp_add 0
`define aluOp_sub 1
`define aluOp_or 2
`define aluOp_xor 3
`define aluOp_sll 4

`define aluSrc_rd2 0
`define aluSrc_signImm 1
`define aluSrc_zeroImm 2
`define aluSrc_6_10 3

`define regDst_16_20 0
`define regDst_11_15 1
`define regDst_31 2

`define sllOp_sign2 0
`define sllOp_zero16 1

`define wdOp_w 0
`define wdOp_b 1
`define wdOp_h 2

`define memtoReg_aluResult 0
`define memtoReg_rdw 1
`define memtoReg_sllImm 2
`define memtoReg_rdb 3
`define memtoReg_pc4 4