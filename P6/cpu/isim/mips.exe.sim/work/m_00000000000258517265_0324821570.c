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
static int ng0[] = {0, 0};
static int ng1[] = {1, 0};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {16, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {3, 0};
static int ng7[] = {24, 0};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {15U, 0U};
static int ng11[] = {15, 0};
static unsigned int ng12[] = {12U, 0U};
static int ng13[] = {31, 0};
static int ng14[] = {7, 0};
static int ng15[] = {8, 0};
static unsigned int ng16[] = {4U, 0U};
static int ng17[] = {23, 0};
static unsigned int ng18[] = {8U, 0U};



static void Always_33_0(char *t0)
{
    char t11[8];
    char t19[8];
    char t20[8];
    char t28[8];
    char t32[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4488);
    *((int *)t2) = 1;
    t3 = (t0 + 3952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 3728);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    t6 = (t0 + 1640U);
    t7 = *((char **)t6);

LAB8:    t6 = ((char*)((ng0)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t6, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    t2 = ((char*)((ng0)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 3728);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    t9 = ((char*)((ng0)));
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB19;

LAB11:    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB13:
LAB20:    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;

LAB21:    t6 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t11, 1, t6, 1);
    if (t18 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 1, t2, 1);
    if (t8 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB19;

LAB15:
LAB27:    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t19) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t16 & 3U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 3U);

LAB28:    t6 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t19, 2, t6, 2);
    if (t18 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t8 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB19;

LAB22:    t9 = (t0 + 2120U);
    t10 = *((char **)t9);
    memset(t20, 0, 8);
    t9 = (t20 + 4);
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (t22 >> 0);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t9) = t25;
    t26 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t26 & 65535U);
    t27 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t27 & 65535U);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 2120U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t30 = (t32 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 15);
    t36 = (t35 & 1);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 15);
    t39 = (t38 & 1);
    *((unsigned int *)t30) = t39;
    xsi_vlog_mul_concat(t28, 16, 1, t29, 1U, t32, 1);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t28, 16, t20, 16);
    t40 = (t0 + 3000);
    xsi_vlogvar_assign_value(t40, t19, 0, 0, 32);
    goto LAB26;

LAB24:    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    memset(t20, 0, 8);
    t3 = (t20 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t20) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 16);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t6 = ((char*)((ng4)));
    t9 = (t0 + 2120U);
    t10 = *((char **)t9);
    memset(t32, 0, 8);
    t9 = (t32 + 4);
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t32) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t9) = t27;
    xsi_vlog_mul_concat(t28, 16, 1, t6, 1U, t32, 1);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t28, 16, t20, 16);
    t29 = (t0 + 3000);
    xsi_vlogvar_assign_value(t29, t19, 0, 0, 32);
    goto LAB26;

LAB29:    t9 = (t0 + 2120U);
    t10 = *((char **)t9);
    memset(t28, 0, 8);
    t9 = (t28 + 4);
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (t22 >> 0);
    *((unsigned int *)t28) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t9) = t25;
    t26 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t26 & 255U);
    t27 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t27 & 255U);
    t29 = ((char*)((ng7)));
    t30 = (t0 + 2120U);
    t31 = *((char **)t30);
    memset(t41, 0, 8);
    t30 = (t41 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 7);
    t36 = (t35 & 1);
    *((unsigned int *)t41) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 7);
    t39 = (t38 & 1);
    *((unsigned int *)t30) = t39;
    xsi_vlog_mul_concat(t32, 24, 1, t29, 1U, t41, 1);
    xsi_vlogtype_concat(t20, 32, 32, 2U, t32, 24, t28, 8);
    t40 = (t0 + 3000);
    xsi_vlogvar_assign_value(t40, t20, 0, 0, 32);
    goto LAB37;

LAB31:    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 8);
    *((unsigned int *)t28) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 8);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t16 & 255U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 255U);
    t6 = ((char*)((ng7)));
    t9 = (t0 + 2120U);
    t10 = *((char **)t9);
    memset(t41, 0, 8);
    t9 = (t41 + 4);
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (t22 >> 15);
    t24 = (t23 & 1);
    *((unsigned int *)t41) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 15);
    t27 = (t26 & 1);
    *((unsigned int *)t9) = t27;
    xsi_vlog_mul_concat(t32, 24, 1, t6, 1U, t41, 1);
    xsi_vlogtype_concat(t20, 32, 32, 2U, t32, 24, t28, 8);
    t29 = (t0 + 3000);
    xsi_vlogvar_assign_value(t29, t20, 0, 0, 32);
    goto LAB37;

LAB33:    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t28) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 16);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t16 & 255U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 255U);
    t6 = ((char*)((ng7)));
    t9 = (t0 + 2120U);
    t10 = *((char **)t9);
    memset(t41, 0, 8);
    t9 = (t41 + 4);
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (t22 >> 23);
    t24 = (t23 & 1);
    *((unsigned int *)t41) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 23);
    t27 = (t26 & 1);
    *((unsigned int *)t9) = t27;
    xsi_vlog_mul_concat(t32, 24, 1, t6, 1U, t41, 1);
    xsi_vlogtype_concat(t20, 32, 32, 2U, t32, 24, t28, 8);
    t29 = (t0 + 3000);
    xsi_vlogvar_assign_value(t29, t20, 0, 0, 32);
    goto LAB37;

LAB35:    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 24);
    *((unsigned int *)t28) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 24);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t16 & 255U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 255U);
    t6 = ((char*)((ng7)));
    t9 = (t0 + 2120U);
    t10 = *((char **)t9);
    memset(t41, 0, 8);
    t9 = (t41 + 4);
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t41) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t9) = t27;
    xsi_vlog_mul_concat(t32, 24, 1, t6, 1U, t41, 1);
    xsi_vlogtype_concat(t20, 32, 32, 2U, t32, 24, t28, 8);
    t29 = (t0 + 3000);
    xsi_vlogvar_assign_value(t29, t20, 0, 0, 32);
    goto LAB37;

}

static void Always_54_1(char *t0)
{
    char t8[8];
    char t34[8];
    char t35[8];
    char t36[8];
    char t37[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    int t38;
    char *t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;

LAB0:    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4504);
    *((int *)t2) = 1;
    t3 = (t0 + 4200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 3976);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    t6 = (t0 + 1800U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng0)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:
LAB16:    t2 = (t0 + 1640U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng0)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t32 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t32 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t32 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t32 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:
LAB67:    t2 = ((char*)((ng3)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB28:
LAB14:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t4 = (t0 + 3976);
    xsi_vlog_dispose_process_subprogram_invocation(t4);
    goto LAB2;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:
LAB15:    t30 = ((char*)((ng3)));
    t31 = (t0 + 2680);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 4);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB14;

LAB18:
LAB29:    t4 = ((char*)((ng3)));
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB28;

LAB20:
LAB30:    t4 = ((char*)((ng10)));
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    t2 = (t0 + 2280U);
    t4 = *((char **)t2);
    t2 = (t0 + 2840);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    goto LAB28;

LAB22:
LAB31:    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t6 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;

LAB32:    t7 = ((char*)((ng3)));
    t33 = xsi_vlog_unsigned_case_compare(t8, 1, t7, 1);
    if (t33 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t8, 1, t2, 1);
    if (t32 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB28;

LAB24:
LAB44:    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    memset(t34, 0, 8);
    t4 = (t34 + 4);
    t6 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t34) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t15 & 3U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 3U);

LAB45:    t7 = ((char*)((ng3)));
    t33 = xsi_vlog_unsigned_case_compare(t34, 2, t7, 2);
    if (t33 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t34, 2, t2, 2);
    if (t32 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t34, 2, t2, 2);
    if (t32 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng9)));
    t32 = xsi_vlog_unsigned_case_compare(t34, 2, t2, 2);
    if (t32 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB28;

LAB33:
LAB38:    t9 = ((char*)((ng9)));
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    t2 = (t0 + 2280U);
    t4 = *((char **)t2);
    memset(t34, 0, 8);
    t2 = (t34 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t34) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t15 & 65535U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 65535U);
    t6 = (t0 + 2840);
    t7 = (t0 + 2840);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t23 = ((char*)((ng11)));
    t24 = ((char*)((ng0)));
    xsi_vlog_convert_partindices(t35, t36, t37, ((int*)(t10)), 2, t23, 32, 1, t24, 32, 1);
    t30 = (t35 + 4);
    t17 = *((unsigned int *)t30);
    t32 = (!(t17));
    t31 = (t36 + 4);
    t18 = *((unsigned int *)t31);
    t33 = (!(t18));
    t38 = (t32 && t33);
    t39 = (t37 + 4);
    t19 = *((unsigned int *)t39);
    t40 = (!(t19));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB39;

LAB40:    goto LAB37;

LAB35:
LAB41:    t4 = ((char*)((ng12)));
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    t2 = (t0 + 2280U);
    t4 = *((char **)t2);
    memset(t34, 0, 8);
    t2 = (t34 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t34) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t15 & 65535U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 65535U);
    t6 = (t0 + 2840);
    t7 = (t0 + 2840);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t23 = ((char*)((ng13)));
    t24 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t35, t36, t37, ((int*)(t10)), 2, t23, 32, 1, t24, 32, 1);
    t30 = (t35 + 4);
    t17 = *((unsigned int *)t30);
    t32 = (!(t17));
    t31 = (t36 + 4);
    t18 = *((unsigned int *)t31);
    t33 = (!(t18));
    t38 = (t32 && t33);
    t39 = (t37 + 4);
    t19 = *((unsigned int *)t39);
    t40 = (!(t19));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB42;

LAB43:    goto LAB37;

LAB39:    t20 = *((unsigned int *)t37);
    t42 = (t20 + 0);
    t21 = *((unsigned int *)t35);
    t22 = *((unsigned int *)t36);
    t43 = (t21 - t22);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t6, t34, t42, *((unsigned int *)t36), t44);
    goto LAB40;

LAB42:    t20 = *((unsigned int *)t37);
    t42 = (t20 + 0);
    t21 = *((unsigned int *)t35);
    t22 = *((unsigned int *)t36);
    t43 = (t21 - t22);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t6, t34, t42, *((unsigned int *)t36), t44);
    goto LAB43;

LAB46:
LAB55:    t9 = ((char*)((ng5)));
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    t2 = (t0 + 2280U);
    t4 = *((char **)t2);
    memset(t35, 0, 8);
    t2 = (t35 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t35) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t15 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t6 = (t0 + 2840);
    t7 = (t0 + 2840);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t23 = ((char*)((ng14)));
    t24 = ((char*)((ng0)));
    xsi_vlog_convert_partindices(t36, t37, t45, ((int*)(t10)), 2, t23, 32, 1, t24, 32, 1);
    t30 = (t36 + 4);
    t17 = *((unsigned int *)t30);
    t32 = (!(t17));
    t31 = (t37 + 4);
    t18 = *((unsigned int *)t31);
    t33 = (!(t18));
    t38 = (t32 && t33);
    t39 = (t45 + 4);
    t19 = *((unsigned int *)t39);
    t40 = (!(t19));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB56;

LAB57:    goto LAB54;

LAB48:
LAB58:    t4 = ((char*)((ng8)));
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    t2 = (t0 + 2280U);
    t4 = *((char **)t2);
    memset(t35, 0, 8);
    t2 = (t35 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t35) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t15 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t6 = (t0 + 2840);
    t7 = (t0 + 2840);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t23 = ((char*)((ng11)));
    t24 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t36, t37, t45, ((int*)(t10)), 2, t23, 32, 1, t24, 32, 1);
    t30 = (t36 + 4);
    t17 = *((unsigned int *)t30);
    t32 = (!(t17));
    t31 = (t37 + 4);
    t18 = *((unsigned int *)t31);
    t33 = (!(t18));
    t38 = (t32 && t33);
    t39 = (t45 + 4);
    t19 = *((unsigned int *)t39);
    t40 = (!(t19));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB59;

LAB60:    goto LAB54;

LAB50:
LAB61:    t4 = ((char*)((ng16)));
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    t2 = (t0 + 2280U);
    t4 = *((char **)t2);
    memset(t35, 0, 8);
    t2 = (t35 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t35) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t15 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t6 = (t0 + 2840);
    t7 = (t0 + 2840);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t23 = ((char*)((ng17)));
    t24 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t36, t37, t45, ((int*)(t10)), 2, t23, 32, 1, t24, 32, 1);
    t30 = (t36 + 4);
    t17 = *((unsigned int *)t30);
    t32 = (!(t17));
    t31 = (t37 + 4);
    t18 = *((unsigned int *)t31);
    t33 = (!(t18));
    t38 = (t32 && t33);
    t39 = (t45 + 4);
    t19 = *((unsigned int *)t39);
    t40 = (!(t19));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB62;

LAB63:    goto LAB54;

LAB52:
LAB64:    t4 = ((char*)((ng18)));
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    t2 = (t0 + 2280U);
    t4 = *((char **)t2);
    memset(t35, 0, 8);
    t2 = (t35 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t35) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t15 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t6 = (t0 + 2840);
    t7 = (t0 + 2840);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t23 = ((char*)((ng13)));
    t24 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t36, t37, t45, ((int*)(t10)), 2, t23, 32, 1, t24, 32, 1);
    t30 = (t36 + 4);
    t17 = *((unsigned int *)t30);
    t32 = (!(t17));
    t31 = (t37 + 4);
    t18 = *((unsigned int *)t31);
    t33 = (!(t18));
    t38 = (t32 && t33);
    t39 = (t45 + 4);
    t19 = *((unsigned int *)t39);
    t40 = (!(t19));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB65;

LAB66:    goto LAB54;

LAB56:    t20 = *((unsigned int *)t45);
    t42 = (t20 + 0);
    t21 = *((unsigned int *)t36);
    t22 = *((unsigned int *)t37);
    t43 = (t21 - t22);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t6, t35, t42, *((unsigned int *)t37), t44);
    goto LAB57;

LAB59:    t20 = *((unsigned int *)t45);
    t42 = (t20 + 0);
    t21 = *((unsigned int *)t36);
    t22 = *((unsigned int *)t37);
    t43 = (t21 - t22);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t6, t35, t42, *((unsigned int *)t37), t44);
    goto LAB60;

LAB62:    t20 = *((unsigned int *)t45);
    t42 = (t20 + 0);
    t21 = *((unsigned int *)t36);
    t22 = *((unsigned int *)t37);
    t43 = (t21 - t22);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t6, t35, t42, *((unsigned int *)t37), t44);
    goto LAB63;

LAB65:    t20 = *((unsigned int *)t45);
    t42 = (t20 + 0);
    t21 = *((unsigned int *)t36);
    t22 = *((unsigned int *)t37);
    t43 = (t21 - t22);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t6, t35, t42, *((unsigned int *)t37), t44);
    goto LAB66;

}


extern void work_m_00000000000258517265_0324821570_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Always_54_1};
	xsi_register_didat("work_m_00000000000258517265_0324821570", "isim/mips.exe.sim/work/m_00000000000258517265_0324821570.didat");
	xsi_register_executes(pe);
}
