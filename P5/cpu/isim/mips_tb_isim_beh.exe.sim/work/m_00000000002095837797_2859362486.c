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
static const char *ng0 = "C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P5/cpu/e_alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};



static void NetDecl_30_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 5400);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31U);
    t10 = (t0 + 5256);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_31_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_minus(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 5464);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31U);
    t10 = (t0 + 5272);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_32_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 5528);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t5, 8);
    xsi_driver_vfirst_trans(t32, 0, 31U);
    t37 = (t0 + 5288);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void Always_35_3(char *t0)
{
    char t8[8];
    char t18[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5304);
    *((int *)t2) = 1;
    t3 = (t0 + 4720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4496);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(36, ng0);
    xsi_set_current_line(36, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 2864);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB8:    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB9;

LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 4496);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(36, ng0);

LAB11:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 2864);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 1664U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t15 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB13;

LAB12:    t19 = (t17 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t15) < *((unsigned int *)t17))
        goto LAB14;

LAB15:    t21 = (t18 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t18);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1304U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2864);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t0 + 1664U);
    t16 = *((char **)t15);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t14, 32, t16, 5);
    xsi_vlog_generic_get_index_select_value(t8, 1, t3, t5, 2, t18, 32, 2);
    t15 = (t0 + 3024);
    t17 = (t0 + 3024);
    t19 = (t17 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2864);
    t27 = (t21 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_bit_index(t29, t20, 2, t28, 32, 1);
    t30 = (t29 + 4);
    t9 = *((unsigned int *)t30);
    t38 = (!(t9));
    if (t38 == 1)
        goto LAB22;

LAB23:
LAB19:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB8;

LAB13:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB15;

LAB14:    *((unsigned int *)t18) = 1;
    goto LAB15;

LAB17:    xsi_set_current_line(37, ng0);
    t27 = ((char*)((ng3)));
    t28 = (t0 + 3024);
    t30 = (t0 + 3024);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 2864);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_convert_bit_index(t29, t32, 2, t35, 32, 1);
    t36 = (t29 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB20;

LAB21:    goto LAB19;

LAB20:    xsi_vlogvar_assign_value(t28, t27, 0, *((unsigned int *)t29), 1);
    goto LAB21;

LAB22:    xsi_vlogvar_assign_value(t15, t8, 0, *((unsigned int *)t29), 1);
    goto LAB23;

}

static void Always_41_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5320);
    *((int *)t2) = 1;
    t3 = (t0 + 4968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 2704);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1984U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 2144U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 2304U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 3024);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2704);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB19;

}


extern void work_m_00000000002095837797_2859362486_init()
{
	static char *pe[] = {(void *)NetDecl_30_0,(void *)NetDecl_31_1,(void *)NetDecl_32_2,(void *)Always_35_3,(void *)Always_41_4};
	xsi_register_didat("work_m_00000000002095837797_2859362486", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002095837797_2859362486.didat");
	xsi_register_executes(pe);
}
