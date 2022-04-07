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
static const char *ng0 = "C:/Users/Student/Desktop/section6/lab1/lab1/tb/model_uart.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {10, 0};
static int ng5[] = {1, 0};
static int ng6[] = {8, 0};
static int ng7[] = {7, 0};
static int ng8[] = {15, 0};
static int ng9[] = {2, 0};
static int ng10[] = {23, 0};
static int ng11[] = {16, 0};
static int ng12[] = {3, 0};
static int ng13[] = {31, 0};
static int ng14[] = {24, 0};
static int ng15[] = {13, 0};
static const char *ng16 = "%d %s Received byte(%s%s%s%s)";
static int ng17[] = {1095914544, 0, 85, 0};



static int sp_tskRxData(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1256);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(89, ng0);
    t4 = (t1 + 2880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB4;

}

static int sp_tskTxData(char *t1, char *t2)
{
    char t5[8];
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
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
    char *t25;
    char *t26;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1688);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t6 = ((char*)((ng1)));
    t8 = (t1 + 3520);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t19 = ((char*)((ng2)));
    xsi_vlogtype_concat(t5, 10, 10, 3U, t19, 1, t7, 8, t6, 1);
    t20 = (t1 + 3680);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 10);
    xsi_set_current_line(99, ng0);
    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 3840);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 3840);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t8, 32, t9, 32);
    t10 = (t5 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(105, ng0);
    t4 = (t1 + 7032);
    xsi_trigger(t4, -1, -1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(100, ng0);

LAB9:    xsi_set_current_line(101, ng0);
    t11 = (t1 + 3680);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = (t1 + 3680);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t1 + 3840);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t7, 1, t19, t22, 2, t25, 32, 1);
    t26 = (t1 + 2720);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(103, ng0);
    t4 = (t1 + 6864);
    xsi_trigger(t4, -1, -1);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 3840);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t8, 32, t9, 32);
    t10 = (t1 + 3840);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 32);
    goto LAB6;

}

static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2720);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3200);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t12[8];
    char t13[8];
    char t27[8];
    char t28[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    int t39;
    int t40;
    char *t41;
    unsigned int t42;
    int t43;
    int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5328);
    *((int *)t2) = 1;
    t3 = (t0 + 5040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4816);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t4 = (t0 + 7844);
    *((int *)t4) = t9;

LAB7:    t5 = (t0 + 7844);
    if (*((int *)t5) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6696);
    xsi_trigger(t2, -1, -1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t10 = (t12 + 4);
    t6 = *((unsigned int *)t10);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t10 = (t12 + 4);
    t6 = *((unsigned int *)t10);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t10 = (t12 + 4);
    t6 = *((unsigned int *)t10);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t10 = (t12 + 4);
    t6 = *((unsigned int *)t10);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t14 = (t8 & t7);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB26:
LAB20:
LAB14:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t12, 0, 8);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t21 = (t8 | t16);
    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t36 = (t21 & t25);
    if (t36 != 0)
        goto LAB39;

LAB36:    if (t24 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t12) = 1;

LAB39:    t18 = (t12 + 4);
    t38 = *((unsigned int *)t18);
    t42 = (~(t38));
    t45 = *((unsigned int *)t12);
    t47 = (t45 & t42);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(77, ng0);

LAB44:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t4, 32, t5, 32);
    t10 = (t0 + 3200);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);

LAB42:    goto LAB2;

LAB8:    xsi_set_current_line(40, ng0);

LAB10:    xsi_set_current_line(41, ng0);
    t10 = (t0 + 4816);
    xsi_process_wait(t10, 1000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(41, ng0);
    t11 = (t0 + 6528);
    xsi_trigger(t11, -1, -1);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t10 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t10);
    t14 = (t8 >> 1);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 127U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 127U);
    t11 = (t0 + 2320U);
    t17 = *((char **)t11);
    xsi_vlogtype_concat(t12, 8, 8, 2U, t17, 1, t13, 7);
    t11 = (t0 + 2880);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 8);
    t2 = (t0 + 7844);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB7;

LAB12:    xsi_set_current_line(48, ng0);

LAB15:    xsi_set_current_line(50, ng0);
    t11 = (t0 + 2880);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    memset(t13, 0, 8);
    t19 = (t13 + 4);
    t20 = (t18 + 4);
    t16 = *((unsigned int *)t18);
    t21 = (t16 >> 0);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 255U);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 255U);
    t26 = (t0 + 3040);
    t30 = (t0 + 3040);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng7)));
    t34 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t32)), 2, t33, 32, 1, t34, 32, 1);
    t35 = (t27 + 4);
    t36 = *((unsigned int *)t35);
    t9 = (!(t36));
    t37 = (t28 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t9 && t39);
    t41 = (t29 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    if (t44 == 1)
        goto LAB16;

LAB17:    goto LAB14;

LAB16:    t45 = *((unsigned int *)t29);
    t46 = (t45 + 0);
    t47 = *((unsigned int *)t27);
    t48 = *((unsigned int *)t28);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t26, t13, t46, *((unsigned int *)t28), t50, 0LL);
    goto LAB17;

LAB18:    xsi_set_current_line(53, ng0);

LAB21:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 2880);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    memset(t13, 0, 8);
    t19 = (t13 + 4);
    t20 = (t18 + 4);
    t16 = *((unsigned int *)t18);
    t21 = (t16 >> 0);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 255U);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 255U);
    t26 = (t0 + 3040);
    t30 = (t0 + 3040);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng8)));
    t34 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t32)), 2, t33, 32, 1, t34, 32, 1);
    t35 = (t27 + 4);
    t36 = *((unsigned int *)t35);
    t9 = (!(t36));
    t37 = (t28 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t9 && t39);
    t41 = (t29 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    if (t44 == 1)
        goto LAB22;

LAB23:    goto LAB20;

LAB22:    t45 = *((unsigned int *)t29);
    t46 = (t45 + 0);
    t47 = *((unsigned int *)t27);
    t48 = *((unsigned int *)t28);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t26, t13, t46, *((unsigned int *)t28), t50, 0LL);
    goto LAB23;

LAB24:    xsi_set_current_line(58, ng0);

LAB27:    xsi_set_current_line(60, ng0);
    t11 = (t0 + 2880);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    memset(t13, 0, 8);
    t19 = (t13 + 4);
    t20 = (t18 + 4);
    t16 = *((unsigned int *)t18);
    t21 = (t16 >> 0);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 255U);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 255U);
    t26 = (t0 + 3040);
    t30 = (t0 + 3040);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng10)));
    t34 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t32)), 2, t33, 32, 1, t34, 32, 1);
    t35 = (t27 + 4);
    t36 = *((unsigned int *)t35);
    t9 = (!(t36));
    t37 = (t28 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t9 && t39);
    t41 = (t29 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    if (t44 == 1)
        goto LAB28;

LAB29:    goto LAB26;

LAB28:    t45 = *((unsigned int *)t29);
    t46 = (t45 + 0);
    t47 = *((unsigned int *)t27);
    t48 = *((unsigned int *)t28);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t26, t13, t46, *((unsigned int *)t28), t50, 0LL);
    goto LAB29;

LAB30:    xsi_set_current_line(63, ng0);

LAB33:    xsi_set_current_line(65, ng0);
    t11 = (t0 + 2880);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    memset(t13, 0, 8);
    t19 = (t13 + 4);
    t20 = (t18 + 4);
    t16 = *((unsigned int *)t18);
    t21 = (t16 >> 0);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 255U);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 255U);
    t26 = (t0 + 3040);
    t30 = (t0 + 3040);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng13)));
    t34 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t32)), 2, t33, 32, 1, t34, 32, 1);
    t35 = (t27 + 4);
    t36 = *((unsigned int *)t35);
    t9 = (!(t36));
    t37 = (t28 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t9 && t39);
    t41 = (t29 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    if (t44 == 1)
        goto LAB34;

LAB35:    goto LAB32;

LAB34:    t45 = *((unsigned int *)t29);
    t46 = (t45 + 0);
    t47 = *((unsigned int *)t27);
    t48 = *((unsigned int *)t28);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t26, t13, t46, *((unsigned int *)t28), t50, 0LL);
    goto LAB35;

LAB38:    t17 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(71, ng0);

LAB43:    xsi_set_current_line(72, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3200);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    *((int *)t12) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t2 = (t12 + 4);
    *((int *)t2) = 0;
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3040);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t17 = (t10 + 4);
    t6 = *((unsigned int *)t10);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t17);
    t14 = (t8 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 255U);
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t18 = (t0 + 3040);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t27, 0, 8);
    t26 = (t27 + 4);
    t30 = (t20 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (t21 >> 8);
    *((unsigned int *)t27) = t22;
    t23 = *((unsigned int *)t30);
    t24 = (t23 >> 8);
    *((unsigned int *)t26) = t24;
    t25 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t25 & 255U);
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 255U);
    t31 = (t0 + 3040);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t28, 0, 8);
    t34 = (t28 + 4);
    t35 = (t33 + 4);
    t38 = *((unsigned int *)t33);
    t42 = (t38 >> 16);
    *((unsigned int *)t28) = t42;
    t45 = *((unsigned int *)t35);
    t47 = (t45 >> 16);
    *((unsigned int *)t34) = t47;
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & 255U);
    t51 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t51 & 255U);
    t37 = (t0 + 3040);
    t41 = (t37 + 56U);
    t52 = *((char **)t41);
    memset(t29, 0, 8);
    t53 = (t29 + 4);
    t54 = (t52 + 4);
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 24);
    *((unsigned int *)t29) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 24);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & 255U);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng16, 7, t0, (char)118, t12, 32, (char)118, t3, 40, (char)118, t13, 8, (char)118, t27, 8, (char)118, t28, 8, (char)118, t29, 8);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB42;

}


extern void work_m_00000000001267431227_1746683258_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_34_1};
	static char *se[] = {(void *)sp_tskRxData,(void *)sp_tskTxData};
	xsi_register_didat("work_m_00000000001267431227_1746683258", "isim/tb_isim_beh.exe.sim/work/m_00000000001267431227_1746683258.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
