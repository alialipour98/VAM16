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
static const char *ng0 = "C:/Users/User/Documents/ISE_Project/Examples_2/Controller.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1208337864_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;

LAB0:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5568);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t3 = (t0 + 5680);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t9 = (t2 == (unsigned char)3);
    if (t9 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2928U);
    t4 = *((char **)t1);
    t1 = (t0 + 5680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_1208337864_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 5744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 5808);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 5872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 6000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 3048U);
    t3 = *((char **)t1);
    t6 = xsi_mem_cmp(t3, t2, 3U);
    if (t6 == 1)
        goto LAB3;

LAB9:    t1 = (t0 + 3168U);
    t4 = *((char **)t1);
    t7 = xsi_mem_cmp(t4, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB10:    t1 = (t0 + 3408U);
    t5 = *((char **)t1);
    t8 = xsi_mem_cmp(t5, t2, 3U);
    if (t8 == 1)
        goto LAB5;

LAB11:    t1 = (t0 + 3288U);
    t9 = *((char **)t1);
    t10 = xsi_mem_cmp(t9, t2, 3U);
    if (t10 == 1)
        goto LAB6;

LAB12:    t1 = (t0 + 3648U);
    t11 = *((char **)t1);
    t12 = xsi_mem_cmp(t11, t2, 3U);
    if (t12 == 1)
        goto LAB7;

LAB13:
LAB8:    xsi_set_current_line(71, ng0);

LAB2:    t1 = (t0 + 5584);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 5744);
    t13 = (t1 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 5808);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 5872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 5936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB14:;
}

static void work_a_1208337864_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 2928U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t6 = xsi_mem_cmp(t5, t2, 3U);
    if (t6 == 1)
        goto LAB4;

LAB13:    t1 = (t0 + 3168U);
    t7 = *((char **)t1);
    t8 = xsi_mem_cmp(t7, t2, 3U);
    if (t8 == 1)
        goto LAB5;

LAB14:    t1 = (t0 + 3408U);
    t9 = *((char **)t1);
    t10 = xsi_mem_cmp(t9, t2, 3U);
    if (t10 == 1)
        goto LAB6;

LAB15:    t1 = (t0 + 3288U);
    t11 = *((char **)t1);
    t12 = xsi_mem_cmp(t11, t2, 3U);
    if (t12 == 1)
        goto LAB7;

LAB16:    t1 = (t0 + 3528U);
    t13 = *((char **)t1);
    t14 = xsi_mem_cmp(t13, t2, 3U);
    if (t14 == 1)
        goto LAB8;

LAB17:    t1 = (t0 + 3768U);
    t15 = *((char **)t1);
    t16 = xsi_mem_cmp(t15, t2, 3U);
    if (t16 == 1)
        goto LAB9;

LAB18:    t1 = (t0 + 3648U);
    t17 = *((char **)t1);
    t18 = xsi_mem_cmp(t17, t2, 3U);
    if (t18 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(109, ng0);

LAB2:    t1 = (t0 + 5600);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1512U);
    t19 = *((char **)t1);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    if (t21 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t0 + 6064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t1);

LAB22:    goto LAB2;

LAB4:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = (t20 == (unsigned char)3);
    if (t21 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 6064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t1);

LAB25:    goto LAB2;

LAB5:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t1 = (t0 + 6064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t1 = (t0 + 6064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = (t20 == (unsigned char)3);
    if (t21 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t1 = (t0 + 6064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t1);

LAB28:    goto LAB2;

LAB8:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 3768U);
    t2 = *((char **)t1);
    t1 = (t0 + 6064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    t1 = (t0 + 6064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t0 + 6064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB20:;
LAB21:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3048U);
    t22 = *((char **)t1);
    t1 = (t0 + 6064);
    t23 = (t1 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t22, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 3048U);
    t3 = *((char **)t1);
    t1 = (t0 + 6064);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB27:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 3528U);
    t3 = *((char **)t1);
    t1 = (t0 + 6064);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB28;

}


extern void work_a_1208337864_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1208337864_3212880686_p_0,(void *)work_a_1208337864_3212880686_p_1,(void *)work_a_1208337864_3212880686_p_2};
	xsi_register_didat("work_a_1208337864_3212880686", "isim/VAM16_tb_isim_beh.exe.sim/work/a_1208337864_3212880686.didat");
	xsi_register_executes(pe);
}
