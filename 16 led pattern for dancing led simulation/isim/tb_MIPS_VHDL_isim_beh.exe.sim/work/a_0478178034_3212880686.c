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
static const char *ng0 = "C:/Users/ASUS/Desktop/vhdl/new code mips/CO Assignment ENT308 Sources 2019-20/sources_1/imports/RF.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0478178034_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB21;

LAB22:
LAB3:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t12 = (1 - 0);
    t14 = (t12 * 1);
    t15 = (16U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t5 = (t0 + 4784);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);
    t1 = (t0 + 4608);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 8712);
    t6 = (16U != 16U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 4720);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_delta(t7, 0U, 16U, 0LL);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 8728);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB7;

LAB8:    t5 = (t0 + 4720);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 16U, 16U, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 8744);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB9;

LAB10:    t5 = (t0 + 4720);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 32U, 16U, 0LL);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 8760);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 4720);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 48U, 16U, 0LL);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 8776);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB13;

LAB14:    t5 = (t0 + 4720);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 64U, 16U, 0LL);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 8792);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB15;

LAB16:    t5 = (t0 + 4720);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 80U, 16U, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 8808);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB17;

LAB18:    t5 = (t0 + 4720);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 96U, 16U, 0LL);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 8824);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB19;

LAB20:    t5 = (t0 + 4720);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 112U, 16U, 0LL);
    goto LAB3;

LAB5:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB10;

LAB11:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB3;

LAB23:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1672U);
    t7 = *((char **)t2);
    t2 = (t0 + 1512U);
    t8 = *((char **)t2);
    t2 = (t0 + 8404U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t2);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    t15 = (16U * t14);
    t16 = (0U + t15);
    t9 = (t0 + 4720);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 16U);
    xsi_driver_first_trans_delta(t9, t16, 16U, 0LL);
    goto LAB24;

}

static void work_a_0478178034_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 8840);
    t4 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t15 = (t0 + 2632U);
    t16 = *((char **)t15);
    t15 = (t0 + 1832U);
    t17 = *((char **)t15);
    t15 = (t0 + 8436U);
    t18 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t17, t15);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t18);
    t21 = (16U * t20);
    t22 = (0 + t21);
    t23 = (t16 + t22);
    t24 = (t0 + 4848);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t23, 16U);
    xsi_driver_first_trans_fast_port(t24);

LAB2:    t29 = (t0 + 4624);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 8843);
    t10 = (t0 + 4848);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 3U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_0478178034_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 8859);
    t4 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t15 = (t0 + 2632U);
    t16 = *((char **)t15);
    t15 = (t0 + 2152U);
    t17 = *((char **)t15);
    t15 = (t0 + 8468U);
    t18 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t17, t15);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t18);
    t21 = (16U * t20);
    t22 = (0 + t21);
    t23 = (t16 + t22);
    t24 = (t0 + 4912);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t23, 16U);
    xsi_driver_first_trans_fast_port(t24);

LAB2:    t29 = (t0 + 4640);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 8862);
    t10 = (t0 + 4912);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 3U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}


extern void work_a_0478178034_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0478178034_3212880686_p_0,(void *)work_a_0478178034_3212880686_p_1,(void *)work_a_0478178034_3212880686_p_2};
	xsi_register_didat("work_a_0478178034_3212880686", "isim/tb_MIPS_VHDL_isim_beh.exe.sim/work/a_0478178034_3212880686.didat");
	xsi_register_executes(pe);
}
