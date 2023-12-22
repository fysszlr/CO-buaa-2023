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
static const char *ng0 = "C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P4/cpu/dm.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {4096, 0};
static int ng7[] = {1, 0};
static const char *ng8 = "@%h: *%h <= %h";



static void Cont_35_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1344U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 16383U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 16383U);
    t12 = (t0 + 6304);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 16383U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 13);
    t25 = (t0 + 6144);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_39_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 6368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 6160);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_41_2(char *t0)
{
    char t6[8];
    char t18[8];
    char t22[8];
    char t29[8];
    char t39[8];
    char t48[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6176);
    *((int *)t2) = 1;
    t3 = (t0 + 5112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4888);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(42, ng0);
    t7 = (t0 + 2624U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 3U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 3U);

LAB8:    t16 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 2, t16, 2);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t17 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t17 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB19:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 4888);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(43, ng0);
    t19 = (t0 + 3344);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 3344);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 3344);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t30 = (t0 + 2624U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 2);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 2);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 4095U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 4095U);
    xsi_vlog_generic_get_array_select_value(t22, 32, t21, t25, t28, 2, 1, t29, 12, 2);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t41 = (t22 + 4);
    t42 = *((unsigned int *)t22);
    t43 = (t42 >> 0);
    *((unsigned int *)t39) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 255U);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 & 255U);
    t49 = (t0 + 1664U);
    t50 = *((char **)t49);
    memset(t48, 0, 8);
    t49 = (t48 + 4);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (t52 >> 8);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 8);
    *((unsigned int *)t49) = t55;
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 16777215U);
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t57 & 16777215U);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t48, 24, t39, 8);
    t58 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t58, t18, 0, 0, 32, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1664U);
    t4 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t22) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t7 = (t0 + 3344);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t16 = (t0 + 3344);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3344);
    t23 = (t21 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2624U);
    t26 = *((char **)t25);
    memset(t39, 0, 8);
    t25 = (t39 + 4);
    t27 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    t34 = (t33 >> 2);
    *((unsigned int *)t39) = t34;
    t35 = *((unsigned int *)t27);
    t36 = (t35 >> 2);
    *((unsigned int *)t25) = t36;
    t37 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t37 & 4095U);
    t38 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t38 & 4095U);
    xsi_vlog_generic_get_array_select_value(t29, 32, t9, t20, t24, 2, 1, t39, 12, 2);
    memset(t48, 0, 8);
    t28 = (t48 + 4);
    t30 = (t29 + 4);
    t42 = *((unsigned int *)t29);
    t43 = (t42 >> 8);
    *((unsigned int *)t48) = t43;
    t44 = *((unsigned int *)t30);
    t45 = (t44 >> 8);
    *((unsigned int *)t28) = t45;
    t46 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t46 & 255U);
    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & 255U);
    t31 = (t0 + 1664U);
    t32 = *((char **)t31);
    memset(t59, 0, 8);
    t31 = (t59 + 4);
    t40 = (t32 + 4);
    t52 = *((unsigned int *)t32);
    t53 = (t52 >> 16);
    *((unsigned int *)t59) = t53;
    t54 = *((unsigned int *)t40);
    t55 = (t54 >> 16);
    *((unsigned int *)t31) = t55;
    t56 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t56 & 65535U);
    t57 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t57 & 65535U);
    xsi_vlogtype_concat(t18, 32, 32, 3U, t59, 16, t48, 8, t22, 8);
    t41 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t41, t18, 0, 0, 32, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1664U);
    t4 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t22) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    t7 = (t0 + 3344);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t16 = (t0 + 3344);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3344);
    t23 = (t21 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2624U);
    t26 = *((char **)t25);
    memset(t39, 0, 8);
    t25 = (t39 + 4);
    t27 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    t34 = (t33 >> 2);
    *((unsigned int *)t39) = t34;
    t35 = *((unsigned int *)t27);
    t36 = (t35 >> 2);
    *((unsigned int *)t25) = t36;
    t37 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t37 & 4095U);
    t38 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t38 & 4095U);
    xsi_vlog_generic_get_array_select_value(t29, 32, t9, t20, t24, 2, 1, t39, 12, 2);
    memset(t48, 0, 8);
    t28 = (t48 + 4);
    t30 = (t29 + 4);
    t42 = *((unsigned int *)t29);
    t43 = (t42 >> 16);
    *((unsigned int *)t48) = t43;
    t44 = *((unsigned int *)t30);
    t45 = (t44 >> 16);
    *((unsigned int *)t28) = t45;
    t46 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t46 & 255U);
    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & 255U);
    t31 = (t0 + 1664U);
    t32 = *((char **)t31);
    memset(t59, 0, 8);
    t31 = (t59 + 4);
    t40 = (t32 + 4);
    t52 = *((unsigned int *)t32);
    t53 = (t52 >> 24);
    *((unsigned int *)t59) = t53;
    t54 = *((unsigned int *)t40);
    t55 = (t54 >> 24);
    *((unsigned int *)t31) = t55;
    t56 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t56 & 255U);
    t57 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t57 & 255U);
    xsi_vlogtype_concat(t18, 32, 32, 3U, t59, 8, t48, 8, t22, 16);
    t41 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t41, t18, 0, 0, 32, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1664U);
    t4 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t22) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 16777215U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 16777215U);
    t7 = (t0 + 3344);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t16 = (t0 + 3344);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3344);
    t23 = (t21 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2624U);
    t26 = *((char **)t25);
    memset(t39, 0, 8);
    t25 = (t39 + 4);
    t27 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    t34 = (t33 >> 2);
    *((unsigned int *)t39) = t34;
    t35 = *((unsigned int *)t27);
    t36 = (t35 >> 2);
    *((unsigned int *)t25) = t36;
    t37 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t37 & 4095U);
    t38 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t38 & 4095U);
    xsi_vlog_generic_get_array_select_value(t29, 32, t9, t20, t24, 2, 1, t39, 12, 2);
    memset(t48, 0, 8);
    t28 = (t48 + 4);
    t30 = (t29 + 4);
    t42 = *((unsigned int *)t29);
    t43 = (t42 >> 24);
    *((unsigned int *)t48) = t43;
    t44 = *((unsigned int *)t30);
    t45 = (t44 >> 24);
    *((unsigned int *)t28) = t45;
    t46 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t46 & 255U);
    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & 255U);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t48, 8, t22, 24);
    t31 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t31, t18, 0, 0, 32, 0LL);
    goto LAB19;

}

static void Always_50_3(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
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
    unsigned int t37;
    int t38;

LAB0:    t1 = (t0 + 5328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6192);
    *((int *)t2) = 1;
    t3 = (t0 + 5360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2304U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(56, ng0);

LAB16:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);

LAB9:    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 3664);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_signed_leq(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(52, ng0);

LAB13:    xsi_set_current_line(53, ng0);
    t12 = ((char*)((ng5)));
    t14 = (t0 + 3344);
    t17 = (t0 + 3344);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3344);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3664);
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
        goto LAB14;

LAB15:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3664);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(57, ng0);

LAB20:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t4 = (t0 + 1344U);
    t11 = *((char **)t4);
    t4 = (t0 + 1664U);
    t12 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)118, t5, 32, (char)118, t11, 32, (char)118, t12, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);

LAB21:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t28 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3344);
    t5 = (t0 + 3344);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 3344);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 2624U);
    t20 = *((char **)t19);
    memset(t16, 0, 8);
    t19 = (t16 + 4);
    t21 = (t20 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t21);
    t9 = (t8 >> 2);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 4095U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 4095U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t12, t18, 2, 1, t16, 12, 2);
    t22 = (t13 + 4);
    t30 = *((unsigned int *)t22);
    t28 = (!(t30));
    t23 = (t15 + 4);
    t33 = *((unsigned int *)t23);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB33;

LAB34:
LAB28:    goto LAB19;

LAB22:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 2784U);
    t5 = *((char **)t4);
    t4 = (t0 + 3344);
    t11 = (t0 + 3344);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 3344);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2624U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 4095U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 4095U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t16, 12, 2);
    t23 = (t13 + 4);
    t30 = *((unsigned int *)t23);
    t31 = (!(t30));
    t24 = (t15 + 4);
    t33 = *((unsigned int *)t24);
    t32 = (!(t33));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB29;

LAB30:    goto LAB28;

LAB24:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 3504);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 3344);
    t14 = (t0 + 3344);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3344);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2624U);
    t23 = *((char **)t22);
    memset(t16, 0, 8);
    t22 = (t16 + 4);
    t24 = (t23 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t24);
    t9 = (t8 >> 2);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 4095U);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t27 & 4095U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t18, t21, 2, 1, t16, 12, 2);
    t25 = (t13 + 4);
    t30 = *((unsigned int *)t25);
    t31 = (!(t30));
    t26 = (t15 + 4);
    t33 = *((unsigned int *)t26);
    t32 = (!(t33));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB31;

LAB32:    goto LAB28;

LAB29:    t34 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t15);
    t36 = (t34 - t37);
    t38 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t15), t38, 0LL);
    goto LAB30;

LAB31:    t34 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t15);
    t36 = (t34 - t37);
    t38 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t15), t38, 0LL);
    goto LAB32;

LAB33:    t34 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t15);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB34;

}

static void Cont_67_4(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3344);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3344);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 2624U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 4095U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 4095U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 12, 2);
    t22 = (t0 + 6432);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 6208);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_68_5(char *t0)
{
    char t4[8];
    char t19[8];
    char t26[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 5824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 6224);
    *((int *)t2) = 1;
    t3 = (t0 + 5856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 2624U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t14, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(70, ng0);
    t16 = (t0 + 3344);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 3344);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3344);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t27 = (t0 + 2624U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 2);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 2);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 4095U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 4095U);
    xsi_vlog_generic_get_array_select_value(t19, 32, t18, t22, t25, 2, 1, t26, 12, 2);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t19 + 4);
    t39 = *((unsigned int *)t19);
    t40 = (t39 >> 0);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 255U);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 255U);
    t45 = (t0 + 3184);
    xsi_vlogvar_assign_value(t45, t36, 0, 0, 8);
    goto LAB15;

LAB9:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 3344);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3344);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = (t0 + 3344);
    t18 = (t17 + 64U);
    t20 = *((char **)t18);
    t21 = (t0 + 2624U);
    t22 = *((char **)t21);
    memset(t26, 0, 8);
    t21 = (t26 + 4);
    t23 = (t22 + 4);
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 2);
    *((unsigned int *)t21) = t11;
    t12 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t12 & 4095U);
    t13 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t13 & 4095U);
    xsi_vlog_generic_get_array_select_value(t19, 32, t6, t16, t20, 2, 1, t26, 12, 2);
    memset(t36, 0, 8);
    t24 = (t36 + 4);
    t25 = (t19 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (t30 >> 8);
    *((unsigned int *)t36) = t31;
    t32 = *((unsigned int *)t25);
    t33 = (t32 >> 8);
    *((unsigned int *)t24) = t33;
    t34 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t34 & 255U);
    t35 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t35 & 255U);
    t27 = (t0 + 3184);
    xsi_vlogvar_assign_value(t27, t36, 0, 0, 8);
    goto LAB15;

LAB11:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 3344);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3344);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = (t0 + 3344);
    t18 = (t17 + 64U);
    t20 = *((char **)t18);
    t21 = (t0 + 2624U);
    t22 = *((char **)t21);
    memset(t26, 0, 8);
    t21 = (t26 + 4);
    t23 = (t22 + 4);
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 2);
    *((unsigned int *)t21) = t11;
    t12 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t12 & 4095U);
    t13 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t13 & 4095U);
    xsi_vlog_generic_get_array_select_value(t19, 32, t6, t16, t20, 2, 1, t26, 12, 2);
    memset(t36, 0, 8);
    t24 = (t36 + 4);
    t25 = (t19 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (t30 >> 16);
    *((unsigned int *)t36) = t31;
    t32 = *((unsigned int *)t25);
    t33 = (t32 >> 16);
    *((unsigned int *)t24) = t33;
    t34 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t34 & 255U);
    t35 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t35 & 255U);
    t27 = (t0 + 3184);
    xsi_vlogvar_assign_value(t27, t36, 0, 0, 8);
    goto LAB15;

LAB13:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 3344);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3344);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = (t0 + 3344);
    t18 = (t17 + 64U);
    t20 = *((char **)t18);
    t21 = (t0 + 2624U);
    t22 = *((char **)t21);
    memset(t26, 0, 8);
    t21 = (t26 + 4);
    t23 = (t22 + 4);
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 2);
    *((unsigned int *)t21) = t11;
    t12 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t12 & 4095U);
    t13 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t13 & 4095U);
    xsi_vlog_generic_get_array_select_value(t19, 32, t6, t16, t20, 2, 1, t26, 12, 2);
    memset(t36, 0, 8);
    t24 = (t36 + 4);
    t25 = (t19 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (t30 >> 24);
    *((unsigned int *)t36) = t31;
    t32 = *((unsigned int *)t25);
    t33 = (t32 >> 24);
    *((unsigned int *)t24) = t33;
    t34 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t34 & 255U);
    t35 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t35 & 255U);
    t27 = (t0 + 3184);
    xsi_vlogvar_assign_value(t27, t36, 0, 0, 8);
    goto LAB15;

}


extern void work_m_00000000002368438114_0010801604_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_39_1,(void *)Always_41_2,(void *)Always_50_3,(void *)Cont_67_4,(void *)Always_68_5};
	xsi_register_didat("work_m_00000000002368438114_0010801604", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002368438114_0010801604.didat");
	xsi_register_executes(pe);
}
