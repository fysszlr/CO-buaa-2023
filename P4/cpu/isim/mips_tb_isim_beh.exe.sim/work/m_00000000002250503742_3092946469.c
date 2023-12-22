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
static const char *ng0 = "C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P4/cpu/controller.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {35U, 0U};
static unsigned int ng6[] = {43U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {15U, 0U};
static unsigned int ng9[] = {32U, 0U};
static unsigned int ng10[] = {40U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {34U, 0U};
static unsigned int ng13[] = {8U, 0U};
static int ng14[] = {2, 0};



static void Always_51_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;

LAB0:    t1 = (t0 + 7096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 7912);
    *((int *)t2) = 1;
    t3 = (t0 + 7128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 6904);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(52, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 4256);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:
LAB29:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t4 = (t0 + 6904);
    xsi_vlog_dispose_process_subprogram_invocation(t4);
    goto LAB2;

LAB9:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4256);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

LAB11:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4896);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

LAB13:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 5056);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

LAB15:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 5216);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

LAB17:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 5376);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

LAB19:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

LAB21:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 5696);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

LAB23:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 5856);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

LAB25:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6016);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

}

static void Always_74_1(char *t0)
{
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
    int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 7344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 7928);
    *((int *)t2) = 1;
    t3 = (t0 + 7376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 7152);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(75, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 4416);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:
LAB10:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 7152);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(79, ng0);

LAB11:    xsi_set_current_line(80, ng0);
    t6 = (t0 + 2096U);
    t7 = *((char **)t6);

LAB12:    t6 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 6, t6, 6);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 6, t2, 6);
    if (t13 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:
LAB23:    goto LAB10;

LAB13:    xsi_set_current_line(81, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 4416);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    goto LAB23;

LAB15:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4576);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4736);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6176);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

}

static void Always_89_2(char *t0)
{
    char t10[8];
    char t38[8];
    char t70[8];
    char t99[8];
    char t132[8];
    char t163[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;

LAB0:    t1 = (t0 + 7592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 7944);
    *((int *)t2) = 1;
    t3 = (t0 + 7624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    t4 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 7400);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(90, ng0);
    t6 = (t0 + 6016);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2496);
    t11 = (t0 + 2496);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng14)));
    xsi_vlog_generic_convert_bit_index(t10, t13, 2, t14, 32, 1);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    if (t17 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5696);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t16 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t16 | t18);
    *((unsigned int *)t10) = t19;
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB10;

LAB11:
LAB12:    t14 = (t0 + 2496);
    t15 = (t0 + 2496);
    t39 = (t15 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t38, t40, 2, t41, 32, 1);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    if (t44 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5696);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t16 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t16 | t18);
    *((unsigned int *)t10) = t19;
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB15;

LAB16:
LAB17:    t14 = (t0 + 2496);
    t15 = (t0 + 2496);
    t39 = (t15 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t38, t40, 2, t41, 32, 1);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    if (t44 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t16 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t16 | t18);
    *((unsigned int *)t10) = t19;
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB20;

LAB21:
LAB22:    t14 = (t0 + 2656);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4096);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3936);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2816);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2976);
    t6 = (t0 + 2976);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t9, 32, 1);
    t11 = (t10 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (!(t16));
    if (t17 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t16 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t16 | t18);
    *((unsigned int *)t10) = t19;
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB25;

LAB26:
LAB27:    t14 = (t0 + 2976);
    t15 = (t0 + 2976);
    t39 = (t15 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t38, t40, 2, t41, 32, 1);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    if (t44 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t6 = (t0 + 3136);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t9, 32, 1);
    t11 = (t10 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (!(t16));
    if (t17 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5696);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t16 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t16 | t18);
    *((unsigned int *)t10) = t19;
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB32;

LAB33:
LAB34:    t14 = (t0 + 5216);
    t15 = (t14 + 56U);
    t39 = *((char **)t15);
    t43 = *((unsigned int *)t10);
    t45 = *((unsigned int *)t39);
    t46 = (t43 | t45);
    *((unsigned int *)t38) = t46;
    t40 = (t10 + 4);
    t41 = (t39 + 4);
    t42 = (t38 + 4);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t41);
    t49 = (t47 | t48);
    *((unsigned int *)t42) = t49;
    t50 = *((unsigned int *)t42);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB35;

LAB36:
LAB37:    t67 = (t0 + 5856);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t71 = *((unsigned int *)t38);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = (t38 + 4);
    t75 = (t69 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB38;

LAB39:
LAB40:    t98 = (t0 + 3136);
    t100 = (t0 + 3136);
    t101 = (t100 + 72U);
    t102 = *((char **)t101);
    t103 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t99, t102, 2, t103, 32, 1);
    t104 = (t99 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (!(t105));
    if (t106 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3296);
    t6 = (t0 + 3296);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t9, 32, 1);
    t11 = (t10 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (!(t16));
    if (t17 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t16 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t16 | t18);
    *((unsigned int *)t10) = t19;
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB45;

LAB46:
LAB47:    t14 = (t0 + 3296);
    t15 = (t0 + 3296);
    t39 = (t15 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t38, t40, 2, t41, 32, 1);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    if (t44 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t16 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t16 | t18);
    *((unsigned int *)t10) = t19;
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB50;

LAB51:
LAB52:    t14 = (t0 + 4576);
    t15 = (t14 + 56U);
    t39 = *((char **)t15);
    t43 = *((unsigned int *)t10);
    t45 = *((unsigned int *)t39);
    t46 = (t43 | t45);
    *((unsigned int *)t38) = t46;
    t40 = (t10 + 4);
    t41 = (t39 + 4);
    t42 = (t38 + 4);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t41);
    t49 = (t47 | t48);
    *((unsigned int *)t42) = t49;
    t50 = *((unsigned int *)t42);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB53;

LAB54:
LAB55:    t67 = (t0 + 4896);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t71 = *((unsigned int *)t38);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = (t38 + 4);
    t75 = (t69 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB56;

LAB57:
LAB58:    t98 = (t0 + 5056);
    t100 = (t98 + 56U);
    t101 = *((char **)t100);
    t105 = *((unsigned int *)t70);
    t107 = *((unsigned int *)t101);
    t108 = (t105 | t107);
    *((unsigned int *)t99) = t108;
    t102 = (t70 + 4);
    t103 = (t101 + 4);
    t104 = (t99 + 4);
    t109 = *((unsigned int *)t102);
    t110 = *((unsigned int *)t103);
    t111 = (t109 | t110);
    *((unsigned int *)t104) = t111;
    t112 = *((unsigned int *)t104);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB59;

LAB60:
LAB61:    t129 = (t0 + 5536);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    t133 = *((unsigned int *)t99);
    t134 = *((unsigned int *)t131);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = (t99 + 4);
    t137 = (t131 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB62;

LAB63:
LAB64:    t160 = (t0 + 5696);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    t164 = *((unsigned int *)t132);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t167 = (t132 + 4);
    t168 = (t162 + 4);
    t169 = (t163 + 4);
    t170 = *((unsigned int *)t167);
    t171 = *((unsigned int *)t168);
    t172 = (t170 | t171);
    *((unsigned int *)t169) = t172;
    t173 = *((unsigned int *)t169);
    t174 = (t173 != 0);
    if (t174 == 1)
        goto LAB65;

LAB66:
LAB67:    t191 = (t0 + 3456);
    xsi_vlogvar_assign_value(t191, t163, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3776);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 7400);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_vlogvar_assign_value(t9, t8, 0, *((unsigned int *)t10), 1);
    goto LAB9;

LAB10:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t25 | t26);
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t17 = (t29 & t28);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t7);
    t33 = (t32 & t31);
    t34 = (~(t17));
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & t34);
    t37 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t37 & t35);
    goto LAB12;

LAB13:    xsi_vlogvar_assign_value(t14, t10, 0, *((unsigned int *)t38), 1);
    goto LAB14;

LAB15:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t25 | t26);
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t17 = (t29 & t28);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t7);
    t33 = (t32 & t31);
    t34 = (~(t17));
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & t34);
    t37 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t37 & t35);
    goto LAB17;

LAB18:    xsi_vlogvar_assign_value(t14, t10, 0, *((unsigned int *)t38), 1);
    goto LAB19;

LAB20:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t25 | t26);
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t17 = (t29 & t28);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t7);
    t33 = (t32 & t31);
    t34 = (~(t17));
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & t34);
    t37 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t37 & t35);
    goto LAB22;

LAB23:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t10), 1);
    goto LAB24;

LAB25:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t25 | t26);
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t17 = (t29 & t28);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t7);
    t33 = (t32 & t31);
    t34 = (~(t17));
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & t34);
    t37 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t37 & t35);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t14, t10, 0, *((unsigned int *)t38), 1);
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t10), 1);
    goto LAB31;

LAB32:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t25 | t26);
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t17 = (t29 & t28);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t7);
    t33 = (t32 & t31);
    t34 = (~(t17));
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & t34);
    t37 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t37 & t35);
    goto LAB34;

LAB35:    t52 = *((unsigned int *)t38);
    t53 = *((unsigned int *)t42);
    *((unsigned int *)t38) = (t52 | t53);
    t54 = (t10 + 4);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t10);
    t44 = (t58 & t57);
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t39);
    t62 = (t61 & t60);
    t63 = (~(t44));
    t64 = (~(t62));
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t66 & t64);
    goto LAB37;

LAB38:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t38 + 4);
    t85 = (t69 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (~(t86));
    t88 = *((unsigned int *)t38);
    t89 = (t88 & t87);
    t90 = *((unsigned int *)t85);
    t91 = (~(t90));
    t92 = *((unsigned int *)t69);
    t93 = (t92 & t91);
    t94 = (~(t89));
    t95 = (~(t93));
    t96 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t96 & t94);
    t97 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t97 & t95);
    goto LAB40;

LAB41:    xsi_vlogvar_assign_value(t98, t70, 0, *((unsigned int *)t99), 1);
    goto LAB42;

LAB43:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t10), 1);
    goto LAB44;

LAB45:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t25 | t26);
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t17 = (t29 & t28);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t7);
    t33 = (t32 & t31);
    t34 = (~(t17));
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & t34);
    t37 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t37 & t35);
    goto LAB47;

LAB48:    xsi_vlogvar_assign_value(t14, t10, 0, *((unsigned int *)t38), 1);
    goto LAB49;

LAB50:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t25 | t26);
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t17 = (t29 & t28);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t7);
    t33 = (t32 & t31);
    t34 = (~(t17));
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & t34);
    t37 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t37 & t35);
    goto LAB52;

LAB53:    t52 = *((unsigned int *)t38);
    t53 = *((unsigned int *)t42);
    *((unsigned int *)t38) = (t52 | t53);
    t54 = (t10 + 4);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t10);
    t44 = (t58 & t57);
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t39);
    t62 = (t61 & t60);
    t63 = (~(t44));
    t64 = (~(t62));
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t66 & t64);
    goto LAB55;

LAB56:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t38 + 4);
    t85 = (t69 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (~(t86));
    t88 = *((unsigned int *)t38);
    t89 = (t88 & t87);
    t90 = *((unsigned int *)t85);
    t91 = (~(t90));
    t92 = *((unsigned int *)t69);
    t93 = (t92 & t91);
    t94 = (~(t89));
    t95 = (~(t93));
    t96 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t96 & t94);
    t97 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t97 & t95);
    goto LAB58;

LAB59:    t114 = *((unsigned int *)t99);
    t115 = *((unsigned int *)t104);
    *((unsigned int *)t99) = (t114 | t115);
    t116 = (t70 + 4);
    t117 = (t101 + 4);
    t118 = *((unsigned int *)t116);
    t119 = (~(t118));
    t120 = *((unsigned int *)t70);
    t106 = (t120 & t119);
    t121 = *((unsigned int *)t117);
    t122 = (~(t121));
    t123 = *((unsigned int *)t101);
    t124 = (t123 & t122);
    t125 = (~(t106));
    t126 = (~(t124));
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t125);
    t128 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t128 & t126);
    goto LAB61;

LAB62:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t99 + 4);
    t147 = (t131 + 4);
    t148 = *((unsigned int *)t146);
    t149 = (~(t148));
    t150 = *((unsigned int *)t99);
    t151 = (t150 & t149);
    t152 = *((unsigned int *)t147);
    t153 = (~(t152));
    t154 = *((unsigned int *)t131);
    t155 = (t154 & t153);
    t156 = (~(t151));
    t157 = (~(t155));
    t158 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t158 & t156);
    t159 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t159 & t157);
    goto LAB64;

LAB65:    t175 = *((unsigned int *)t163);
    t176 = *((unsigned int *)t169);
    *((unsigned int *)t163) = (t175 | t176);
    t177 = (t132 + 4);
    t178 = (t162 + 4);
    t179 = *((unsigned int *)t177);
    t180 = (~(t179));
    t181 = *((unsigned int *)t132);
    t182 = (t181 & t180);
    t183 = *((unsigned int *)t178);
    t184 = (~(t183));
    t185 = *((unsigned int *)t162);
    t186 = (t185 & t184);
    t187 = (~(t182));
    t188 = (~(t186));
    t189 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t189 & t187);
    t190 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t190 & t188);
    goto LAB67;

}


extern void work_m_00000000002250503742_3092946469_init()
{
	static char *pe[] = {(void *)Always_51_0,(void *)Always_74_1,(void *)Always_89_2};
	xsi_register_didat("work_m_00000000002250503742_3092946469", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002250503742_3092946469.didat");
	xsi_register_executes(pe);
}
