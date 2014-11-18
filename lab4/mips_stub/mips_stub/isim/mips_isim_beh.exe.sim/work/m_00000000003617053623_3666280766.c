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
static const char *ng0 = "//vboxsrv/CS141Shared/cs141/lab4/mips_stub/mips_stub/behavioural_alu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};



static void Cont_19_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 3332);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 3240);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_20_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t20 = (t0 + 3368);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t5 + 4);
    t28 = *((unsigned int *)t5);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 3248);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void Cont_23_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 3404);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 3256);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_24_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 3440);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 3264);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_26_4(char *t0)
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

LAB0:    t1 = (t0 + 2756U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 1152U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_arith_rshift(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 3476);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 3272);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_29_5(char *t0)
{
    char t10[8];
    char t42[8];
    char t47[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t49;

LAB0:    t1 = (t0 + 2900U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3280);
    *((int *)t2) = 1;
    t3 = (t0 + 2928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 692U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB30;

LAB31:
LAB32:    t41 = (t0 + 1472);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB29;

LAB9:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB33;

LAB34:
LAB35:    t23 = (t0 + 1472);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    goto LAB29;

LAB11:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB36;

LAB37:
LAB38:    t14 = (t0 + 1472);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 32);
    goto LAB29;

LAB13:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t42) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t42 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB39;

LAB40:
LAB41:    memset(t10, 0, 8);
    t23 = (t10 + 4);
    t24 = (t42 + 4);
    t37 = *((unsigned int *)t42);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB43;

LAB42:    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & 4294967295U);
    t41 = (t0 + 1472);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB29;

LAB15:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1152U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB29;

LAB17:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1152U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB29;

LAB19:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1152U);
    t7 = *((char **)t3);
    memset(t42, 0, 8);
    xsi_vlog_signed_less(t42, 32, t4, 32, t7, 32);
    t3 = ((char*)((ng2)));
    xsi_vlogtype_concat(t10, 32, 32, 2U, t3, 31, t42, 1);
    t8 = (t0 + 1472);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB29;

LAB21:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB29;

LAB23:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB29;

LAB25:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t48, 0, 8);
    t3 = (t48 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 5);
    *((unsigned int *)t48) = t12;
    t13 = *((unsigned int *)t7);
    t16 = (t13 >> 5);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t17 & 134217727U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 134217727U);
    memset(t47, 0, 8);
    t8 = (t48 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t48);
    t22 = (t21 & t20);
    t25 = (t22 & 134217727U);
    if (t25 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t8) != 0)
        goto LAB46;

LAB47:    memset(t42, 0, 8);
    t14 = (t47 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t47);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t14) != 0)
        goto LAB50;

LAB51:    t23 = (t42 + 4);
    t31 = *((unsigned int *)t42);
    t32 = *((unsigned int *)t23);
    t35 = (t31 || t32);
    if (t35 > 0)
        goto LAB52;

LAB53:    t36 = *((unsigned int *)t42);
    t37 = (~(t36));
    t38 = *((unsigned int *)t23);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t23) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t42) > 0)
        goto LAB58;

LAB59:    memcpy(t10, t49, 8);

LAB60:    t41 = (t0 + 1472);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB29;

LAB30:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB32;

LAB33:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB35;

LAB36:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB38;

LAB39:    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t42) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB41;

LAB43:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t24);
    *((unsigned int *)t10) = (t39 | t40);
    t43 = *((unsigned int *)t23);
    t44 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t43 | t44);
    goto LAB42;

LAB44:    *((unsigned int *)t47) = 1;
    goto LAB47;

LAB46:    t9 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t42) = 1;
    goto LAB51;

LAB50:    t15 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB51;

LAB52:    t24 = ((char*)((ng2)));
    goto LAB53;

LAB54:    t41 = (t0 + 1244U);
    t49 = *((char **)t41);
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t10, 32, t24, 32, t49, 32);
    goto LAB60;

LAB58:    memcpy(t10, t24, 8);
    goto LAB60;

}

static void Always_47_6(char *t0)
{
    char t10[8];
    char t11[8];
    char t18[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;

LAB0:    t1 = (t0 + 3044U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3288);
    *((int *)t2) = 1;
    t3 = (t0 + 3072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(67, ng0);

LAB48:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(49, ng0);

LAB14:    xsi_set_current_line(50, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 692U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1656);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    memset(t18, 0, 8);
    t7 = (t18 + 4);
    t9 = (t8 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t7) = t24;
    xsi_vlogtype_concat(t10, 2, 2, 2U, t18, 1, t11, 1);

LAB15:    t25 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 2, t25, 2);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 2, t2, 2);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 2, t2, 2);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 2, t2, 2);
    if (t6 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB13;

LAB9:    xsi_set_current_line(58, ng0);

LAB31:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t4, 32, t7, 32);
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t18) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    memset(t29, 0, 8);
    t7 = (t29 + 4);
    t9 = (t8 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t29) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t7) = t24;
    xsi_vlogtype_concat(t11, 2, 2, 2U, t29, 1, t18, 1);

LAB32:    t25 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t11, 2, t25, 2);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t11, 2, t2, 2);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t11, 2, t2, 2);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t11, 2, t2, 2);
    if (t6 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB13;

LAB16:    xsi_set_current_line(52, ng0);
    t26 = (t0 + 1656);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t30) = t37;
    t38 = (t0 + 1564);
    xsi_vlogvar_assign_value(t38, t29, 0, 0, 1);
    goto LAB24;

LAB18:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB24;

LAB20:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB24;

LAB22:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1656);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    memset(t18, 0, 8);
    t8 = (t18 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t18) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t8) = t17;
    memset(t11, 0, 8);
    t25 = (t18 + 4);
    t19 = *((unsigned int *)t25);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t25) == 0)
        goto LAB25;

LAB27:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;

LAB28:    t27 = (t11 + 4);
    t28 = (t18 + 4);
    t24 = *((unsigned int *)t18);
    t32 = (~(t24));
    *((unsigned int *)t11) = t32;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB30;

LAB29:    t37 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t37 & 1U);
    t39 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t39 & 1U);
    t30 = (t0 + 1564);
    xsi_vlogvar_assign_value(t30, t11, 0, 0, 1);
    goto LAB24;

LAB25:    *((unsigned int *)t11) = 1;
    goto LAB28;

LAB30:    t33 = *((unsigned int *)t11);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t11) = (t33 | t34);
    t35 = *((unsigned int *)t27);
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t35 | t36);
    goto LAB29;

LAB33:    xsi_set_current_line(61, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 1564);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB41;

LAB35:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1656);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    memset(t18, 0, 8);
    t8 = (t18 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t18) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t8) = t17;
    t25 = (t0 + 1564);
    xsi_vlogvar_assign_value(t25, t18, 0, 0, 1);
    goto LAB41;

LAB37:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1656);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    memset(t29, 0, 8);
    t8 = (t29 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t29) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t8) = t17;
    memset(t18, 0, 8);
    t25 = (t29 + 4);
    t19 = *((unsigned int *)t25);
    t20 = (~(t19));
    t21 = *((unsigned int *)t29);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t25) == 0)
        goto LAB42;

LAB44:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;

LAB45:    t27 = (t18 + 4);
    t28 = (t29 + 4);
    t24 = *((unsigned int *)t29);
    t32 = (~(t24));
    *((unsigned int *)t18) = t32;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB47;

LAB46:    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & 1U);
    t39 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t39 & 1U);
    t30 = (t0 + 1564);
    xsi_vlogvar_assign_value(t30, t18, 0, 0, 1);
    goto LAB41;

LAB39:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB41;

LAB42:    *((unsigned int *)t18) = 1;
    goto LAB45;

LAB47:    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t18) = (t33 | t34);
    t35 = *((unsigned int *)t27);
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t35 | t36);
    goto LAB46;

}


extern void work_m_00000000003617053623_3666280766_init()
{
	static char *pe[] = {(void *)Cont_19_0,(void *)Cont_20_1,(void *)Cont_23_2,(void *)Cont_24_3,(void *)Cont_26_4,(void *)Always_29_5,(void *)Always_47_6};
	xsi_register_didat("work_m_00000000003617053623_3666280766", "isim/mips_isim_beh.exe.sim/work/m_00000000003617053623_3666280766.didat");
	xsi_register_executes(pe);
}
