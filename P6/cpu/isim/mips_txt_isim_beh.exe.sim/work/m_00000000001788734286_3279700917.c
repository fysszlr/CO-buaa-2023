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
static const char *ng0 = "C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P6/cpu/d_grf.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};



static void Always_36_0(char *t0)
{
    char t15[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
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
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 4560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 5128);
    *((int *)t2) = 1;
    t3 = (t0 + 4592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4368);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(37, ng0);
    t6 = (t0 + 1800U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(40, ng0);

LAB17:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t27 = (t11 ^ t12);
    t30 = (t10 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB19;

LAB18:    if (t37 != 0)
        goto LAB20;

LAB21:    t7 = (t15 + 4);
    t40 = *((unsigned int *)t7);
    t41 = (~(t40));
    t42 = *((unsigned int *)t15);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB22;

LAB23:
LAB24:
LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 4368);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(37, ng0);

LAB11:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB12:    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t4, 32, t5, 32);
    t6 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    goto LAB10;

LAB13:    xsi_set_current_line(38, ng0);
    t7 = ((char*)((ng1)));
    t13 = (t0 + 3480);
    t14 = (t0 + 3480);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3480);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3640);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t16, t17, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t17 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t6 = (t0 + 3640);
    xsi_vlogvar_assign_value(t6, t15, 0, 0, 32);
    goto LAB12;

LAB15:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t17);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t13, t7, 0, *((unsigned int *)t17), t36, 0LL);
    goto LAB16;

LAB19:    *((unsigned int *)t15) = 1;
    goto LAB21;

LAB20:    t6 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(41, ng0);

LAB25:    xsi_set_current_line(42, ng0);
    t13 = (t0 + 2760U);
    t14 = *((char **)t13);
    t13 = (t0 + 3480);
    t18 = (t0 + 3480);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3480);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2600U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t25, 5, 2);
    t24 = (t16 + 4);
    t45 = *((unsigned int *)t24);
    t28 = (!(t45));
    t26 = (t17 + 4);
    t46 = *((unsigned int *)t26);
    t31 = (!(t46));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB26;

LAB27:    goto LAB24;

LAB26:    t47 = *((unsigned int *)t16);
    t48 = *((unsigned int *)t17);
    t35 = (t47 - t48);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t13, t14, 0, *((unsigned int *)t17), t36, 0LL);
    goto LAB27;

}

static void Always_46_1(char *t0)
{
    char t9[8];
    char t30[8];
    char t39[8];
    char t52[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5144);
    *((int *)t2) = 1;
    t3 = (t0 + 4840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4616);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(47, ng0);
    t6 = (t0 + 3480);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t0 + 3480);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 3480);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 2280U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t9, 32, t8, t12, t15, 2, 1, t17, 5, 2);
    t16 = (t0 + 3160);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3480);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3480);
    t10 = (t8 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2440U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t9, 32, t4, t7, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t9, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 2600U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t4);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t2);
    t22 = *((unsigned int *)t5);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t2);
    t26 = *((unsigned int *)t5);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB11;

LAB8:    if (t27 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t9) = 1;

LAB11:    memset(t30, 0, 8);
    t7 = (t9 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t9);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t7) != 0)
        goto LAB14;

LAB15:    t10 = (t30 + 4);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB16;

LAB17:    memcpy(t58, t30, 8);

LAB18:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2440U);
    t3 = *((char **)t2);
    t2 = (t0 + 2600U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t4);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t2);
    t22 = *((unsigned int *)t5);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t2);
    t26 = *((unsigned int *)t5);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB36;

LAB33:    if (t27 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t9) = 1;

LAB36:    memset(t30, 0, 8);
    t7 = (t9 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t9);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t7) != 0)
        goto LAB39;

LAB40:    t10 = (t30 + 4);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB41;

LAB42:    memcpy(t58, t30, 8);

LAB43:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB55;

LAB56:
LAB57:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 4616);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB10:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB12:    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB14:    t8 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB15;

LAB16:    t11 = (t0 + 2280U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    memset(t39, 0, 8);
    t13 = (t12 + 4);
    t14 = (t11 + 4);
    t40 = *((unsigned int *)t12);
    t41 = *((unsigned int *)t11);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t14);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t13);
    t48 = *((unsigned int *)t14);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB20;

LAB19:    if (t49 != 0)
        goto LAB21;

LAB22:    memset(t52, 0, 8);
    t16 = (t39 + 4);
    t53 = *((unsigned int *)t16);
    t54 = (~(t53));
    t55 = *((unsigned int *)t39);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t16) != 0)
        goto LAB25;

LAB26:    t59 = *((unsigned int *)t30);
    t60 = *((unsigned int *)t52);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t30 + 4);
    t63 = (t52 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB18;

LAB20:    *((unsigned int *)t39) = 1;
    goto LAB22;

LAB21:    t15 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t52) = 1;
    goto LAB26;

LAB25:    t17 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB26;

LAB27:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t30 + 4);
    t73 = (t52 + 4);
    t74 = *((unsigned int *)t30);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t52);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB29;

LAB30:    xsi_set_current_line(49, ng0);
    t96 = (t0 + 2760U);
    t97 = *((char **)t96);
    t96 = (t0 + 3160);
    xsi_vlogvar_assign_value(t96, t97, 0, 0, 32);
    goto LAB32;

LAB35:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t30) = 1;
    goto LAB40;

LAB39:    t8 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB40;

LAB41:    t11 = (t0 + 2440U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    memset(t39, 0, 8);
    t13 = (t12 + 4);
    t14 = (t11 + 4);
    t40 = *((unsigned int *)t12);
    t41 = *((unsigned int *)t11);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t14);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t13);
    t48 = *((unsigned int *)t14);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB45;

LAB44:    if (t49 != 0)
        goto LAB46;

LAB47:    memset(t52, 0, 8);
    t16 = (t39 + 4);
    t53 = *((unsigned int *)t16);
    t54 = (~(t53));
    t55 = *((unsigned int *)t39);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t16) != 0)
        goto LAB50;

LAB51:    t59 = *((unsigned int *)t30);
    t60 = *((unsigned int *)t52);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t30 + 4);
    t63 = (t52 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB45:    *((unsigned int *)t39) = 1;
    goto LAB47;

LAB46:    t15 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t52) = 1;
    goto LAB51;

LAB50:    t17 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB51;

LAB52:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t30 + 4);
    t73 = (t52 + 4);
    t74 = *((unsigned int *)t30);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t52);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB54;

LAB55:    xsi_set_current_line(50, ng0);
    t96 = (t0 + 2760U);
    t97 = *((char **)t96);
    t96 = (t0 + 3320);
    xsi_vlogvar_assign_value(t96, t97, 0, 0, 32);
    goto LAB57;

}


extern void work_m_00000000001788734286_3279700917_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Always_46_1};
	xsi_register_didat("work_m_00000000001788734286_3279700917", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001788734286_3279700917.didat");
	xsi_register_executes(pe);
}
