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
static const char *ng0 = "C:/Users/Student/Desktop/section6/lab2/significand.v";
static int ng1[] = {11, 0};
static int ng2[] = {3, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {2048U, 0U};
static unsigned int ng7[] = {15U, 0U};
static int ng8[] = {4, 0};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {7U, 0U};



static void Always_39_0(char *t0)
{
    char t7[8];
    char t11[8];
    char t19[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t20;
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t4, 32, t6, 4);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2408);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t9, 32, 1);
    t10 = (t0 + 2088);
    t12 = (t0 + 2088);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2408);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t9, 32, t10, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t11, 32, 1);
    t12 = (t0 + 2088);
    t13 = (t0 + 2088);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t19, t15, 2, t16, 32, 1);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2408);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t9, 32, t10, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t11, 32, 1);
    t12 = (t0 + 2088);
    t13 = (t0 + 2088);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t19, t15, 2, t16, 32, 1);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2408);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t9, 32, t10, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t11, 32, 1);
    t12 = (t0 + 2088);
    t13 = (t0 + 2088);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t19, t15, 2, t16, 32, 1);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t17 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t2);
    t22 = (t17 ^ t21);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t5);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB17;

LAB14:    if (t29 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t7) = 1;

LAB17:    t8 = (t7 + 4);
    t32 = *((unsigned int *)t8);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2408);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t9, 32, t10, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t11, 32, 1);
    t12 = ((char*)((ng9)));
    memset(t19, 0, 8);
    t13 = (t7 + 4);
    t14 = (t12 + 4);
    t17 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t12);
    t22 = (t17 ^ t21);
    t23 = *((unsigned int *)t13);
    t24 = *((unsigned int *)t14);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t13);
    t28 = *((unsigned int *)t14);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB25;

LAB22:    if (t29 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t19) = 1;

LAB25:    t16 = (t19 + 4);
    t32 = *((unsigned int *)t16);
    t33 = (~(t32));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB20:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t10, t7, 0, *((unsigned int *)t11), 1);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t12, t7, 0, *((unsigned int *)t19), 1);
    goto LAB9;

LAB10:    xsi_vlogvar_assign_value(t12, t7, 0, *((unsigned int *)t19), 1);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t12, t7, 0, *((unsigned int *)t19), 1);
    goto LAB13;

LAB16:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(64, ng0);

LAB21:    xsi_set_current_line(65, ng0);
    t9 = ((char*)((ng7)));
    t10 = (t0 + 2088);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB20;

LAB24:    t15 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(69, ng0);

LAB29:    xsi_set_current_line(70, ng0);
    t20 = (t0 + 2088);
    t37 = (t20 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng7)));
    memset(t40, 0, 8);
    t41 = (t38 + 4);
    t42 = (t39 + 4);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB33;

LAB30:    if (t52 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t40) = 1;

LAB33:    t56 = (t40 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(86, ng0);

LAB47:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 4, t4, 4, t5, 4);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 4);

LAB36:    goto LAB28;

LAB32:    t55 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(71, ng0);

LAB37:    xsi_set_current_line(72, ng0);
    t62 = ((char*)((ng10)));
    t63 = (t0 + 2088);
    xsi_vlogvar_assign_value(t63, t62, 0, 0, 4);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t17 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t2);
    t22 = (t17 ^ t21);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t5);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB41;

LAB38:    if (t29 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t7) = 1;

LAB41:    t8 = (t7 + 4);
    t32 = *((unsigned int *)t8);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(80, ng0);

LAB46:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t3, 3, t2, 32);
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 3);

LAB44:    goto LAB36;

LAB40:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(75, ng0);

LAB45:    xsi_set_current_line(76, ng0);
    t9 = ((char*)((ng7)));
    t10 = (t0 + 2088);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB44;

}


extern void work_m_00000000002392115262_0301344823_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000002392115262_0301344823", "isim/FPCVT_tb_isim_beh.exe.sim/work/m_00000000002392115262_0301344823.didat");
	xsi_register_executes(pe);
}
