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
static const char *ng0 = "//vboxsrv/CS141Shared/cs141/visual2/touchpad_controller.v";
static unsigned int ng1[] = {6914048U, 0U};
static unsigned int ng2[] = {4816896U, 0U};
static unsigned int ng3[] = {5865472U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};
static int ng7[] = {25, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {22, 0};
static int ng10[] = {2, 0};
static unsigned int ng11[] = {19U, 0U};
static unsigned int ng12[] = {7U, 0U};
static int ng13[] = {14, 0};
static int ng14[] = {3, 0};
static unsigned int ng15[] = {8U, 0U};
static unsigned int ng16[] = {20U, 0U};



static void Cont_40_0(char *t0)
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

LAB0:    t1 = (t0 + 2916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3588);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 8388607U;
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
    xsi_driver_vfirst_trans(t3, 0, 22);

LAB1:    return;
}

static void Cont_41_1(char *t0)
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

LAB0:    t1 = (t0 + 3060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3624);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 8388607U;
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
    xsi_driver_vfirst_trans(t3, 0, 22);

LAB1:    return;
}

static void Cont_42_2(char *t0)
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

LAB0:    t1 = (t0 + 3204U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3660);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 8388607U;
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
    xsi_driver_vfirst_trans(t3, 0, 22);

LAB1:    return;
}

static void Always_46_3(char *t0)
{
    char t4[8];
    char t31[8];
    char t35[8];
    char t53[8];
    char t57[8];
    char t65[8];
    char t105[8];
    char t113[8];
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
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    unsigned int t115;
    int t116;

LAB0:    t1 = (t0 + 3348U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3544);
    *((int *)t2) = 1;
    t3 = (t0 + 3376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
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

LAB13:    xsi_set_current_line(60, ng0);

LAB16:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2392);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    t12 = ((char*)((ng6)));
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

LAB22:    xsi_set_current_line(65, ng0);

LAB25:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(67, ng0);
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
    xsi_set_current_line(68, ng0);
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
LAB34:    xsi_set_current_line(109, ng0);
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
        goto LAB98;

LAB96:    if (*((unsigned int *)t6) == 0)
        goto LAB95;

LAB97:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB98:    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB100;

LAB99:    t21 = *((unsigned int *)t4);
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
        goto LAB101;

LAB102:
LAB103:
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

LAB12:    xsi_set_current_line(47, ng0);

LAB15:    xsi_set_current_line(48, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 12, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB18:    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB19:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(62, ng0);

LAB24:    xsi_set_current_line(63, ng0);
    t30 = (t0 + 2392);
    t32 = (t30 + 36U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng8)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 6, t33, 5, t34, 6);
    t36 = (t0 + 2392);
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

LAB32:    xsi_set_current_line(68, ng0);

LAB35:    xsi_set_current_line(69, ng0);
    t12 = (t0 + 2116);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t23 = ((char*)((ng5)));
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

LAB39:    t33 = (t4 + 4);
    t28 = *((unsigned int *)t33);
    t37 = (~(t28));
    t38 = *((unsigned int *)t4);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
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
        goto LAB47;

LAB44:    if (t19 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t4) = 1;

LAB47:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
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
        goto LAB55;

LAB52:    if (t19 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t4) = 1;

LAB55:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB56;

LAB57:
LAB58:
LAB50:
LAB42:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2024);
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
        goto LAB63;

LAB60:    if (t19 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t4) = 1;

LAB63:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(105, ng0);

LAB94:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);

LAB66:    goto LAB34;

LAB38:    t32 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(69, ng0);

LAB43:    xsi_set_current_line(70, ng0);
    t34 = (t0 + 968U);
    t36 = *((char **)t34);
    t34 = (t0 + 944U);
    t41 = (t34 + 44U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng9)));
    t44 = (t0 + 2024);
    t45 = (t44 + 36U);
    t46 = *((char **)t45);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t43, 32, t46, 5);
    xsi_vlog_generic_get_index_select_value(t31, 1, t36, t42, 2, t35, 32, 2);
    t47 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t47, t31, 0, 0, 1, 0LL);
    goto LAB42;

LAB46:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(71, ng0);

LAB51:    xsi_set_current_line(72, ng0);
    t29 = (t0 + 1060U);
    t30 = *((char **)t29);
    t29 = (t0 + 1036U);
    t32 = (t29 + 44U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng9)));
    t36 = (t0 + 2024);
    t41 = (t36 + 36U);
    t42 = *((char **)t41);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t34, 32, t42, 5);
    xsi_vlog_generic_get_index_select_value(t31, 1, t30, t33, 2, t35, 32, 2);
    t43 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 1, 0LL);
    goto LAB50;

LAB54:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(73, ng0);

LAB59:    xsi_set_current_line(74, ng0);
    t29 = (t0 + 1152U);
    t30 = *((char **)t29);
    t29 = (t0 + 1128U);
    t32 = (t29 + 44U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng9)));
    t36 = (t0 + 2024);
    t41 = (t36 + 36U);
    t42 = *((char **)t41);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t34, 32, t42, 5);
    xsi_vlog_generic_get_index_select_value(t31, 1, t30, t33, 2, t35, 32, 2);
    t43 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 1, 0LL);
    goto LAB58;

LAB62:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(77, ng0);

LAB67:    xsi_set_current_line(78, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 5, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 2208);
    t12 = (t6 + 36U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 15, t5, 15, t13, 12);
    t14 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 15, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1932);
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
        goto LAB71;

LAB68:    if (t19 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t4) = 1;

LAB71:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(102, ng0);

LAB93:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);

LAB74:    goto LAB66;

LAB70:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(84, ng0);

LAB75:    xsi_set_current_line(85, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 4, 0LL);
    xsi_set_current_line(88, ng0);
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
        goto LAB79;

LAB76:    if (t19 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t4) = 1;

LAB79:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
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
        goto LAB87;

LAB84:    if (t19 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t4) = 1;

LAB87:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(96, ng0);

LAB92:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 2208);
    t12 = (t6 + 44U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng13)));
    t23 = ((char*)((ng14)));
    xsi_vlog_generic_get_part_select_value(t4, 12, t5, t13, 2, t14, 32U, 1, t23, 32U, 1);
    t29 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);

LAB90:
LAB82:    goto LAB74;

LAB78:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(88, ng0);

LAB83:    xsi_set_current_line(89, ng0);
    t29 = (t0 + 2116);
    t30 = (t29 + 36U);
    t32 = *((char **)t30);
    t33 = ((char*)((ng6)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t32, 2, t33, 32);
    t34 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 2, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 2208);
    t12 = (t6 + 44U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng13)));
    t23 = ((char*)((ng14)));
    xsi_vlog_generic_get_part_select_value(t4, 12, t5, t13, 2, t14, 32U, 1, t23, 32U, 1);
    t29 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);
    goto LAB82;

LAB86:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(92, ng0);

LAB91:    xsi_set_current_line(93, ng0);
    t29 = (t0 + 2116);
    t30 = (t29 + 36U);
    t32 = *((char **)t30);
    t33 = ((char*)((ng6)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t32, 2, t33, 32);
    t34 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 2, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 2208);
    t12 = (t6 + 44U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng13)));
    t23 = ((char*)((ng14)));
    xsi_vlog_generic_get_part_select_value(t4, 12, t5, t13, 2, t14, 32U, 1, t23, 32U, 1);
    t29 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);
    goto LAB90;

LAB95:    *((unsigned int *)t4) = 1;
    goto LAB98;

LAB100:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB99;

LAB101:    xsi_set_current_line(109, ng0);

LAB104:    xsi_set_current_line(110, ng0);
    t29 = (t0 + 2024);
    t30 = (t29 + 36U);
    t32 = *((char **)t30);
    t33 = ((char*)((ng15)));
    memset(t31, 0, 8);
    t34 = (t32 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB106;

LAB105:    t36 = (t33 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB106;

LAB109:    if (*((unsigned int *)t32) < *((unsigned int *)t33))
        goto LAB108;

LAB107:    *((unsigned int *)t31) = 1;

LAB108:    memset(t35, 0, 8);
    t42 = (t31 + 4);
    t37 = *((unsigned int *)t42);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t39 & t38);
    t48 = (t40 & 1U);
    if (t48 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t42) != 0)
        goto LAB112;

LAB113:    t44 = (t35 + 4);
    t49 = *((unsigned int *)t35);
    t50 = *((unsigned int *)t44);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB114;

LAB115:    memcpy(t65, t35, 8);

LAB116:    t97 = (t65 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB129;

LAB130:
LAB131:    goto LAB103;

LAB106:    t41 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB108;

LAB110:    *((unsigned int *)t35) = 1;
    goto LAB113;

LAB112:    t43 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB113;

LAB114:    t45 = (t0 + 2024);
    t46 = (t45 + 36U);
    t47 = *((char **)t46);
    t52 = ((char*)((ng16)));
    memset(t53, 0, 8);
    t54 = (t47 + 4);
    if (*((unsigned int *)t54) != 0)
        goto LAB118;

LAB117:    t55 = (t52 + 4);
    if (*((unsigned int *)t55) != 0)
        goto LAB118;

LAB121:    if (*((unsigned int *)t47) < *((unsigned int *)t52))
        goto LAB119;

LAB120:    memset(t57, 0, 8);
    t58 = (t53 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t53);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t58) != 0)
        goto LAB124;

LAB125:    t66 = *((unsigned int *)t35);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t35 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB116;

LAB118:    t56 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB120;

LAB119:    *((unsigned int *)t53) = 1;
    goto LAB120;

LAB122:    *((unsigned int *)t57) = 1;
    goto LAB125;

LAB124:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB125;

LAB126:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t35 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t35);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB128;

LAB129:    xsi_set_current_line(110, ng0);

LAB132:    xsi_set_current_line(111, ng0);
    t103 = (t0 + 876U);
    t104 = *((char **)t103);
    t103 = (t0 + 2208);
    t106 = (t0 + 2208);
    t107 = (t106 + 44U);
    t108 = *((char **)t107);
    t109 = (t0 + 2024);
    t110 = (t109 + 36U);
    t111 = *((char **)t110);
    t112 = ((char*)((ng15)));
    memset(t113, 0, 8);
    xsi_vlog_unsigned_minus(t113, 5, t111, 5, t112, 5);
    xsi_vlog_generic_convert_bit_index(t105, t108, 2, t113, 5, 2);
    t114 = (t105 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (!(t115));
    if (t116 == 1)
        goto LAB133;

LAB134:    goto LAB131;

LAB133:    xsi_vlogvar_wait_assign_value(t103, t104, 0, *((unsigned int *)t105), 1, 0LL);
    goto LAB134;

}


extern void work_m_00000000002340883914_1799499590_init()
{
	static char *pe[] = {(void *)Cont_40_0,(void *)Cont_41_1,(void *)Cont_42_2,(void *)Always_46_3};
	xsi_register_didat("work_m_00000000002340883914_1799499590", "isim/test_touch_isim_beh.exe.sim/work/m_00000000002340883914_1799499590.didat");
	xsi_register_executes(pe);
}
