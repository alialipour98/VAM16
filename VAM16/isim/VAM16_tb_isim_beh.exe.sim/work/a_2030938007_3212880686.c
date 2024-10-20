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
static const char *ng0 = "C:/Users/User/Documents/ISE_Project/Examples_2/CAT_Reg.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2030938007_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(27, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4040);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2030938007_3212880686_p_1(char *t0)
{
    char t14[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    char *t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4056);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t3 = (t0 + 4200);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 16U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 5U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t9 = (4 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t3 + t12);
    t2 = *((unsigned char *)t1);
    t13 = (t2 == (unsigned char)3);
    if (t13 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t13 = (t2 == (unsigned char)3);
    if (t13 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t13 = (t2 == (unsigned char)3);
    if (t13 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB3;

LAB5:    xsi_set_current_line(37, ng0);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, 16, 5);
    t15 = (5U != 5U);
    if (t15 == 1)
        goto LAB8;

LAB9:    t5 = (t0 + 4264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    memcpy(t16, t4, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB6;

LAB8:    xsi_size_not_matching(5U, 5U, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t1 = (t0 + 6552U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t1);
    t17 = (31 - t9);
    t6 = (t0 + 2152U);
    t7 = *((char **)t6);
    t6 = (t0 + 6552U);
    t18 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t6);
    t19 = (16 - t18);
    t20 = (t19 - t17);
    t10 = (t20 * -1);
    t10 = (t10 + 1);
    t11 = (1U * t10);
    t15 = (t11 != 16U);
    if (t15 == 1)
        goto LAB13;

LAB14:    t8 = (t0 + 2152U);
    t16 = *((char **)t8);
    t8 = (t0 + 6552U);
    t21 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t16, t8);
    t22 = (31 - t21);
    t12 = (31 - t22);
    t23 = (1U * t12);
    t24 = (0U + t23);
    t25 = (t0 + 4328);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2152U);
    t31 = *((char **)t30);
    t30 = (t0 + 6552U);
    t32 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t31, t30);
    t33 = (31 - t32);
    t34 = (t0 + 2152U);
    t35 = *((char **)t34);
    t34 = (t0 + 6552U);
    t36 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t35, t34);
    t37 = (16 - t36);
    t38 = (t37 - t33);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t40 = (1U * t39);
    memcpy(t29, t4, t40);
    t41 = (t0 + 2152U);
    t42 = *((char **)t41);
    t41 = (t0 + 6552U);
    t43 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t42, t41);
    t44 = (31 - t43);
    t45 = (t0 + 2152U);
    t46 = *((char **)t45);
    t45 = (t0 + 6552U);
    t47 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t46, t45);
    t48 = (16 - t47);
    t49 = (t48 - t44);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t51 = (1U * t50);
    xsi_driver_first_trans_delta(t25, t24, t51, 0LL);
    goto LAB11;

LAB13:    xsi_size_not_matching(t11, 16U, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(43, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t4 = t1;
    memset(t4, (unsigned char)2, 32U);
    t5 = (t0 + 4328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    memcpy(t16, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    goto LAB16;

}


extern void work_a_2030938007_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2030938007_3212880686_p_0,(void *)work_a_2030938007_3212880686_p_1};
	xsi_register_didat("work_a_2030938007_3212880686", "isim/VAM16_tb_isim_beh.exe.sim/work/a_2030938007_3212880686.didat");
	xsi_register_executes(pe);
}
