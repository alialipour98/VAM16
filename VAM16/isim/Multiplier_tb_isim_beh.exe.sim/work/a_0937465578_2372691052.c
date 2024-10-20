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
static const char *ng0 = "C:/Users/User/Documents/ISE_Project/Examples_2/Multiplier_tb.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_0937465578_2372691052_p_0(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    int64 t3;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;

LAB0:    t1 = (t0 + 2512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t4, 12, 8);
    t5 = (8U != 8U);
    if (t5 == 1)
        goto LAB8;

LAB9:    t6 = (t0 + 2896);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(48, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t4, 10, 8);
    t6 = (t4 + 12U);
    t11 = *((unsigned int *)t6);
    t11 = (t11 * 1U);
    t5 = (8U != t11);
    if (t5 == 1)
        goto LAB10;

LAB11:    t7 = (t0 + 2960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(50, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(8U, t11, 0);
    goto LAB11;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}


extern void work_a_0937465578_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0937465578_2372691052_p_0};
	xsi_register_didat("work_a_0937465578_2372691052", "isim/Multiplier_tb_isim_beh.exe.sim/work/a_0937465578_2372691052.didat");
	xsi_register_executes(pe);
}
