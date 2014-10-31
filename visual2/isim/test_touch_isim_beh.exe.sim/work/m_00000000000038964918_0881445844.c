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
static const char *ng0 = "//vboxsrv/CS141Shared/cs141/visual2/ad7873.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {83U, 0U};
static unsigned int ng4[] = {370U, 0U};
static unsigned int ng5[] = {19U, 0U};
static unsigned int ng6[] = {192U, 0U};
static unsigned int ng7[] = {51U, 0U};
static unsigned int ng8[] = {500U, 0U};
static unsigned int ng9[] = {0U, 4095U};
static int ng10[] = {28, 0};
static int ng11[] = {6, 0};
static int ng12[] = {13, 0};
static unsigned int ng13[] = {1U, 0U};
static unsigned int ng14[] = {0U, 1U};
static unsigned int ng15[] = {0U, 0U};
static unsigned int ng16[] = {11U, 0U};



static void Always_61_0(char *t0)
{
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

LAB0:    t1 = (t0 + 2628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3400);
    *((int *)t2) = 1;
    t3 = (t0 + 2656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 864U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(65, ng0);

LAB10:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1644);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(62, ng0);

LAB9:    xsi_set_current_line(63, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1644);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB8;

}

static void Always_72_1(char *t0)
{
    char t11[8];
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

LAB0:    t1 = (t0 + 2772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    t3 = (t0 + 2800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1276);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t7, 7);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);

LAB15:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1368);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1552);
    t7 = (t5 + 36U);
    t9 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 12, t4, 12, t9, 12);
    t10 = (t0 + 1460);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 12);
    goto LAB2;

LAB7:    xsi_set_current_line(74, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 1368);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 12);
    goto LAB15;

LAB9:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB15;

LAB11:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB15;

}

static void Always_82_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t18[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 2944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);

LAB5:    xsi_set_current_line(83, ng0);
    t6 = (t0 + 264);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 4294967295U);
    if (t12 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t14);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t26, 8);

LAB18:    t27 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t27, t4, 0, 0, 12, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB10:    *((int *)t18) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t19 = (t18 + 4);
    *((int *)t19) = 0;
    t20 = ((char*)((ng10)));
    memset(t21, 0, 8);
    xsi_vlog_signed_arith_rshift(t21, 32, t18, 32, t20, 32);
    goto LAB11;

LAB12:    t26 = ((char*)((ng1)));
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 32, t21, 32, t26, 32);
    goto LAB18;

LAB16:    memcpy(t4, t21, 8);
    goto LAB18;

}

static void Always_94_3(char *t0)
{
    char t4[8];
    char t38[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
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

LAB0:    t1 = (t0 + 3060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3424);
    *((int *)t2) = 1;
    t3 = (t0 + 3088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 1644);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(103, ng0);

LAB16:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 680U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(125, ng0);

LAB57:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB61;

LAB59:    if (*((unsigned int *)t6) == 0)
        goto LAB58;

LAB60:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB61:    t8 = (t4 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB63;

LAB62:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 1U);
    t15 = (t4 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(129, ng0);

LAB68:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1184);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(136, ng0);

LAB82:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2104);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB84;

LAB83:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB84;

LAB87:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB85;

LAB86:    t15 = (t4 + 4);
    t9 = *((unsigned int *)t15);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(141, ng0);

LAB92:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB90:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2104);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng11)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB96;

LAB93:    if (t21 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t4) = 1;

LAB96:    t15 = (t4 + 4);
    t24 = *((unsigned int *)t15);
    t26 = (~(t24));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB97;

LAB98:
LAB99:
LAB71:
LAB66:
LAB19:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB12:    xsi_set_current_line(95, ng0);

LAB15:    xsi_set_current_line(96, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2012);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(104, ng0);

LAB20:    xsi_set_current_line(105, ng0);
    t5 = (t0 + 1736);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t8) == 0)
        goto LAB21;

LAB23:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB24:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    *((unsigned int *)t4) = t23;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB26;

LAB25:    t29 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t29 & 1U);
    t30 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t30 & 1U);
    t25 = (t4 + 4);
    t33 = *((unsigned int *)t25);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(111, ng0);

LAB44:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    t2 = (t0 + 1276);
    t5 = (t0 + 1276);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 2012);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t15, 8, 2);
    t16 = (t4 + 4);
    t9 = *((unsigned int *)t16);
    t82 = (!(t9));
    if (t82 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2012);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB48;

LAB47:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB49;

LAB50:    t15 = (t4 + 4);
    t9 = *((unsigned int *)t15);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(116, ng0);

LAB56:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB54:
LAB29:    goto LAB19;

LAB21:    *((unsigned int *)t4) = 1;
    goto LAB24;

LAB26:    t24 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t24 | t26);
    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t27 | t28);
    goto LAB25;

LAB27:    xsi_set_current_line(105, ng0);

LAB30:    xsi_set_current_line(106, ng0);
    t31 = (t0 + 772U);
    t32 = *((char **)t31);
    t31 = (t0 + 1828);
    t39 = (t31 + 36U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t41) == 0)
        goto LAB31;

LAB33:    t47 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t47) = 1;

LAB34:    t48 = (t38 + 4);
    t49 = (t40 + 4);
    t50 = *((unsigned int *)t40);
    t51 = (~(t50));
    *((unsigned int *)t38) = t51;
    *((unsigned int *)t48) = 0;
    if (*((unsigned int *)t49) != 0)
        goto LAB36;

LAB35:    t56 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t56 & 1U);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t57 & 1U);
    t59 = *((unsigned int *)t32);
    t60 = *((unsigned int *)t38);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t32 + 4);
    t63 = (t38 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB37;

LAB38:
LAB39:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB29;

LAB31:    *((unsigned int *)t38) = 1;
    goto LAB34;

LAB36:    t52 = *((unsigned int *)t38);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t38) = (t52 | t53);
    t54 = *((unsigned int *)t48);
    t55 = *((unsigned int *)t49);
    *((unsigned int *)t48) = (t54 | t55);
    goto LAB35;

LAB37:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t32 + 4);
    t73 = (t38 + 4);
    t74 = *((unsigned int *)t32);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t38);
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
    goto LAB39;

LAB40:    xsi_set_current_line(106, ng0);

LAB43:    xsi_set_current_line(107, ng0);
    t96 = ((char*)((ng11)));
    t97 = (t0 + 2012);
    xsi_vlogvar_wait_assign_value(t97, t96, 0, 0, 8, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB42;

LAB45:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB46;

LAB48:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t4) = 1;
    goto LAB50;

LAB52:    xsi_set_current_line(113, ng0);

LAB55:    xsi_set_current_line(114, ng0);
    t16 = (t0 + 2012);
    t25 = (t16 + 36U);
    t31 = *((char **)t25);
    t32 = ((char*)((ng2)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t31, 8, t32, 32);
    t39 = (t0 + 2012);
    xsi_vlogvar_wait_assign_value(t39, t38, 0, 0, 8, 0LL);
    goto LAB54;

LAB58:    *((unsigned int *)t4) = 1;
    goto LAB61;

LAB63:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t21 | t22);
    goto LAB62;

LAB64:    xsi_set_current_line(126, ng0);

LAB67:    xsi_set_current_line(127, ng0);
    t16 = ((char*)((ng12)));
    t25 = (t0 + 2104);
    xsi_vlogvar_wait_assign_value(t25, t16, 0, 0, 8, 0LL);
    goto LAB66;

LAB69:    xsi_set_current_line(130, ng0);

LAB72:    xsi_set_current_line(131, ng0);
    t7 = (t0 + 2104);
    t8 = (t7 + 36U);
    t14 = *((char **)t8);
    t15 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t14, 8, t15, 32);
    t16 = (t0 + 2104);
    xsi_vlogvar_wait_assign_value(t16, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2104);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng12)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB74;

LAB73:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB75;

LAB76:    t15 = (t4 + 4);
    t9 = *((unsigned int *)t15);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB78;

LAB79:
LAB80:    goto LAB71;

LAB74:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB76;

LAB75:    *((unsigned int *)t4) = 1;
    goto LAB76;

LAB78:    xsi_set_current_line(132, ng0);

LAB81:    xsi_set_current_line(133, ng0);
    t16 = ((char*)((ng1)));
    t25 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t25, t16, 0, 0, 1, 0LL);
    goto LAB80;

LAB84:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB86;

LAB85:    *((unsigned int *)t4) = 1;
    goto LAB86;

LAB88:    xsi_set_current_line(138, ng0);

LAB91:    xsi_set_current_line(139, ng0);
    t16 = (t0 + 2104);
    t25 = (t16 + 36U);
    t31 = *((char **)t25);
    t32 = ((char*)((ng2)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t31, 8, t32, 32);
    t39 = (t0 + 2104);
    xsi_vlogvar_wait_assign_value(t39, t38, 0, 0, 8, 0LL);
    goto LAB90;

LAB95:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(144, ng0);

LAB100:    xsi_set_current_line(145, ng0);
    t16 = ((char*)((ng1)));
    t25 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t25, t16, 0, 0, 1, 0LL);
    goto LAB99;

}

static void Always_154_4(char *t0)
{
    char t4[8];
    char t28[8];
    char t64[8];
    char t66[8];
    char t69[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t65;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;

LAB0:    t1 = (t0 + 3204U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3432);
    *((int *)t2) = 1;
    t3 = (t0 + 3232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(154, ng0);

LAB5:    xsi_set_current_line(155, ng0);
    t5 = (t0 + 1644);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 1184);
    t26 = (t25 + 36U);
    t27 = *((char **)t26);
    t29 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = (t4 + 4);
    t33 = (t27 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB12;

LAB13:
LAB14:    t56 = (t28 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t28);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(158, ng0);

LAB19:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(167, ng0);

LAB53:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1092);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB22:
LAB17:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB12:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t4 + 4);
    t43 = (t27 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t4);
    t47 = (t46 & t45);
    t48 = *((unsigned int *)t43);
    t49 = (~(t48));
    t50 = *((unsigned int *)t27);
    t51 = (t50 & t49);
    t52 = (~(t47));
    t53 = (~(t51));
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t52);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    goto LAB14;

LAB15:    xsi_set_current_line(155, ng0);

LAB18:    xsi_set_current_line(156, ng0);
    t62 = ((char*)((ng14)));
    t63 = (t0 + 1092);
    xsi_vlogvar_assign_value(t63, t62, 0, 0, 1);
    goto LAB17;

LAB20:    xsi_set_current_line(159, ng0);

LAB23:    xsi_set_current_line(160, ng0);
    t7 = (t0 + 2104);
    t8 = (t7 + 36U);
    t14 = *((char **)t8);
    t15 = ((char*)((ng15)));
    memset(t4, 0, 8);
    t16 = (t14 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB25;

LAB24:    t25 = (t15 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t14) < *((unsigned int *)t15))
        goto LAB27;

LAB26:    *((unsigned int *)t4) = 1;

LAB27:    memset(t28, 0, 8);
    t27 = (t4 + 4);
    t17 = *((unsigned int *)t27);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t27) != 0)
        goto LAB31;

LAB32:    t33 = (t28 + 4);
    t22 = *((unsigned int *)t28);
    t23 = *((unsigned int *)t33);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB33;

LAB34:    memcpy(t69, t28, 8);

LAB35:    t79 = (t69 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t69);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(163, ng0);

LAB52:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1092);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB50:    goto LAB22;

LAB25:    t26 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t28) = 1;
    goto LAB32;

LAB31:    t32 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB32;

LAB33:    t34 = (t0 + 2104);
    t42 = (t34 + 36U);
    t43 = *((char **)t42);
    t56 = ((char*)((ng16)));
    memset(t64, 0, 8);
    t62 = (t43 + 4);
    if (*((unsigned int *)t62) != 0)
        goto LAB37;

LAB36:    t63 = (t56 + 4);
    if (*((unsigned int *)t63) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t43) > *((unsigned int *)t56))
        goto LAB39;

LAB38:    *((unsigned int *)t64) = 1;

LAB39:    memset(t66, 0, 8);
    t67 = (t64 + 4);
    t29 = *((unsigned int *)t67);
    t30 = (~(t29));
    t31 = *((unsigned int *)t64);
    t35 = (t31 & t30);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t67) != 0)
        goto LAB43;

LAB44:    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t66);
    t39 = (t37 & t38);
    *((unsigned int *)t69) = t39;
    t70 = (t28 + 4);
    t71 = (t66 + 4);
    t72 = (t69 + 4);
    t40 = *((unsigned int *)t70);
    t41 = *((unsigned int *)t71);
    t44 = (t40 | t41);
    *((unsigned int *)t72) = t44;
    t45 = *((unsigned int *)t72);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t65 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t66) = 1;
    goto LAB44;

LAB43:    t68 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB44;

LAB45:    t48 = *((unsigned int *)t69);
    t49 = *((unsigned int *)t72);
    *((unsigned int *)t69) = (t48 | t49);
    t73 = (t28 + 4);
    t74 = (t66 + 4);
    t50 = *((unsigned int *)t28);
    t52 = (~(t50));
    t53 = *((unsigned int *)t73);
    t54 = (~(t53));
    t55 = *((unsigned int *)t66);
    t57 = (~(t55));
    t58 = *((unsigned int *)t74);
    t59 = (~(t58));
    t47 = (t52 & t54);
    t51 = (t57 & t59);
    t60 = (~(t47));
    t61 = (~(t51));
    t75 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t75 & t60);
    t76 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t76 & t61);
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & t60);
    t78 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t78 & t61);
    goto LAB47;

LAB48:    xsi_set_current_line(160, ng0);

LAB51:    xsi_set_current_line(161, ng0);
    t85 = (t0 + 1460);
    t86 = (t85 + 36U);
    t87 = *((char **)t86);
    t89 = (t0 + 1460);
    t90 = (t89 + 44U);
    t91 = *((char **)t90);
    t92 = (t0 + 2104);
    t93 = (t92 + 36U);
    t94 = *((char **)t93);
    xsi_vlog_generic_get_index_select_value(t88, 1, t87, t91, 2, t94, 8, 2);
    t95 = (t0 + 1092);
    xsi_vlogvar_assign_value(t95, t88, 0, 0, 1);
    goto LAB50;

}


extern void work_m_00000000000038964918_0881445844_init()
{
	static char *pe[] = {(void *)Always_61_0,(void *)Always_72_1,(void *)Always_82_2,(void *)Always_94_3,(void *)Always_154_4};
	xsi_register_didat("work_m_00000000000038964918_0881445844", "isim/test_touch_isim_beh.exe.sim/work/m_00000000000038964918_0881445844.didat");
	xsi_register_executes(pe);
}
