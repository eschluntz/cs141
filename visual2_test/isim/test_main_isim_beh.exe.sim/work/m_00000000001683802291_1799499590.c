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

/* This file is designed for use with ISim build 0x6dd86d03 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//vboxsrv/CS141Shared/visual2_test/touchpad_controller.v";
static unsigned int ng1[] = {864256U, 0U};
static unsigned int ng2[] = {602112U, 0U};
static unsigned int ng3[] = {733184U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {25, 0};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static int ng11[] = {2, 0};
static unsigned int ng12[] = {19U, 0U};
static int ng13[] = {4, 0};



static void Cont_36_0(char *t0)
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
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3404);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1048575U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 19);

LAB1:    return;
}

static void Cont_37_1(char *t0)
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
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 2876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3440);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1048575U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 19);

LAB1:    return;
}

static void Cont_38_2(char *t0)
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
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 3020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3476);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1048575U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 19);

LAB1:    return;
}

static void Always_40_3(char *t0)
{
    char t4[8];
    char t31[8];
    char t35[8];
    char t51[8];
    char t59[8];
    char t101[8];
    char t125[8];
    char t133[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
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
    char *t123;
    char *t124;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t134;
    unsigned int t135;
    int t136;

LAB0:    t1 = (t0 + 3164U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3360);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(51, ng0);

LAB16:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t6, 32, t12, 32);
    memset(t31, 0, 8);
    t13 = (t5 + 4);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB18;

LAB17:    if (t19 != 0)
        goto LAB19;

LAB20:    t29 = (t31 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(56, ng0);

LAB25:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t6) == 0)
        goto LAB26;

LAB28:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB29:    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB31;

LAB30:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t23, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB23:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(41, ng0);

LAB15:    xsi_set_current_line(42, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 12, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB14;

LAB18:    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB19:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(53, ng0);

LAB24:    xsi_set_current_line(54, ng0);
    t30 = (t0 + 2208);
    t32 = (t30 + 36U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng8)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 6, t33, 5, t34, 6);
    t36 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 5, 0LL);
    goto LAB23;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB31:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB30;

LAB32:    xsi_set_current_line(59, ng0);

LAB35:    xsi_set_current_line(60, ng0);
    t12 = (t0 + 1932);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t23 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t29 = (t14 + 4);
    t30 = (t23 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t23);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t30);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t29);
    t24 = *((unsigned int *)t30);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB39;

LAB36:    if (t25 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t4) = 1;

LAB39:    memset(t31, 0, 8);
    t33 = (t4 + 4);
    t28 = *((unsigned int *)t33);
    t37 = (~(t28));
    t38 = *((unsigned int *)t4);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t33) != 0)
        goto LAB42;

LAB43:    t36 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = *((unsigned int *)t36);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB44;

LAB45:    memcpy(t59, t31, 8);

LAB46:    t91 = (t59 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t59);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB96;

LAB93:    if (t19 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t4) = 1;

LAB96:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB104;

LAB101:    if (t19 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t4) = 1;

LAB104:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng11)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB112;

LAB109:    if (t19 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t4) = 1;

LAB112:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB113;

LAB114:
LAB115:
LAB107:
LAB99:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng12)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB120;

LAB117:    if (t19 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t4) = 1;

LAB120:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(90, ng0);

LAB142:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);

LAB123:    goto LAB34;

LAB38:    t32 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t31) = 1;
    goto LAB43;

LAB42:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB43;

LAB44:    t44 = (t0 + 2024);
    t45 = (t44 + 36U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng9)));
    memset(t35, 0, 8);
    t48 = (t46 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB48;

LAB47:    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t46) > *((unsigned int *)t47))
        goto LAB49;

LAB50:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t52) != 0)
        goto LAB54;

LAB55:    t60 = *((unsigned int *)t31);
    t61 = *((unsigned int *)t51);
    t62 = (t60 & t61);
    *((unsigned int *)t59) = t62;
    t63 = (t31 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t35) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t51) = 1;
    goto LAB55;

LAB54:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB55;

LAB56:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t31 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t31);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t83 = (t76 & t78);
    t84 = (t80 & t82);
    t85 = (~(t83));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t85);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t86);
    goto LAB58;

LAB59:    xsi_set_current_line(60, ng0);

LAB62:    xsi_set_current_line(61, ng0);
    t97 = (t0 + 2116);
    t98 = (t97 + 36U);
    t99 = *((char **)t98);
    t100 = ((char*)((ng5)));
    memset(t101, 0, 8);
    t102 = (t99 + 4);
    t103 = (t100 + 4);
    t104 = *((unsigned int *)t99);
    t105 = *((unsigned int *)t100);
    t106 = (t104 ^ t105);
    t107 = *((unsigned int *)t102);
    t108 = *((unsigned int *)t103);
    t109 = (t107 ^ t108);
    t110 = (t106 | t109);
    t111 = *((unsigned int *)t102);
    t112 = *((unsigned int *)t103);
    t113 = (t111 | t112);
    t114 = (~(t113));
    t115 = (t110 & t114);
    if (t115 != 0)
        goto LAB66;

LAB63:    if (t113 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t101) = 1;

LAB66:    t117 = (t101 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (~(t118));
    t120 = *((unsigned int *)t101);
    t121 = (t120 & t119);
    t122 = (t121 != 0);
    if (t122 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB76;

LAB73:    if (t19 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t4) = 1;

LAB76:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng11)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB86;

LAB83:    if (t19 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t4) = 1;

LAB86:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB87;

LAB88:
LAB89:
LAB79:
LAB69:    goto LAB61;

LAB65:    t116 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(61, ng0);

LAB70:    xsi_set_current_line(62, ng0);
    t123 = (t0 + 876U);
    t124 = *((char **)t123);
    t123 = (t0 + 1656);
    t126 = (t0 + 1656);
    t127 = (t126 + 44U);
    t128 = *((char **)t127);
    t129 = (t0 + 2024);
    t130 = (t129 + 36U);
    t131 = *((char **)t130);
    t132 = ((char*)((ng10)));
    memset(t133, 0, 8);
    xsi_vlog_unsigned_minus(t133, 5, t131, 5, t132, 5);
    xsi_vlog_generic_convert_bit_index(t125, t128, 2, t133, 5, 2);
    t134 = (t125 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (!(t135));
    if (t136 == 1)
        goto LAB71;

LAB72:    goto LAB69;

LAB71:    xsi_vlogvar_wait_assign_value(t123, t124, 0, *((unsigned int *)t125), 1, 0LL);
    goto LAB72;

LAB75:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(63, ng0);

LAB80:    xsi_set_current_line(64, ng0);
    t29 = (t0 + 876U);
    t30 = *((char **)t29);
    t29 = (t0 + 1748);
    t32 = (t0 + 1748);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t36 = (t0 + 2024);
    t44 = (t36 + 36U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng10)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 5, t45, 5, t46, 5);
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 5, 2);
    t47 = (t31 + 4);
    t28 = *((unsigned int *)t47);
    t83 = (!(t28));
    if (t83 == 1)
        goto LAB81;

LAB82:    goto LAB79;

LAB81:    xsi_vlogvar_wait_assign_value(t29, t30, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB82;

LAB85:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(65, ng0);

LAB90:    xsi_set_current_line(66, ng0);
    t29 = (t0 + 876U);
    t30 = *((char **)t29);
    t29 = (t0 + 1840);
    t32 = (t0 + 1840);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t36 = (t0 + 2024);
    t44 = (t36 + 36U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng10)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 5, t45, 5, t46, 5);
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t35, 5, 2);
    t47 = (t31 + 4);
    t28 = *((unsigned int *)t47);
    t83 = (!(t28));
    if (t83 == 1)
        goto LAB91;

LAB92:    goto LAB89;

LAB91:    xsi_vlogvar_wait_assign_value(t29, t30, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB92;

LAB95:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(69, ng0);

LAB100:    xsi_set_current_line(70, ng0);
    t29 = (t0 + 968U);
    t30 = *((char **)t29);
    t29 = (t0 + 944U);
    t32 = (t29 + 44U);
    t33 = *((char **)t32);
    t34 = (t0 + 2024);
    t36 = (t34 + 36U);
    t44 = *((char **)t36);
    xsi_vlog_generic_get_index_select_value(t31, 1, t30, t33, 2, t44, 5, 2);
    t45 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t45, t31, 0, 0, 1, 0LL);
    goto LAB99;

LAB103:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(71, ng0);

LAB108:    xsi_set_current_line(72, ng0);
    t29 = (t0 + 1060U);
    t30 = *((char **)t29);
    t29 = (t0 + 1036U);
    t32 = (t29 + 44U);
    t33 = *((char **)t32);
    t34 = (t0 + 2024);
    t36 = (t34 + 36U);
    t44 = *((char **)t36);
    xsi_vlog_generic_get_index_select_value(t31, 1, t30, t33, 2, t44, 5, 2);
    t45 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t45, t31, 0, 0, 1, 0LL);
    goto LAB107;

LAB111:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(73, ng0);

LAB116:    xsi_set_current_line(74, ng0);
    t29 = (t0 + 1152U);
    t30 = *((char **)t29);
    t29 = (t0 + 1128U);
    t32 = (t29 + 44U);
    t33 = *((char **)t32);
    t34 = (t0 + 2024);
    t36 = (t34 + 36U);
    t44 = *((char **)t36);
    xsi_vlog_generic_get_index_select_value(t31, 1, t30, t33, 2, t44, 5, 2);
    t45 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t45, t31, 0, 0, 1, 0LL);
    goto LAB115;

LAB119:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(77, ng0);

LAB124:    xsi_set_current_line(78, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 5, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB128;

LAB125:    if (t19 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t4) = 1;

LAB128:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(86, ng0);

LAB141:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);

LAB131:    goto LAB123;

LAB127:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB128;

LAB129:    xsi_set_current_line(79, ng0);

LAB132:    xsi_set_current_line(80, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 4, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 2, t6, 32);
    t12 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng13)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB136;

LAB133:    if (t19 != 0)
        goto LAB135;

LAB134:    *((unsigned int *)t4) = 1;

LAB136:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB137;

LAB138:
LAB139:    goto LAB131;

LAB135:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB136;

LAB137:    xsi_set_current_line(82, ng0);

LAB140:    xsi_set_current_line(83, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 2, 0LL);
    goto LAB139;

}


extern void work_m_00000000001683802291_1799499590_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_37_1,(void *)Cont_38_2,(void *)Always_40_3};
	xsi_register_didat("work_m_00000000001683802291_1799499590", "isim/test_main_isim_beh.exe.sim/work/m_00000000001683802291_1799499590.didat");
	xsi_register_executes(pe);
}
