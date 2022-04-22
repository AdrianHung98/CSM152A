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
static const char *ng3 = "%b";
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {0, 0};
static const char *ng7 = "\n";



static void Always_38_0(char *t0)
{
    char t7[8];
    char t11[8];
    char t24[8];
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t4, 32, t6, 4);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 12);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
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

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t9, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t19 = (t17 >> 3);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t6);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
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
    t16 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t24, t15, 2, t16, 32, 1);
    t25 = (t24 + 4);
    t17 = *((unsigned int *)t25);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t9, 32, t10, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t11, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t19 = (t17 >> 2);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t6);
    t22 = (t21 >> 2);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t9, 32, t10, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t11, 32, 1);
    t12 = (t0 + 2088);
    t13 = (t0 + 2088);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t24, t15, 2, t16, 32, 1);
    t25 = (t24 + 4);
    t17 = *((unsigned int *)t25);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t9, 32, t10, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t11, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t19 = (t17 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t6);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
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
    t16 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t24, t15, 2, t16, 32, 1);
    t25 = (t24 + 4);
    t17 = *((unsigned int *)t25);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t9, 32, t10, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t11, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t19 = (t17 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t6);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t7, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2888);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t9, 32, t10, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t11, 32, 1);
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t10, t7, 0, *((unsigned int *)t11), 1);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t12, t7, 0, *((unsigned int *)t24), 1);
    goto LAB9;

LAB10:    xsi_vlogvar_assign_value(t12, t7, 0, *((unsigned int *)t24), 1);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t12, t7, 0, *((unsigned int *)t24), 1);
    goto LAB13;

}


extern void work_m_00000000003556869620_0301344823_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000003556869620_0301344823", "isim/significand_tb_isim_beh.exe.sim/work/m_00000000003556869620_0301344823.didat");
	xsi_register_executes(pe);
}
