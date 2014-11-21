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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/cs141/lab4/mips_stub/mips_stub/register.v";
static int ng1[] = {1, 0};
static int ng2[] = {5, 0};
static int ng3[] = {32, 0};
static int ng4[] = {32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng5[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};



static void Cont_18_0(char *t0)
{
    char t3[8];
    char t11[8];
    char t13[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1528U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t10, 5, t9, 32);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 32, t11, 32, t12, 32);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t3, 32, t5, ((int*)(t8)), 2, t15, 32, 2, t16, 32, 1, 0);
    t17 = (t0 + 4576);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t3, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t22 = (t0 + 4464);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Cont_19_1(char *t0)
{
    char t3[8];
    char t11[8];
    char t13[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1688U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t10, 5, t9, 32);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 32, t11, 32, t12, 32);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t3, 32, t5, ((int*)(t8)), 2, t15, 32, 2, t16, 32, 1, 0);
    t17 = (t0 + 4640);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t3, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t22 = (t0 + 4480);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_21_2(char *t0)
{
    char t4[8];
    char t31[256];
    char t33[8];
    char t34[8];
    char t35[8];
    char t36[8];
    char t37[8];
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
    char *t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 4496);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t5 = (t0 + 1208U);
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

LAB13:    xsi_set_current_line(24, ng0);

LAB16:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:
LAB19:
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

LAB12:    xsi_set_current_line(22, ng0);

LAB15:    xsi_set_current_line(23, ng0);
    t29 = ((char*)((ng4)));
    t30 = ((char*)((ng5)));
    xsi_vlog_unsigned_multiply(t31, 1024, t29, 32, t30, 1024);
    t32 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1024, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(25, ng0);

LAB20:    xsi_set_current_line(26, ng0);
    t5 = (t0 + 2008U);
    t6 = *((char **)t5);
    t5 = (t0 + 2728);
    t12 = (t0 + 2728);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t23 = (t0 + 1848U);
    t29 = *((char **)t23);
    t23 = ((char*)((ng1)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t29, 5, t23, 32);
    t30 = ((char*)((ng2)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_lshift(t36, 32, t35, 32, t30, 32);
    t32 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t36, 32, t32, 32);
    t38 = ((char*)((ng3)));
    xsi_vlog_convert_indexed_partindices(t4, t33, t34, ((int*)(t14)), 2, t37, 32, 2, t38, 32, 1, 0);
    t39 = (t4 + 4);
    t15 = *((unsigned int *)t39);
    t40 = (!(t15));
    t41 = (t33 + 4);
    t16 = *((unsigned int *)t41);
    t42 = (!(t16));
    t43 = (t40 && t42);
    t44 = (t34 + 4);
    t17 = *((unsigned int *)t44);
    t45 = (!(t17));
    t46 = (t43 && t45);
    if (t46 == 1)
        goto LAB21;

LAB22:    goto LAB19;

LAB21:    t18 = *((unsigned int *)t34);
    t47 = (t18 + 0);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t33);
    t48 = (t19 - t20);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t47, *((unsigned int *)t33), t49, 0LL);
    goto LAB22;

}


extern void work_m_00000000001182977784_3913188552_init()
{
	static char *pe[] = {(void *)Cont_18_0,(void *)Cont_19_1,(void *)Always_21_2};
	xsi_register_didat("work_m_00000000001182977784_3913188552", "isim/test_mips_isim_beh.exe.sim/work/m_00000000001182977784_3913188552.didat");
	xsi_register_executes(pe);
}
