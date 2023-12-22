/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/m_dm.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {16, 0};
static int ng5[] = {8, 0};
static int ng6[] = {7, 0};
static int ng7[] = {3, 0};
static int ng8[] = {24, 0};
static int ng9[] = {4096, 0};
static const char *ng10 = "%d@%h: *%h <= %h";
static unsigned int ng11[] = {0U, 0U};
static unsigned int ng12[] = {1U, 0U};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {3U, 0U};



static void Always_39_0(char *t0)
{
    char t9[8];
    char t17[8];
    char t19[8];
    char t20[8];
    char t26[8];
    char t30[8];
    char t32[8];
    char t37[8];
    char t46[8];
    char t47[8];
    char t52[8];
    char t62[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t63;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2568);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2568);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 1688U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_rshift(t17, 32, t16, 32, t15, 32);
    xsi_vlog_generic_get_array_select_value(t9, 32, t7, t11, t14, 2, 1, t17, 32, 2);
    t18 = (t0 + 2408);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2568);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2568);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 1688U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_rshift(t19, 32, t16, 32, t15, 32);
    xsi_vlog_generic_get_array_select_value(t17, 32, t7, t11, t14, 2, 1, t19, 32, 2);
    t18 = (t0 + 2568);
    t21 = (t18 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng4)));
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    t24 = (t0 + 1648U);
    t27 = (t24 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t26, 32, t25, t28, 2, t29, 32, 1);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_multiply(t30, 32, t23, 32, t26, 32);
    t31 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t20, 16, t17, ((int*)(t22)), 2, t30, 32, 2, t31, 32, 1, 1);
    t33 = ((char*)((ng4)));
    t34 = (t0 + 2568);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t0 + 2568);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 2568);
    t42 = (t41 + 64U);
    t43 = *((char **)t42);
    t44 = (t0 + 1688U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng3)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_rshift(t46, 32, t45, 32, t44, 32);
    xsi_vlog_generic_get_array_select_value(t37, 32, t36, t40, t43, 2, 1, t46, 32, 2);
    t48 = (t0 + 2568);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng5)));
    t53 = (t0 + 1688U);
    t54 = *((char **)t53);
    memset(t52, 0, 8);
    t53 = (t52 + 4);
    t55 = (t54 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (t56 >> 0);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 0);
    *((unsigned int *)t53) = t59;
    t60 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t60 & 3U);
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 3U);
    memset(t62, 0, 8);
    xsi_vlog_unsigned_multiply(t62, 32, t51, 32, t52, 32);
    t63 = ((char*)((ng6)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_add(t64, 32, t62, 32, t63, 32);
    xsi_vlog_generic_get_index_select_value(t47, 1, t37, t50, 2, t64, 32, 2);
    xsi_vlog_mul_concat(t32, 16, 1, t33, 1U, t47, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t32, 16, t20, 16);
    t65 = (t0 + 2408);
    xsi_vlogvar_assign_value(t65, t9, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2568);
    t10 = (t8 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2568);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 1688U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_rshift(t19, 32, t16, 32, t15, 32);
    xsi_vlog_generic_get_array_select_value(t17, 32, t7, t11, t14, 2, 1, t19, 32, 2);
    t18 = (t0 + 2568);
    t21 = (t18 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng5)));
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t24 = (t26 + 4);
    t27 = (t25 + 4);
    t56 = *((unsigned int *)t25);
    t57 = (t56 >> 0);
    *((unsigned int *)t26) = t57;
    t58 = *((unsigned int *)t27);
    t59 = (t58 >> 0);
    *((unsigned int *)t24) = t59;
    t60 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t60 & 3U);
    t61 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t61 & 3U);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_multiply(t30, 32, t23, 32, t26, 32);
    t28 = ((char*)((ng5)));
    xsi_vlog_get_indexed_partselect(t20, 8, t17, ((int*)(t22)), 2, t30, 32, 2, t28, 32, 1, 1);
    t29 = ((char*)((ng8)));
    t31 = (t0 + 2568);
    t33 = (t31 + 56U);
    t34 = *((char **)t33);
    t35 = (t0 + 2568);
    t36 = (t35 + 72U);
    t38 = *((char **)t36);
    t39 = (t0 + 2568);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t42 = (t0 + 1688U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng3)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_rshift(t46, 32, t43, 32, t42, 32);
    xsi_vlog_generic_get_array_select_value(t37, 32, t34, t38, t41, 2, 1, t46, 32, 2);
    t44 = (t0 + 2568);
    t45 = (t44 + 72U);
    t48 = *((char **)t45);
    t49 = ((char*)((ng5)));
    t50 = (t0 + 1688U);
    t51 = *((char **)t50);
    memset(t52, 0, 8);
    t50 = (t52 + 4);
    t53 = (t51 + 4);
    t66 = *((unsigned int *)t51);
    t67 = (t66 >> 0);
    *((unsigned int *)t52) = t67;
    t68 = *((unsigned int *)t53);
    t69 = (t68 >> 0);
    *((unsigned int *)t50) = t69;
    t70 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t70 & 3U);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & 3U);
    memset(t62, 0, 8);
    xsi_vlog_unsigned_multiply(t62, 32, t49, 32, t52, 32);
    t54 = ((char*)((ng6)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_add(t64, 32, t62, 32, t54, 32);
    xsi_vlog_generic_get_index_select_value(t47, 1, t37, t48, 2, t64, 32, 2);
    xsi_vlog_mul_concat(t32, 24, 1, t29, 1U, t47, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t32, 24, t20, 8);
    t55 = (t0 + 2408);
    xsi_vlogvar_assign_value(t55, t9, 0, 0, 32);
    goto LAB17;

}

static void Always_48_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t37[16];
    char t41[8];
    char t47[8];
    char t48[8];
    char t57[8];
    char t58[8];
    char t59[8];
    char t60[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t61;
    char *t62;
    int t63;
    int t64;
    char *t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(50, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2568);
    t17 = (t0 + 2568);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2568);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB13:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB14;

LAB15:    xsi_set_current_line(52, ng0);

LAB18:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);

LAB19:    t4 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t28 == 1)
        goto LAB20;

LAB21:    t11 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t28 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t28 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:
LAB30:    goto LAB17;

LAB20:    goto LAB30;

LAB22:    xsi_set_current_line(55, ng0);

LAB31:    xsi_set_current_line(56, ng0);
    t12 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t14 = (t0 + 1368U);
    t17 = *((char **)t14);
    t14 = (t0 + 1688U);
    t18 = *((char **)t14);
    t14 = (t0 + 1848U);
    t19 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t37, 64, (char)118, t17, 32, (char)118, t18, 32, (char)118, t19, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t0 + 2568);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_rshift(t16, 32, t20, 32, t19, 32);
    xsi_vlog_generic_convert_array_indices(t13, t15, t12, t18, 2, 1, t16, 32, 2);
    t21 = (t13 + 4);
    t6 = *((unsigned int *)t21);
    t28 = (!(t6));
    t22 = (t15 + 4);
    t7 = *((unsigned int *)t22);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB32;

LAB33:    goto LAB30;

LAB24:    xsi_set_current_line(59, ng0);

LAB34:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t27 = (t10 & 1);
    *((unsigned int *)t3) = t27;

LAB35:    t12 = ((char*)((ng11)));
    t31 = xsi_vlog_unsigned_case_compare(t13, 1, t12, 1);
    if (t31 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 1, t2, 1);
    if (t28 == 1)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 65535U);
    t11 = (t0 + 2568);
    t12 = (t0 + 2568);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2568);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng3)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_rshift(t47, 32, t22, 32, t21, 32);
    xsi_vlog_generic_convert_array_indices(t16, t41, t17, t20, 2, 1, t47, 32, 2);
    t23 = (t0 + 2568);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    t29 = (t0 + 1688U);
    t42 = *((char **)t29);
    t29 = (t0 + 1648U);
    t43 = (t29 + 72U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t59, 32, t42, t44, 2, t45, 32, 1);
    memset(t60, 0, 8);
    xsi_vlog_unsigned_multiply(t60, 32, t26, 32, t59, 32);
    t46 = ((char*)((ng4)));
    xsi_vlog_convert_indexed_partindices(t48, t57, t58, ((int*)(t25)), 2, t60, 32, 2, t46, 32, 1, 1);
    t49 = (t16 + 4);
    t30 = *((unsigned int *)t49);
    t28 = (!(t30));
    t50 = (t41 + 4);
    t33 = *((unsigned int *)t50);
    t31 = (!(t33));
    t32 = (t28 && t31);
    t61 = (t48 + 4);
    t34 = *((unsigned int *)t61);
    t35 = (!(t34));
    t36 = (t32 && t35);
    t62 = (t57 + 4);
    t38 = *((unsigned int *)t62);
    t63 = (!(t38));
    t64 = (t36 && t63);
    t65 = (t58 + 4);
    t39 = *((unsigned int *)t65);
    t66 = (!(t39));
    t67 = (t64 && t66);
    if (t67 == 1)
        goto LAB41;

LAB42:    goto LAB30;

LAB26:    xsi_set_current_line(66, ng0);

LAB43:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 3U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 3U);

LAB44:    t12 = ((char*)((ng11)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 2, t12, 2);
    if (t31 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t28 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng13)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t28 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng14)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t28 == 1)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 255U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 255U);
    t11 = (t0 + 2568);
    t12 = (t0 + 2568);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2568);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng3)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_rshift(t48, 32, t22, 32, t21, 32);
    xsi_vlog_generic_convert_array_indices(t41, t47, t17, t20, 2, 1, t48, 32, 2);
    t23 = (t0 + 2568);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng5)));
    t29 = (t0 + 1688U);
    t42 = *((char **)t29);
    memset(t60, 0, 8);
    t29 = (t60 + 4);
    t43 = (t42 + 4);
    t30 = *((unsigned int *)t42);
    t33 = (t30 >> 0);
    *((unsigned int *)t60) = t33;
    t34 = *((unsigned int *)t43);
    t38 = (t34 >> 0);
    *((unsigned int *)t29) = t38;
    t39 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t39 & 3U);
    t40 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t40 & 3U);
    memset(t78, 0, 8);
    xsi_vlog_unsigned_multiply(t78, 32, t26, 32, t60, 32);
    t44 = ((char*)((ng5)));
    xsi_vlog_convert_indexed_partindices(t57, t58, t59, ((int*)(t25)), 2, t78, 32, 2, t44, 32, 1, 1);
    t45 = (t41 + 4);
    t51 = *((unsigned int *)t45);
    t28 = (!(t51));
    t46 = (t47 + 4);
    t52 = *((unsigned int *)t46);
    t31 = (!(t52));
    t32 = (t28 && t31);
    t49 = (t57 + 4);
    t53 = *((unsigned int *)t49);
    t35 = (!(t53));
    t36 = (t32 && t35);
    t50 = (t58 + 4);
    t54 = *((unsigned int *)t50);
    t63 = (!(t54));
    t64 = (t36 && t63);
    t61 = (t59 + 4);
    t55 = *((unsigned int *)t61);
    t66 = (!(t55));
    t67 = (t64 && t66);
    if (t67 == 1)
        goto LAB54;

LAB55:    goto LAB30;

LAB32:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB33;

LAB36:    xsi_set_current_line(61, ng0);
    t14 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    t17 = (t0 + 1688U);
    t19 = *((char **)t17);
    t17 = (t0 + 1848U);
    t20 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t21 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t21);
    t38 = (t34 >> 0);
    *((unsigned int *)t17) = t38;
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t39 & 65535U);
    t40 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t40 & 65535U);
    t22 = (t0 + 2568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 2568);
    t26 = (t25 + 72U);
    t29 = *((char **)t26);
    t42 = (t0 + 2568);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 1688U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng3)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_rshift(t47, 32, t46, 32, t45, 32);
    xsi_vlog_generic_get_array_select_value(t41, 32, t24, t29, t44, 2, 1, t47, 32, 2);
    memset(t48, 0, 8);
    t49 = (t48 + 4);
    t50 = (t41 + 4);
    t51 = *((unsigned int *)t41);
    t52 = (t51 >> 16);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 16);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & 65535U);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 65535U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t48, 16, t16, 16);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t37, 64, (char)118, t18, 32, (char)118, t19, 32, (char)118, t15, 32);
    goto LAB40;

LAB38:    xsi_set_current_line(62, ng0);
    t3 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    t4 = (t0 + 2568);
    t14 = (t4 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 2568);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2568);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng3)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_rshift(t41, 32, t25, 32, t24, 32);
    xsi_vlog_generic_get_array_select_value(t16, 32, t17, t20, t23, 2, 1, t41, 32, 2);
    memset(t47, 0, 8);
    t26 = (t47 + 4);
    t29 = (t16 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (t6 >> 0);
    *((unsigned int *)t47) = t7;
    t8 = *((unsigned int *)t29);
    t9 = (t8 >> 0);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t10 & 65535U);
    t27 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t27 & 65535U);
    t42 = (t0 + 1848U);
    t43 = *((char **)t42);
    memset(t48, 0, 8);
    t42 = (t48 + 4);
    t44 = (t43 + 4);
    t30 = *((unsigned int *)t43);
    t33 = (t30 >> 0);
    *((unsigned int *)t48) = t33;
    t34 = *((unsigned int *)t44);
    t38 = (t34 >> 0);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t39 & 65535U);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t40 & 65535U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t48, 16, t47, 16);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t37, 64, (char)118, t11, 32, (char)118, t12, 32, (char)118, t15, 32);
    goto LAB40;

LAB41:    t40 = *((unsigned int *)t58);
    t68 = (t40 + 0);
    t51 = *((unsigned int *)t41);
    t52 = *((unsigned int *)t57);
    t69 = (t51 + t52);
    t53 = *((unsigned int *)t48);
    t54 = *((unsigned int *)t57);
    t70 = (t53 - t54);
    t71 = (t70 + 1);
    xsi_vlogvar_wait_assign_value(t11, t15, t68, t69, t71, 0LL);
    goto LAB42;

LAB45:    xsi_set_current_line(68, ng0);
    t14 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    t17 = (t0 + 1688U);
    t19 = *((char **)t17);
    t17 = (t0 + 1848U);
    t20 = *((char **)t17);
    memset(t41, 0, 8);
    t17 = (t41 + 4);
    t21 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t33 = (t30 >> 0);
    *((unsigned int *)t41) = t33;
    t34 = *((unsigned int *)t21);
    t38 = (t34 >> 0);
    *((unsigned int *)t17) = t38;
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t39 & 255U);
    t40 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t40 & 255U);
    t22 = (t0 + 2568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 2568);
    t26 = (t25 + 72U);
    t29 = *((char **)t26);
    t42 = (t0 + 2568);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 1688U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng3)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_rshift(t48, 32, t46, 32, t45, 32);
    xsi_vlog_generic_get_array_select_value(t47, 32, t24, t29, t44, 2, 1, t48, 32, 2);
    memset(t57, 0, 8);
    t49 = (t57 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 8);
    *((unsigned int *)t57) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 8);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t55 & 16777215U);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 16777215U);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t57, 24, t41, 8);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t37, 64, (char)118, t18, 32, (char)118, t19, 32, (char)118, t16, 32);
    goto LAB53;

LAB47:    xsi_set_current_line(69, ng0);
    t3 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    t4 = (t0 + 2568);
    t14 = (t4 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 2568);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2568);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng3)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_rshift(t47, 32, t25, 32, t24, 32);
    xsi_vlog_generic_get_array_select_value(t41, 32, t17, t20, t23, 2, 1, t47, 32, 2);
    memset(t48, 0, 8);
    t26 = (t48 + 4);
    t29 = (t41 + 4);
    t6 = *((unsigned int *)t41);
    t7 = (t6 >> 0);
    *((unsigned int *)t48) = t7;
    t8 = *((unsigned int *)t29);
    t9 = (t8 >> 0);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t10 & 255U);
    t27 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t27 & 255U);
    t42 = (t0 + 1848U);
    t43 = *((char **)t42);
    memset(t57, 0, 8);
    t42 = (t57 + 4);
    t44 = (t43 + 4);
    t30 = *((unsigned int *)t43);
    t33 = (t30 >> 0);
    *((unsigned int *)t57) = t33;
    t34 = *((unsigned int *)t44);
    t38 = (t34 >> 0);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t39 & 255U);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t40 & 255U);
    t45 = (t0 + 2568);
    t46 = (t45 + 56U);
    t49 = *((char **)t46);
    t50 = (t0 + 2568);
    t61 = (t50 + 72U);
    t62 = *((char **)t61);
    t65 = (t0 + 2568);
    t72 = (t65 + 64U);
    t73 = *((char **)t72);
    t74 = (t0 + 1688U);
    t75 = *((char **)t74);
    t74 = ((char*)((ng3)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_rshift(t59, 32, t75, 32, t74, 32);
    xsi_vlog_generic_get_array_select_value(t58, 32, t49, t62, t73, 2, 1, t59, 32, 2);
    memset(t60, 0, 8);
    t76 = (t60 + 4);
    t77 = (t58 + 4);
    t51 = *((unsigned int *)t58);
    t52 = (t51 >> 16);
    *((unsigned int *)t60) = t52;
    t53 = *((unsigned int *)t77);
    t54 = (t53 >> 16);
    *((unsigned int *)t76) = t54;
    t55 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t55 & 65535U);
    t56 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t56 & 65535U);
    xsi_vlogtype_concat(t16, 32, 32, 3U, t60, 16, t57, 8, t48, 8);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t37, 64, (char)118, t11, 32, (char)118, t12, 32, (char)118, t16, 32);
    goto LAB53;

LAB49:    xsi_set_current_line(70, ng0);
    t3 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    t4 = (t0 + 2568);
    t14 = (t4 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 2568);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2568);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng3)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_rshift(t47, 32, t25, 32, t24, 32);
    xsi_vlog_generic_get_array_select_value(t41, 32, t17, t20, t23, 2, 1, t47, 32, 2);
    memset(t48, 0, 8);
    t26 = (t48 + 4);
    t29 = (t41 + 4);
    t6 = *((unsigned int *)t41);
    t7 = (t6 >> 0);
    *((unsigned int *)t48) = t7;
    t8 = *((unsigned int *)t29);
    t9 = (t8 >> 0);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t10 & 65535U);
    t27 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t27 & 65535U);
    t42 = (t0 + 1848U);
    t43 = *((char **)t42);
    memset(t57, 0, 8);
    t42 = (t57 + 4);
    t44 = (t43 + 4);
    t30 = *((unsigned int *)t43);
    t33 = (t30 >> 0);
    *((unsigned int *)t57) = t33;
    t34 = *((unsigned int *)t44);
    t38 = (t34 >> 0);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t39 & 255U);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t40 & 255U);
    t45 = (t0 + 2568);
    t46 = (t45 + 56U);
    t49 = *((char **)t46);
    t50 = (t0 + 2568);
    t61 = (t50 + 72U);
    t62 = *((char **)t61);
    t65 = (t0 + 2568);
    t72 = (t65 + 64U);
    t73 = *((char **)t72);
    t74 = (t0 + 1688U);
    t75 = *((char **)t74);
    t74 = ((char*)((ng3)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_rshift(t59, 32, t75, 32, t74, 32);
    xsi_vlog_generic_get_array_select_value(t58, 32, t49, t62, t73, 2, 1, t59, 32, 2);
    memset(t60, 0, 8);
    t76 = (t60 + 4);
    t77 = (t58 + 4);
    t51 = *((unsigned int *)t58);
    t52 = (t51 >> 24);
    *((unsigned int *)t60) = t52;
    t53 = *((unsigned int *)t77);
    t54 = (t53 >> 24);
    *((unsigned int *)t76) = t54;
    t55 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t55 & 255U);
    t56 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t56 & 255U);
    xsi_vlogtype_concat(t16, 32, 32, 3U, t60, 8, t57, 8, t48, 16);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t37, 64, (char)118, t11, 32, (char)118, t12, 32, (char)118, t16, 32);
    goto LAB53;

LAB51:    xsi_set_current_line(71, ng0);
    t3 = xsi_vlog_time(t37, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    t4 = (t0 + 2568);
    t14 = (t4 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 2568);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2568);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng3)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_rshift(t47, 32, t25, 32, t24, 32);
    xsi_vlog_generic_get_array_select_value(t41, 32, t17, t20, t23, 2, 1, t47, 32, 2);
    memset(t48, 0, 8);
    t26 = (t48 + 4);
    t29 = (t41 + 4);
    t6 = *((unsigned int *)t41);
    t7 = (t6 >> 0);
    *((unsigned int *)t48) = t7;
    t8 = *((unsigned int *)t29);
    t9 = (t8 >> 0);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t10 & 16777215U);
    t27 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t27 & 16777215U);
    t42 = (t0 + 1848U);
    t43 = *((char **)t42);
    memset(t57, 0, 8);
    t42 = (t57 + 4);
    t44 = (t43 + 4);
    t30 = *((unsigned int *)t43);
    t33 = (t30 >> 0);
    *((unsigned int *)t57) = t33;
    t34 = *((unsigned int *)t44);
    t38 = (t34 >> 0);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t39 & 255U);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t40 & 255U);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t57, 8, t48, 24);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t37, 64, (char)118, t11, 32, (char)118, t12, 32, (char)118, t16, 32);
    goto LAB53;

LAB54:    t56 = *((unsigned int *)t59);
    t68 = (t56 + 0);
    t79 = *((unsigned int *)t47);
    t80 = *((unsigned int *)t58);
    t69 = (t79 + t80);
    t81 = *((unsigned int *)t57);
    t82 = *((unsigned int *)t58);
    t70 = (t81 - t82);
    t71 = (t70 + 1);
    xsi_vlogvar_wait_assign_value(t11, t16, t68, t69, t71, 0LL);
    goto LAB55;

}


extern void work_m_00000000000364147731_0324821570_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000000364147731_0324821570", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000364147731_0324821570.didat");
	xsi_register_executes(pe);
}
