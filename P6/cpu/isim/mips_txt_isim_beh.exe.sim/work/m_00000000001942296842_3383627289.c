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
static const char *ng0 = "C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P6/cpu/d_ext.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {16, 0};
static int ng4[] = {2, 0};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {14, 0};
static int ng8[] = {3, 0};
static int ng9[] = {5, 0};



static void Always_30_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char t21[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t24;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB21;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    xsi_vlog_mul_concat(t10, 16, 1, t3, 1U, t11, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t10, 16, t4, 16);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 32);
    goto LAB21;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t3, 32);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 1048U);
    t12 = *((char **)t8);
    t8 = ((char*)((ng7)));
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t21 + 4);
    t22 = (t20 + 4);
    t13 = *((unsigned int *)t20);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t21) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t19) = t18;
    xsi_vlog_mul_concat(t11, 14, 1, t8, 1U, t21, 1);
    xsi_vlogtype_concat(t10, 32, 32, 3U, t11, 14, t12, 16, t7, 2);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t9, 32, t10, 32);
    t24 = (t0 + 1928);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 32);
    goto LAB21;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1048U);
    t7 = *((char **)t4);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 16, t3, 16);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t4 = (t0 + 1528U);
    t8 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 28);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 28);
    *((unsigned int *)t4) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 15U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 15U);
    xsi_vlogtype_concat(t9, 32, 32, 3U, t10, 4, t7, 26, t3, 2);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t3, 16, t4, 16);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB21;

}


extern void work_m_00000000001942296842_3383627289_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000001942296842_3383627289", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001942296842_3383627289.didat");
	xsi_register_executes(pe);
}
