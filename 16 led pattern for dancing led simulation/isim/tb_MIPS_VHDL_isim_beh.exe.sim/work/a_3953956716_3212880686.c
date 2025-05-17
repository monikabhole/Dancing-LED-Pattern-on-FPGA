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
static const char *ng0 = "C:/Users/ASUS/Desktop/vhdl/new code mips/CO Assignment ENT308 Sources 2019-20/sources_1/imports/IM_vhdl.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_3953956716_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (15 - 4);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3296);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 3200);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3953956716_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6288);
    t4 = ((IEEE_P_2592010699) + 4024);
    t5 = xsi_vhdl_lessthan(t4, t2, 16U, t1, 16U);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = (t0 + 6304);
    t22 = (t0 + 3360);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 16U);
    xsi_driver_first_trans_fast_port(t22);

LAB2:    t27 = (t0 + 3216);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 1648U);
    t7 = *((char **)t6);
    t6 = (t0 + 1352U);
    t8 = *((char **)t6);
    t6 = (t0 + 5956U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t6);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t9);
    t12 = (16U * t11);
    t13 = (0 + t12);
    t14 = (t7 + t13);
    t15 = (t0 + 3360);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t14, 16U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_3953956716_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3953956716_3212880686_p_0,(void *)work_a_3953956716_3212880686_p_1};
	xsi_register_didat("work_a_3953956716_3212880686", "isim/tb_MIPS_VHDL_isim_beh.exe.sim/work/a_3953956716_3212880686.didat");
	xsi_register_executes(pe);
}
