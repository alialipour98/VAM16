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
static const char *ng0 = "C:/Users/User/Documents/ISE_Project/Examples_2/VAM16_tb.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_2045698577_1035706684(char *, char *, char *, char *, int );


static void work_a_3867097911_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3867097911_2372691052_p_1(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4288);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4288);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 25, 16);
    t10 = (16U != 16U);
    if (t10 == 1)
        goto LAB16;

LAB17:    t4 = (t0 + 4352);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(80, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 411, 16);
    t4 = (t9 + 12U);
    t12 = *((unsigned int *)t4);
    t12 = (t12 * 1U);
    t10 = (16U != t12);
    if (t10 == 1)
        goto LAB18;

LAB19:    t6 = (t0 + 4416);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(16U, t12, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 25);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t5);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 7468U);
    t6 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t9, t4, t2, 32);
    t7 = (t9 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t10 = (32U != t12);
    if (t10 == 1)
        goto LAB32;

LAB33:    t8 = (t0 + 4544);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_delta(t8, 0U, 32U, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 7484U);
    t6 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t9, t4, t2, 32);
    t7 = (t9 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t10 = (32U != t12);
    if (t10 == 1)
        goto LAB34;

LAB35:    t8 = (t0 + 4544);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_delta(t8, 32U, 32U, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 4544);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t4, 32U);
    xsi_driver_first_trans_delta(t2, 64U, 32U, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4288);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_size_not_matching(32U, t12, 0);
    goto LAB33;

LAB34:    xsi_size_not_matching(32U, t12, 0);
    goto LAB35;

LAB36:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4288);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 421, 16);
    t4 = (t9 + 12U);
    t12 = *((unsigned int *)t4);
    t12 = (t12 * 1U);
    t10 = (16U != t12);
    if (t10 == 1)
        goto LAB40;

LAB41:    t6 = (t0 + 4352);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(98, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 411, 16);
    t4 = (t9 + 12U);
    t12 = *((unsigned int *)t4);
    t12 = (t12 * 1U);
    t10 = (16U != t12);
    if (t10 == 1)
        goto LAB42;

LAB43:    t6 = (t0 + 4416);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_size_not_matching(16U, t12, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(16U, t12, 0);
    goto LAB43;

LAB44:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 25);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t5);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 7468U);
    t6 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t9, t4, t2, 32);
    t7 = (t9 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t10 = (32U != t12);
    if (t10 == 1)
        goto LAB56;

LAB57:    t8 = (t0 + 4544);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_delta(t8, 96U, 32U, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 7484U);
    t6 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t9, t4, t2, 32);
    t7 = (t9 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t10 = (32U != t12);
    if (t10 == 1)
        goto LAB58;

LAB59:    t8 = (t0 + 4544);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_delta(t8, 128U, 32U, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 4544);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t4, 32U);
    xsi_driver_first_trans_delta(t2, 160U, 32U, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4288);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    xsi_size_not_matching(32U, t12, 0);
    goto LAB57;

LAB58:    xsi_size_not_matching(32U, t12, 0);
    goto LAB59;

LAB60:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4288);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(115, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 35, 16);
    t4 = (t9 + 12U);
    t12 = *((unsigned int *)t4);
    t12 = (t12 * 1U);
    t10 = (16U != t12);
    if (t10 == 1)
        goto LAB64;

LAB65:    t6 = (t0 + 4352);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(116, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 45, 16);
    t4 = (t9 + 12U);
    t12 = *((unsigned int *)t4);
    t12 = (t12 * 1U);
    t10 = (16U != t12);
    if (t10 == 1)
        goto LAB66;

LAB67:    t6 = (t0 + 4416);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    xsi_size_not_matching(16U, t12, 0);
    goto LAB65;

LAB66:    xsi_size_not_matching(16U, t12, 0);
    goto LAB67;

LAB68:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 25);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t5);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 7468U);
    t6 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t9, t4, t2, 32);
    t7 = (t9 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t10 = (32U != t12);
    if (t10 == 1)
        goto LAB80;

LAB81:    t8 = (t0 + 4544);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_delta(t8, 192U, 32U, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 7484U);
    t6 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t9, t4, t2, 32);
    t7 = (t9 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t10 = (32U != t12);
    if (t10 == 1)
        goto LAB82;

LAB83:    t8 = (t0 + 4544);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_delta(t8, 224U, 32U, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 4544);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t4, 32U);
    xsi_driver_first_trans_delta(t2, 256U, 32U, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4288);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    xsi_size_not_matching(32U, t12, 0);
    goto LAB81;

LAB82:    xsi_size_not_matching(32U, t12, 0);
    goto LAB83;

LAB84:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4288);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 500, 16);
    t4 = (t9 + 12U);
    t12 = *((unsigned int *)t4);
    t12 = (t12 * 1U);
    t10 = (16U != t12);
    if (t10 == 1)
        goto LAB88;

LAB89:    t6 = (t0 + 4352);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(134, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 718, 16);
    t4 = (t9 + 12U);
    t12 = *((unsigned int *)t4);
    t12 = (t12 * 1U);
    t10 = (16U != t12);
    if (t10 == 1)
        goto LAB90;

LAB91:    t6 = (t0 + 4416);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    xsi_size_not_matching(16U, t12, 0);
    goto LAB89;

LAB90:    xsi_size_not_matching(16U, t12, 0);
    goto LAB91;

LAB92:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t3);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 25);
    t2 = (t0 + 3648);
    xsi_process_wait(t2, t5);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

LAB100:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 7468U);
    t6 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t9, t4, t2, 32);
    t7 = (t9 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t10 = (32U != t12);
    if (t10 == 1)
        goto LAB104;

LAB105:    t8 = (t0 + 4544);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_delta(t8, 288U, 32U, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 7484U);
    t6 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t9, t4, t2, 32);
    t7 = (t9 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t10 = (32U != t12);
    if (t10 == 1)
        goto LAB106;

LAB107:    t8 = (t0 + 4544);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_delta(t8, 320U, 32U, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 4544);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t4, 32U);
    xsi_driver_first_trans_delta(t2, 352U, 32U, 0LL);
    xsi_set_current_line(148, ng0);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    xsi_size_not_matching(32U, t12, 0);
    goto LAB105;

LAB106:    xsi_size_not_matching(32U, t12, 0);
    goto LAB107;

LAB108:    goto LAB2;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

}


extern void work_a_3867097911_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3867097911_2372691052_p_0,(void *)work_a_3867097911_2372691052_p_1};
	xsi_register_didat("work_a_3867097911_2372691052", "isim/VAM16_tb_isim_beh.exe.sim/work/a_3867097911_2372691052.didat");
	xsi_register_executes(pe);
}
