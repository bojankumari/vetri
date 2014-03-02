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

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/local/scratch-1/nm525/workbench/ppon/vetri/lib/hw/std/pcores/nf10_axi_sim_transactor_v1_10_a/simhdl/vhdl/nf10_axi_sim_transactor.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;
extern char *STD_TEXTIO;
extern char *NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550;
static const char *ng5 = "Function result_str ended without a return statement";
extern char *IEEE_P_3564397177;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
void ieee_p_3564397177_sub_2258168291854845616_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(char *, char *, char *, char *);
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(char *, char *, char *, char *);
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523(char *, char *, char *, char *, char *);
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(char *, char *, char *, char *, unsigned int , unsigned int , char *, char *, char *);
unsigned char nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_9052813945161223267_355431523(char *, unsigned char );


static void nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(129, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 13632);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 13344);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

void nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418(char *t0, char *t1)
{
    char *t4;
    char *t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;

LAB0:    t4 = (t0 + 28384U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 13696);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 28384U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast(t9);
    t4 = (t0 + 28400U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 13760);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 28400U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast(t9);
    t4 = (t0 + 28416U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 13824);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 28416U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast(t9);
    t4 = (t0 + 13888);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    t4 = (t0 + 28480U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 13952);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 28480U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast(t9);
    t4 = (t0 + 14016);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);

LAB1:    return;
}

void nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(char *t0, char *t1, int t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    int t32;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 824);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    *((int *)t8) = t2;
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;

LAB2:    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t15 = (t14 != 0);
    if (t15 != 0)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t12 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t12, -1, -1);

LAB9:    t16 = (t1 + 224U);
    t16 = *((char **)t16);
    xsi_wp_set_status(t16, 1);
    t17 = (t1 + 88U);
    t18 = *((char **)t17);
    t19 = (t18 + 1888U);
    *((unsigned int *)t19) = 1U;
    t20 = (t1 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t25 = (t24 + 1888U);
    t26 = *((unsigned int *)t25);
    if (t26 == 1)
        goto LAB10;

LAB11:    t27 = (t1 + 88U);
    t28 = *((char **)t27);
    t29 = (t28 + 1888U);
    *((unsigned int *)t29) = 3U;

LAB7:
LAB8:    t30 = (t0 + 992U);
    t31 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t30, 0U, 0U);
    if (t31 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:;
LAB6:    xsi_remove_dynamic_wait(t1, t12);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t14 = *((int *)t7);
    t32 = (t14 - 1);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t32;
    goto LAB2;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

}

static void nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_p_1(char *t0)
{
    char t13[16];
    char t16[16];
    char t18[16];
    char t25[16];
    char t27[16];
    char t46[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int64 t11;
    int64 t12;
    char *t14;
    char *t15;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;
    char *t36;
    unsigned char t37;
    unsigned char t38;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    unsigned char t42;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    unsigned int t49;
    char *t50;

LAB0:    t1 = (t0 + 12528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 10);
    xsi_set_current_line(173, ng0);

LAB4:    t2 = (t0 + 4712U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 14080);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 14144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(181, ng0);

LAB8:    t2 = (t0 + 10696U);
    t4 = std_textio_endfile(t2);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(304, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(305, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 29696);
    t8 = (t13 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (0 - 1);
    t22 = (t10 * 1);
    t22 = (t22 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t22;
    std_textio_write7(STD_TEXTIO, t2, t3, t6, t13, (unsigned char)0, 0);
    xsi_set_current_line(306, ng0);
    t2 = (t0 + 12336);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 11080U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(307, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 29696);
    t8 = (t0 + 29714);
    t15 = ((STD_STANDARD) + 984);
    t17 = (t0 + 28224U);
    t19 = (t16 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 19;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t10 = (19 - 1);
    t22 = (t10 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t14 = xsi_base_array_concat(t14, t13, t15, (char)97, t6, t17, (char)97, t8, t16, (char)101);
    t20 = ((STD_STANDARD) + 384);
    t11 = xsi_get_sim_current_time();
    t12 = (1 * 10000LL);
    t21 = (t11 / t12);
    t23 = xsi_int_to_mem(t21);
    t24 = xsi_string_variable_get_image(t18, t20, t23);
    t28 = ((STD_STANDARD) + 984);
    t26 = xsi_base_array_concat(t26, t25, t28, (char)97, t14, t13, (char)97, t24, t18, (char)101);
    t29 = (t0 + 29733);
    t45 = ((STD_STANDARD) + 984);
    t47 = (t46 + 0U);
    t48 = (t47 + 0U);
    *((int *)t48) = 1;
    t48 = (t47 + 4U);
    *((int *)t48) = 4;
    t48 = (t47 + 8U);
    *((int *)t48) = 1;
    t30 = (4 - 1);
    t22 = (t30 * 1);
    t22 = (t22 + 1);
    t48 = (t47 + 12U);
    *((unsigned int *)t48) = t22;
    t44 = xsi_base_array_concat(t44, t27, t45, (char)97, t26, t25, (char)97, t29, t46, (char)101);
    t22 = (18U + 19U);
    t48 = (t18 + 12U);
    t31 = *((unsigned int *)t48);
    t32 = (t22 + t31);
    t49 = (t32 + 4U);
    t50 = (char *)alloca(t49);
    memcpy(t50, t44, t49);
    std_textio_write7(STD_TEXTIO, t2, t3, t50, t27, (unsigned char)0, 0);
    xsi_set_current_line(308, ng0);
    t2 = (t0 + 12336);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 11080U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(309, ng0);

LAB121:    *((char **)t1) = &&LAB122;

LAB1:    return;
LAB5:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB4;

LAB6:;
LAB9:    xsi_set_current_line(183, ng0);
    t3 = (t0 + 12336);
    t6 = (t0 + 10696U);
    t7 = (t0 + 11080U);
    std_textio_readline(STD_TEXTIO, t3, t6, t7);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (t0 + 9048U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, t8);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 9048U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB8;

LAB12:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 8928U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)66);
    if (t5 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 8928U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)78);
    if (t5 != 0)
        goto LAB40;

LAB41:    t2 = (t0 + 8928U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)83);
    if (t5 != 0)
        goto LAB46;

LAB47:    t2 = (t0 + 8928U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)64);
    if (t5 != 0)
        goto LAB52;

LAB53:    t2 = (t0 + 8928U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)82);
    if (t5 != 0)
        goto LAB58;

LAB59:    t2 = (t0 + 8928U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)87);
    if (t5 != 0)
        goto LAB64;

LAB65:    xsi_set_current_line(249, ng0);
    t2 = (t0 + 14080);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(251, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 4832U);
    t7 = (t0 + 13696);
    t8 = (t0 + 28384U);
    t9 = (t0 + 9168U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(252, ng0);
    t2 = (t0 + 9168U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    t34 = nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_9052813945161223267_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t5);
    t2 = (t0 + 9288U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((unsigned char *)t2) = t34;
    xsi_set_current_line(253, ng0);
    t2 = (t0 + 9288U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 13888);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(254, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 4992U);
    t7 = (t0 + 13760);
    t8 = (t0 + 28400U);
    t9 = (t0 + 9168U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 9288U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB70;

LAB72:
LAB71:    xsi_set_current_line(261, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 5152U);
    t7 = (t0 + 13824);
    t8 = (t0 + 28416U);
    t9 = (t0 + 9168U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(264, ng0);
    t2 = (t0 + 9288U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB75;

LAB77:
LAB76:    xsi_set_current_line(269, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 6272U);
    t7 = (t0 + 13952);
    t8 = (t0 + 28480U);
    t9 = (t0 + 9168U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 9168U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    t34 = nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_9052813945161223267_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t5);
    t2 = (t0 + 9408U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((unsigned char *)t2) = t34;
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 9408U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 14016);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    xsi_set_current_line(275, ng0);

LAB80:    t2 = (t0 + 9288U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 5512U);
    t6 = *((char **)t2);
    t5 = *((unsigned char *)t6);
    t34 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t35 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t4, t34);
    t2 = (t0 + 9408U);
    t7 = *((char **)t2);
    t37 = *((unsigned char *)t7);
    t2 = (t0 + 6632U);
    t8 = *((char **)t2);
    t38 = *((unsigned char *)t8);
    t39 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t38);
    t40 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t37, t39);
    t41 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t35, t40);
    t42 = (t41 == (unsigned char)3);
    if (t42 != 0)
        goto LAB81;

LAB83:    xsi_set_current_line(278, ng0);
    t2 = (t0 + 13888);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(279, ng0);
    t2 = (t0 + 14016);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(281, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 8928U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)46);
    if (t5 != 0)
        goto LAB84;

LAB86:    t2 = (t0 + 8928U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)44);
    if (t5 != 0)
        goto LAB115;

LAB116:    xsi_set_current_line(294, ng0);
    if ((unsigned char)0 == 0)
        goto LAB117;

LAB118:
LAB85:    xsi_set_current_line(298, ng0);
    t2 = (t0 + 14080);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB14:    xsi_set_current_line(300, ng0);
    t2 = (t0 + 11080U);
    xsi_access_variable_deallocate(t2);
    goto LAB8;

LAB10:;
LAB13:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 12336);
    t6 = (t0 + 11080U);
    t7 = (t0 + 8928U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 8808U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12336);
    xsi_process_wait(t2, t12);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = ((STD_STANDARD) + 384);
    t11 = xsi_get_sim_current_time();
    t12 = (1 * 10000LL);
    t10 = (t11 / t12);
    t7 = xsi_int_to_mem(t10);
    t8 = xsi_string_variable_get_image(t13, t6, t7);
    t9 = (t0 + 29384);
    t17 = ((STD_STANDARD) + 984);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 4;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (4 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t8, t13, (char)97, t9, t18, (char)101);
    t20 = (t0 + 29388);
    t26 = ((STD_STANDARD) + 984);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 1;
    t29 = (t28 + 4U);
    *((int *)t29) = 33;
    t29 = (t28 + 8U);
    *((int *)t29) = 1;
    t30 = (33 - 1);
    t22 = (t30 * 1);
    t22 = (t22 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t22;
    t24 = xsi_base_array_concat(t24, t25, t26, (char)97, t15, t16, (char)97, t20, t27, (char)101);
    t29 = (t13 + 12U);
    t22 = *((unsigned int *)t29);
    t31 = (t22 + 4U);
    t32 = (t31 + 33U);
    t33 = (char *)alloca(t32);
    memcpy(t33, t24, t32);
    std_textio_write7(STD_TEXTIO, t2, t3, t33, t25, (unsigned char)0, 0);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 12336);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 11080U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(195, ng0);
    t11 = (1 * 10000LL);
    t2 = (t0 + 12336);
    xsi_process_wait(t2, t11);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 14144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(197, ng0);

LAB24:    t2 = (t0 + 4552U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(200, ng0);
    t11 = (1 * 10000LL);
    t2 = (t0 + 12336);
    xsi_process_wait(t2, t11);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB25:    xsi_set_current_line(198, ng0);

LAB30:    t2 = (t0 + 13360);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB26:;
LAB28:    t6 = (t0 + 13360);
    *((int *)t6) = 0;
    goto LAB24;

LAB29:    t6 = (t0 + 4552U);
    t7 = *((char **)t6);
    t34 = *((unsigned char *)t7);
    t35 = (t34 == (unsigned char)3);
    if (t35 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 14144);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(202, ng0);

LAB38:    t2 = (t0 + 13376);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t3 = (t0 + 13376);
    *((int *)t3) = 0;
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = ((STD_STANDARD) + 384);
    t11 = xsi_get_sim_current_time();
    t12 = (1 * 10000LL);
    t10 = (t11 / t12);
    t7 = xsi_int_to_mem(t10);
    t8 = xsi_string_variable_get_image(t13, t6, t7);
    t9 = (t0 + 29421);
    t17 = ((STD_STANDARD) + 984);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 4;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (4 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t8, t13, (char)97, t9, t18, (char)101);
    t20 = (t0 + 29425);
    t26 = ((STD_STANDARD) + 984);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 1;
    t29 = (t28 + 4U);
    *((int *)t29) = 33;
    t29 = (t28 + 8U);
    *((int *)t29) = 1;
    t30 = (33 - 1);
    t22 = (t30 * 1);
    t22 = (t22 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t22;
    t24 = xsi_base_array_concat(t24, t25, t26, (char)97, t15, t16, (char)97, t20, t27, (char)101);
    t29 = (t13 + 12U);
    t22 = *((unsigned int *)t29);
    t31 = (t22 + 4U);
    t32 = (t31 + 33U);
    t36 = (char *)alloca(t32);
    memcpy(t36, t24, t32);
    std_textio_write7(STD_TEXTIO, t2, t3, t36, t25, (unsigned char)0, 0);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 12336);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 11080U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    goto LAB14;

LAB37:    t3 = (t0 + 4552U);
    t6 = *((char **)t3);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 12336);
    t6 = (t0 + 11080U);
    t7 = (t0 + 8928U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8448U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 8448U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12336);
    xsi_process_wait(t2, t12);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB42:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB14;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 12336);
    t6 = (t0 + 11080U);
    t7 = (t0 + 8928U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 8808U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12336);
    xsi_process_wait(t2, t12);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB48:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB14;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 12336);
    t6 = (t0 + 11080U);
    t7 = (t0 + 8928U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 8808U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12336);
    xsi_process_wait(t2, t12);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB54:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB14;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

LAB58:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 12336);
    t6 = (t0 + 11080U);
    t7 = (t0 + 8928U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 29458);
    t6 = ((STD_STANDARD) + 384);
    t11 = xsi_get_sim_current_time();
    t12 = (1 * 10000LL);
    t10 = (t11 / t12);
    t7 = xsi_int_to_mem(t10);
    t8 = xsi_string_variable_get_image(t13, t6, t7);
    t14 = ((STD_STANDARD) + 984);
    t15 = (t18 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 1;
    t17 = (t15 + 4U);
    *((int *)t17) = 8;
    t17 = (t15 + 8U);
    *((int *)t17) = 1;
    t21 = (8 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t22;
    t9 = xsi_base_array_concat(t9, t16, t14, (char)97, t2, t18, (char)97, t8, t13, (char)101);
    t17 = (t0 + 29466);
    t23 = ((STD_STANDARD) + 984);
    t24 = (t27 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = 1;
    t26 = (t24 + 4U);
    *((int *)t26) = 4;
    t26 = (t24 + 8U);
    *((int *)t26) = 1;
    t30 = (4 - 1);
    t22 = (t30 * 1);
    t22 = (t22 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t22;
    t20 = xsi_base_array_concat(t20, t25, t23, (char)97, t9, t16, (char)97, t17, t27, (char)101);
    t26 = (t13 + 12U);
    t22 = *((unsigned int *)t26);
    t31 = (8U + t22);
    t32 = (t31 + 4U);
    xsi_report(t20, t32, 0);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 29470);
    t8 = (t13 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 14;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (14 - 1);
    t22 = (t10 * 1);
    t22 = (t22 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t22;
    std_textio_write7(STD_TEXTIO, t2, t3, t6, t13, (unsigned char)0, 0);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 12336);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 11080U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 8808U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12336);
    xsi_process_wait(t2, t12);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB60:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB14;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 12336);
    t6 = (t0 + 11080U);
    t7 = (t0 + 8928U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 8808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 29484);
    t6 = ((STD_STANDARD) + 384);
    t11 = xsi_get_sim_current_time();
    t12 = (1 * 10000LL);
    t10 = (t11 / t12);
    t7 = xsi_int_to_mem(t10);
    t8 = xsi_string_variable_get_image(t13, t6, t7);
    t14 = ((STD_STANDARD) + 984);
    t15 = (t18 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 1;
    t17 = (t15 + 4U);
    *((int *)t17) = 8;
    t17 = (t15 + 8U);
    *((int *)t17) = 1;
    t21 = (8 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t22;
    t9 = xsi_base_array_concat(t9, t16, t14, (char)97, t2, t18, (char)97, t8, t13, (char)101);
    t17 = (t0 + 29492);
    t23 = ((STD_STANDARD) + 984);
    t24 = (t27 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = 1;
    t26 = (t24 + 4U);
    *((int *)t26) = 4;
    t26 = (t24 + 8U);
    *((int *)t26) = 1;
    t30 = (4 - 1);
    t22 = (t30 * 1);
    t22 = (t22 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t22;
    t20 = xsi_base_array_concat(t20, t25, t23, (char)97, t9, t16, (char)97, t17, t27, (char)101);
    t26 = (t13 + 12U);
    t22 = *((unsigned int *)t26);
    t31 = (8U + t22);
    t32 = (t31 + 4U);
    xsi_report(t20, t32, 0);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 12336);
    t3 = (t0 + 11080U);
    t6 = (t0 + 29496);
    t8 = (t13 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 15;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (15 - 1);
    t22 = (t10 * 1);
    t22 = (t22 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t22;
    std_textio_write7(STD_TEXTIO, t2, t3, t6, t13, (unsigned char)0, 0);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 12336);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 11080U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(245, ng0);
    t2 = (t0 + 8808U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12336);
    xsi_process_wait(t2, t12);

LAB68:    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB66:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB14;

LAB67:    goto LAB66;

LAB69:    goto LAB67;

LAB70:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 9168U);
    t6 = *((char **)t2);
    t34 = *((unsigned char *)t6);
    t35 = (!(t34));
    if (t35 == 0)
        goto LAB73;

LAB74:    goto LAB71;

LAB73:    t2 = (t0 + 29511);
    t8 = (t0 + 29529);
    t15 = ((STD_STANDARD) + 984);
    t17 = (t0 + 28224U);
    t19 = (t16 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 39;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t10 = (39 - 1);
    t22 = (t10 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t14 = xsi_base_array_concat(t14, t13, t15, (char)97, t2, t17, (char)97, t8, t16, (char)101);
    t22 = (18U + 39U);
    xsi_report(t14, t22, (unsigned char)1);
    goto LAB74;

LAB75:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 9168U);
    t6 = *((char **)t2);
    t34 = *((unsigned char *)t6);
    t35 = (!(t34));
    if (t35 == 0)
        goto LAB78;

LAB79:    goto LAB76;

LAB78:    t2 = (t0 + 29568);
    t8 = (t0 + 29586);
    t15 = ((STD_STANDARD) + 984);
    t17 = (t0 + 28224U);
    t19 = (t16 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 51;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t10 = (51 - 1);
    t22 = (t10 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t14 = xsi_base_array_concat(t14, t13, t15, (char)97, t2, t17, (char)97, t8, t16, (char)101);
    t22 = (18U + 51U);
    xsi_report(t14, t22, (unsigned char)1);
    goto LAB79;

LAB81:    xsi_set_current_line(276, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB80;

LAB82:;
LAB84:    xsi_set_current_line(283, ng0);

LAB87:    t2 = (t0 + 9288U);
    t6 = *((char **)t2);
    t34 = *((unsigned char *)t6);
    t2 = (t0 + 9408U);
    t7 = *((char **)t2);
    t35 = *((unsigned char *)t7);
    t37 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t34, t35);
    t38 = (t37 == (unsigned char)3);
    if (t38 != 0)
        goto LAB88;

LAB90:    goto LAB85;

LAB88:    xsi_set_current_line(284, ng0);
    t2 = (t0 + 12336);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    xsi_set_current_line(285, ng0);
    t2 = (t0 + 6152U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t34 = (t5 == (unsigned char)3);
    if (t34 == 1)
        goto LAB94;

LAB95:    t4 = (unsigned char)0;

LAB96:    if (t4 != 0)
        goto LAB91;

LAB93:
LAB92:    xsi_set_current_line(288, ng0);
    t2 = (t0 + 7272U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t34 = (t5 == (unsigned char)3);
    if (t34 == 1)
        goto LAB106;

LAB107:    t4 = (unsigned char)0;

LAB108:    if (t4 != 0)
        goto LAB103;

LAB105:
LAB104:    goto LAB87;

LAB89:;
LAB91:    xsi_set_current_line(286, ng0);
    t9 = (t0 + 9288U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    *((unsigned char *)t9) = (unsigned char)2;
    goto LAB92;

LAB94:    t2 = (t0 + 5672U);
    t6 = *((char **)t2);
    t2 = (t0 + 4872U);
    t7 = *((char **)t2);
    t35 = 1;
    if (32U == 32U)
        goto LAB97;

LAB98:    t35 = 0;

LAB99:    t4 = t35;
    goto LAB96;

LAB97:    t22 = 0;

LAB100:    if (t22 < 32U)
        goto LAB101;
    else
        goto LAB99;

LAB101:    t2 = (t6 + t22);
    t8 = (t7 + t22);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB98;

LAB102:    t22 = (t22 + 1);
    goto LAB100;

LAB103:    xsi_set_current_line(289, ng0);
    t9 = (t0 + 9408U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    *((unsigned char *)t9) = (unsigned char)2;
    goto LAB104;

LAB106:    t2 = (t0 + 6792U);
    t6 = *((char **)t2);
    t2 = (t0 + 6312U);
    t7 = *((char **)t2);
    t35 = 1;
    if (32U == 32U)
        goto LAB109;

LAB110:    t35 = 0;

LAB111:    t4 = t35;
    goto LAB108;

LAB109:    t22 = 0;

LAB112:    if (t22 < 32U)
        goto LAB113;
    else
        goto LAB111;

LAB113:    t2 = (t6 + t22);
    t8 = (t7 + t22);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB110;

LAB114:    t22 = (t22 + 1);
    goto LAB112;

LAB115:    goto LAB85;

LAB117:    t2 = (t0 + 29637);
    t7 = (t0 + 29655);
    t14 = ((STD_STANDARD) + 984);
    t15 = (t0 + 28224U);
    t17 = (t16 + 0U);
    t19 = (t17 + 0U);
    *((int *)t19) = 1;
    t19 = (t17 + 4U);
    *((int *)t19) = 41;
    t19 = (t17 + 8U);
    *((int *)t19) = 1;
    t10 = (41 - 1);
    t22 = (t10 * 1);
    t22 = (t22 + 1);
    t19 = (t17 + 12U);
    *((unsigned int *)t19) = t22;
    t9 = xsi_base_array_concat(t9, t13, t14, (char)97, t2, t15, (char)97, t7, t16, (char)101);
    t22 = (18U + 41U);
    xsi_report(t9, t22, (unsigned char)3);
    goto LAB118;

LAB119:    goto LAB2;

LAB120:    goto LAB119;

LAB122:    goto LAB120;

}

void nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(char *t0, char *t1, int t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    int t32;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 824);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    *((int *)t8) = t2;
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;

LAB2:    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t15 = (t14 != 0);
    if (t15 != 0)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t12 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t12, -1, -1);

LAB9:    t16 = (t1 + 224U);
    t16 = *((char **)t16);
    xsi_wp_set_status(t16, 1);
    t17 = (t1 + 88U);
    t18 = *((char **)t17);
    t19 = (t18 + 1888U);
    *((unsigned int *)t19) = 1U;
    t20 = (t1 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t25 = (t24 + 1888U);
    t26 = *((unsigned int *)t25);
    if (t26 == 1)
        goto LAB10;

LAB11:    t27 = (t1 + 88U);
    t28 = *((char **)t27);
    t29 = (t28 + 1888U);
    *((unsigned int *)t29) = 3U;

LAB7:
LAB8:    t30 = (t0 + 992U);
    t31 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t30, 0U, 0U);
    if (t31 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:;
LAB6:    xsi_remove_dynamic_wait(t1, t12);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t14 = *((int *)t7);
    t32 = (t14 - 1);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t32;
    goto LAB2;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

}

static void nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_p_2(char *t0)
{
    char t17[16];
    char t20[16];
    char t25[16];
    char t29[16];
    char t34[16];
    char t36[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int64 t11;
    int64 t12;
    int t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t33;
    char *t35;
    char *t37;
    char *t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t1 = (t0 + 12776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(339, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 10);
    xsi_set_current_line(340, ng0);

LAB4:    t2 = (t0 + 4712U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(345, ng0);

LAB8:    t2 = (t0 + 10800U);
    t4 = std_textio_endfile(t2);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(418, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 29854);
    t8 = (t17 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (0 - 1);
    t23 = (t10 * 1);
    t23 = (t23 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t23;
    std_textio_write7(STD_TEXTIO, t2, t3, t6, t17, (unsigned char)0, 0);
    xsi_set_current_line(419, ng0);
    t2 = (t0 + 12584);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 11152U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(420, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 29854);
    t8 = (t0 + 29874);
    t18 = ((STD_STANDARD) + 984);
    t19 = (t0 + 28240U);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 1;
    t22 = (t21 + 4U);
    *((int *)t22) = 19;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t10 = (19 - 1);
    t23 = (t10 * 1);
    t23 = (t23 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t23;
    t14 = xsi_base_array_concat(t14, t17, t18, (char)97, t6, t19, (char)97, t8, t20, (char)101);
    t22 = ((STD_STANDARD) + 384);
    t11 = xsi_get_sim_current_time();
    t12 = (1 * 10000LL);
    t13 = (t11 / t12);
    t26 = xsi_int_to_mem(t13);
    t27 = xsi_string_variable_get_image(t25, t22, t26);
    t30 = ((STD_STANDARD) + 984);
    t28 = xsi_base_array_concat(t28, t29, t30, (char)97, t14, t17, (char)97, t27, t25, (char)101);
    t31 = (t0 + 29893);
    t35 = ((STD_STANDARD) + 984);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 1;
    t38 = (t37 + 4U);
    *((int *)t38) = 4;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t39 = (4 - 1);
    t23 = (t39 * 1);
    t23 = (t23 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t23;
    t33 = xsi_base_array_concat(t33, t34, t35, (char)97, t28, t29, (char)97, t31, t36, (char)101);
    t23 = (20U + 19U);
    t38 = (t25 + 12U);
    t40 = *((unsigned int *)t38);
    t41 = (t23 + t40);
    t42 = (t41 + 4U);
    t43 = (char *)alloca(t42);
    memcpy(t43, t33, t42);
    std_textio_write7(STD_TEXTIO, t2, t3, t43, t34, (unsigned char)0, 0);
    xsi_set_current_line(421, ng0);
    t2 = (t0 + 12584);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 11152U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(422, ng0);

LAB78:    *((char **)t1) = &&LAB79;

LAB1:    return;
LAB5:    xsi_set_current_line(341, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 1);
    goto LAB4;

LAB6:;
LAB9:    xsi_set_current_line(347, ng0);
    t3 = (t0 + 12584);
    t6 = (t0 + 10800U);
    t7 = (t0 + 11152U);
    std_textio_readline(STD_TEXTIO, t3, t6, t7);
    xsi_set_current_line(348, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 9888U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (t0 + 10008U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, t8);
    xsi_set_current_line(349, ng0);
    t2 = (t0 + 10008U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB8;

LAB12:    xsi_set_current_line(351, ng0);
    t2 = (t0 + 9888U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)66);
    if (t5 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 9888U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)82);
    if (t5 != 0)
        goto LAB20;

LAB21:    t2 = (t0 + 9888U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)87);
    if (t5 != 0)
        goto LAB26;

LAB27:    t2 = (t0 + 9888U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)64);
    if (t5 != 0)
        goto LAB32;

LAB33:    t2 = (t0 + 9888U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)43);
    if (t5 != 0)
        goto LAB38;

LAB39:    xsi_set_current_line(384, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 7552U);
    t7 = (t0 + 14208);
    t8 = (t0 + 28544U);
    t9 = (t0 + 10128U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(385, ng0);
    t2 = (t0 + 10128U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    t15 = nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_9052813945161223267_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t5);
    t2 = (t0 + 10368U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((unsigned char *)t2) = t15;
    xsi_set_current_line(386, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 9888U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(387, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 7872U);
    t7 = (t0 + 14272);
    t8 = (t0 + 28560U);
    t9 = (t0 + 10128U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(388, ng0);
    t2 = (t0 + 10368U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB44;

LAB46:
LAB45:    xsi_set_current_line(393, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 1);
    xsi_set_current_line(395, ng0);

LAB49:    t2 = (t0 + 10368U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 6632U);
    t6 = *((char **)t2);
    t5 = *((unsigned char *)t6);
    t15 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t16 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t4, t15);
    t24 = (t16 == (unsigned char)3);
    if (t24 != 0)
        goto LAB50;

LAB52:    xsi_set_current_line(399, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 9888U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(400, ng0);
    t2 = (t0 + 9888U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)46);
    if (t5 != 0)
        goto LAB53;

LAB55:    t2 = (t0 + 9888U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)44);
    if (t5 != 0)
        goto LAB72;

LAB73:    xsi_set_current_line(409, ng0);
    if ((unsigned char)0 == 0)
        goto LAB74;

LAB75:
LAB54:
LAB14:    xsi_set_current_line(414, ng0);
    t2 = (t0 + 11152U);
    xsi_access_variable_deallocate(t2);
    goto LAB8;

LAB10:;
LAB13:    xsi_set_current_line(352, ng0);
    t2 = (t0 + 12584);
    t6 = (t0 + 11152U);
    t7 = (t0 + 9888U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(353, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 9528U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(354, ng0);
    t2 = (t0 + 9528U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12584);
    xsi_process_wait(t2, t12);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:    xsi_set_current_line(355, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 1);
    goto LAB14;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(358, ng0);
    t2 = (t0 + 12584);
    t6 = (t0 + 11152U);
    t7 = (t0 + 9888U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(359, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 9528U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(360, ng0);
    t2 = (t0 + 8448U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t13 = (t10 + 1);
    t2 = (t0 + 8448U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t13;
    t7 = (t0 + 8392U);
    xsi_variable_act(t7);
    xsi_set_current_line(361, ng0);
    t2 = (t0 + 9528U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12584);
    xsi_process_wait(t2, t12);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB22:    xsi_set_current_line(362, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 1);
    goto LAB14;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    xsi_set_current_line(365, ng0);
    t2 = (t0 + 12584);
    t6 = (t0 + 11152U);
    t7 = (t0 + 9888U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(366, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 9528U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(367, ng0);
    t2 = (t0 + 9528U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12584);
    xsi_process_wait(t2, t12);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB28:    xsi_set_current_line(368, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 1);
    goto LAB14;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(372, ng0);
    t2 = (t0 + 12584);
    t6 = (t0 + 11152U);
    t7 = (t0 + 9888U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(373, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 9528U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(374, ng0);
    t2 = (t0 + 9528U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12584);
    xsi_process_wait(t2, t12);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB34:    xsi_set_current_line(375, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 1);
    goto LAB14;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    xsi_set_current_line(378, ng0);
    t2 = (t0 + 12584);
    t6 = (t0 + 11152U);
    t7 = (t0 + 9888U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(379, ng0);
    t2 = (t0 + 12584);
    t3 = (t0 + 11152U);
    t6 = (t0 + 9528U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(380, ng0);
    t2 = (t0 + 9528U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 12584);
    xsi_process_wait(t2, t12);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB40:    xsi_set_current_line(381, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 1);
    goto LAB14;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(389, ng0);
    t2 = (t0 + 10128U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (!(t15));
    if (t16 == 0)
        goto LAB47;

LAB48:    goto LAB45;

LAB47:    t2 = (t0 + 29737);
    t8 = (t0 + 29757);
    t18 = ((STD_STANDARD) + 984);
    t19 = (t0 + 28240U);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 1;
    t22 = (t21 + 4U);
    *((int *)t22) = 38;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t10 = (38 - 1);
    t23 = (t10 * 1);
    t23 = (t23 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t23;
    t14 = xsi_base_array_concat(t14, t17, t18, (char)97, t2, t19, (char)97, t8, t20, (char)101);
    t23 = (20U + 38U);
    xsi_report(t14, t23, (unsigned char)1);
    goto LAB48;

LAB50:    xsi_set_current_line(396, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 1);
    goto LAB49;

LAB51:;
LAB53:    xsi_set_current_line(401, ng0);

LAB56:    t2 = (t0 + 10368U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB57;

LAB59:    goto LAB54;

LAB57:    xsi_set_current_line(402, ng0);
    t2 = (t0 + 12584);
    nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611(t0, t2, 1);
    xsi_set_current_line(403, ng0);
    t2 = (t0 + 7272U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t15 = (t5 == (unsigned char)3);
    if (t15 == 1)
        goto LAB63;

LAB64:    t4 = (unsigned char)0;

LAB65:    if (t4 != 0)
        goto LAB60;

LAB62:
LAB61:    goto LAB56;

LAB58:;
LAB60:    xsi_set_current_line(404, ng0);
    t9 = (t0 + 10368U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    *((unsigned char *)t9) = (unsigned char)2;
    goto LAB61;

LAB63:    t2 = (t0 + 7592U);
    t6 = *((char **)t2);
    t2 = (t0 + 6792U);
    t7 = *((char **)t2);
    t16 = 1;
    if (32U == 32U)
        goto LAB66;

LAB67:    t16 = 0;

LAB68:    t4 = t16;
    goto LAB65;

LAB66:    t23 = 0;

LAB69:    if (t23 < 32U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t2 = (t6 + t23);
    t8 = (t7 + t23);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB67;

LAB71:    t23 = (t23 + 1);
    goto LAB69;

LAB72:    goto LAB54;

LAB74:    t2 = (t0 + 29795);
    t7 = (t0 + 29813);
    t14 = ((STD_STANDARD) + 984);
    t18 = (t0 + 28224U);
    t19 = (t20 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = 1;
    t21 = (t19 + 4U);
    *((int *)t21) = 41;
    t21 = (t19 + 8U);
    *((int *)t21) = 1;
    t10 = (41 - 1);
    t23 = (t10 * 1);
    t23 = (t23 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t23;
    t9 = xsi_base_array_concat(t9, t17, t14, (char)97, t2, t18, (char)97, t7, t20, (char)101);
    t23 = (18U + 41U);
    xsi_report(t9, t23, (unsigned char)3);
    goto LAB75;

LAB76:    goto LAB2;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

}

char *nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16134194175163265278_1413503434(char *t1, char *t2, char *t3)
{
    char t5[24];
    char t6[16];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    int t18;
    char *t19;
    int t21;
    char *t22;
    int t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 1);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t5 + 4U);
    t11 = (t3 != 0);
    if (t11 == 1)
        goto LAB3;

LAB2:    t12 = (t5 + 12U);
    *((char **)t12) = t6;
    t13 = (t1 + 29897);
    t15 = xsi_mem_cmp(t13, t3, 2U);
    if (t15 == 1)
        goto LAB5;

LAB10:    t16 = (t1 + 29899);
    t18 = xsi_mem_cmp(t16, t3, 2U);
    if (t18 == 1)
        goto LAB6;

LAB11:    t19 = (t1 + 29901);
    t21 = xsi_mem_cmp(t19, t3, 2U);
    if (t21 == 1)
        goto LAB7;

LAB12:    t22 = (t1 + 29903);
    t24 = xsi_mem_cmp(t22, t3, 2U);
    if (t24 == 1)
        goto LAB8;

LAB13:
LAB9:    t7 = (t1 + 29927);
    t0 = xsi_get_transient_memory(12U);
    memcpy(t0, t7, 12U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 12;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (12 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB5:    t25 = (t1 + 29905);
    t0 = xsi_get_transient_memory(4U);
    memcpy(t0, t25, 4U);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 4;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t29 = (4 - 1);
    t10 = (t29 * 1);
    t10 = (t10 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t10;
    goto LAB1;

LAB6:    t7 = (t1 + 29909);
    t0 = xsi_get_transient_memory(6U);
    memcpy(t0, t7, 6U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 6;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (6 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB7:    t7 = (t1 + 29915);
    t0 = xsi_get_transient_memory(6U);
    memcpy(t0, t7, 6U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 6;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (6 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB8:    t7 = (t1 + 29921);
    t0 = xsi_get_transient_memory(6U);
    memcpy(t0, t7, 6U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 6;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (6 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB14:;
LAB15:    goto LAB4;

LAB16:    goto LAB4;

LAB17:    goto LAB4;

LAB18:    goto LAB4;

LAB19:    goto LAB4;

}

static void nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_p_3(char *t0)
{
    char t11[32];
    char t13[16];
    char t15[32];
    char t16[16];
    char t18[16];
    char t23[16];
    char t25[16];
    char t29[16];
    char t32[16];
    char t37[16];
    char t39[16];
    char t43[16];
    char t50[16];
    char t55[16];
    char t57[16];
    char t71[32];
    char t72[32];
    char t74[32];
    char t75[32];
    char t76[32];
    char t77[32];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t12;
    unsigned int t14;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t36;
    char *t38;
    char *t40;
    char *t41;
    int t42;
    int64 t44;
    int64 t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t54;
    char *t56;
    char *t58;
    char *t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t73;

LAB0:    xsi_set_current_line(442, ng0);
    t1 = (t0 + 14336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(444, ng0);
    t1 = (t0 + 992U);
    t6 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 13392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(445, ng0);
    t2 = (t0 + 6152U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(454, ng0);
    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(446, ng0);
    t2 = (t0 + 14336);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(447, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 5672U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 32U);
    t3 = (t0 + 28432U);
    t12 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t2, t11, t3, (unsigned char)0, t12);
    xsi_set_current_line(448, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 29939);
    t5 = (t13 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 1;
    t9 = (t5 + 4U);
    *((int *)t9) = 4;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t12 = (4 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t14;
    std_textio_write7(STD_TEXTIO, t1, t2, t3, t13, (unsigned char)0, 0);
    xsi_set_current_line(449, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 5832U);
    t4 = *((char **)t3);
    memcpy(t15, t4, 32U);
    t3 = (t0 + 28448U);
    t12 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t2, t15, t3, (unsigned char)0, t12);
    xsi_set_current_line(450, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 29943);
    t5 = (t0 + 5992U);
    t9 = *((char **)t5);
    t5 = nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16134194175163265278_1413503434(t0, t13, t9);
    t17 = ((STD_STANDARD) + 984);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 2;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t12 = (2 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t14;
    t10 = xsi_base_array_concat(t10, t16, t17, (char)97, t3, t18, (char)97, t5, t13, (char)101);
    t20 = (t0 + 29945);
    t24 = ((STD_STANDARD) + 984);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((int *)t27) = 1;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (1 - 1);
    t14 = (t28 * 1);
    t14 = (t14 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t14;
    t22 = xsi_base_array_concat(t22, t23, t24, (char)97, t10, t16, (char)97, t20, t25, (char)101);
    t30 = ((STD_STANDARD) + 984);
    t27 = xsi_base_array_concat(t27, t29, t30, (char)97, t22, t23, (char)99, (unsigned char)9, (char)101);
    t33 = ((STD_STANDARD) + 984);
    t31 = xsi_base_array_concat(t31, t32, t33, (char)97, t27, t29, (char)99, (unsigned char)9, (char)101);
    t34 = (t0 + 29946);
    t38 = ((STD_STANDARD) + 984);
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 1;
    t41 = (t40 + 4U);
    *((int *)t41) = 2;
    t41 = (t40 + 8U);
    *((int *)t41) = 1;
    t42 = (2 - 1);
    t14 = (t42 * 1);
    t14 = (t14 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t14;
    t36 = xsi_base_array_concat(t36, t37, t38, (char)97, t31, t32, (char)97, t34, t39, (char)101);
    t41 = ((STD_STANDARD) + 384);
    t44 = xsi_get_sim_current_time();
    t45 = (1 * 10000LL);
    t46 = (t44 / t45);
    t47 = xsi_int_to_mem(t46);
    t48 = xsi_string_variable_get_image(t43, t41, t47);
    t51 = ((STD_STANDARD) + 984);
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t36, t37, (char)97, t48, t43, (char)101);
    t52 = (t0 + 29948);
    t56 = ((STD_STANDARD) + 984);
    t58 = (t57 + 0U);
    t59 = (t58 + 0U);
    *((int *)t59) = 1;
    t59 = (t58 + 4U);
    *((int *)t59) = 3;
    t59 = (t58 + 8U);
    *((int *)t59) = 1;
    t60 = (3 - 1);
    t14 = (t60 * 1);
    t14 = (t14 + 1);
    t59 = (t58 + 12U);
    *((unsigned int *)t59) = t14;
    t54 = xsi_base_array_concat(t54, t55, t56, (char)97, t49, t50, (char)97, t52, t57, (char)101);
    t59 = (t13 + 12U);
    t14 = *((unsigned int *)t59);
    t14 = (t14 * 1U);
    t61 = (2U + t14);
    t62 = (t61 + 1U);
    t63 = (t62 + 1U);
    t64 = (t63 + 1U);
    t65 = (t64 + 2U);
    t66 = (t43 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t65 + t67);
    t69 = (t68 + 3U);
    t70 = (char *)alloca(t69);
    memcpy(t70, t54, t69);
    std_textio_write7(STD_TEXTIO, t1, t2, t70, t55, (unsigned char)0, 0);
    xsi_set_current_line(452, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 10904U);
    t3 = (t0 + 11224U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t3);
    goto LAB6;

LAB8:    xsi_set_current_line(455, ng0);
    t1 = (t0 + 14336);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(456, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 6792U);
    t4 = *((char **)t3);
    memcpy(t71, t4, 32U);
    t3 = (t0 + 28496U);
    t12 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t2, t71, t3, (unsigned char)0, t12);
    xsi_set_current_line(457, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 29951);
    t5 = (t13 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 1;
    t9 = (t5 + 4U);
    *((int *)t9) = 4;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t12 = (4 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t14;
    std_textio_write7(STD_TEXTIO, t1, t2, t3, t13, (unsigned char)0, 0);
    xsi_set_current_line(458, ng0);
    t1 = (t0 + 7592U);
    t2 = *((char **)t1);
    t1 = (t0 + 6792U);
    t3 = *((char **)t1);
    t6 = 1;
    if (32U == 32U)
        goto LAB14;

LAB15:    t6 = 0;

LAB16:    if (t6 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(471, ng0);
    t1 = (t0 + 14336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(472, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 30037);
    t5 = (t13 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 1;
    t9 = (t5 + 4U);
    *((int *)t9) = 34;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t12 = (34 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t14;
    std_textio_write7(STD_TEXTIO, t1, t2, t3, t13, (unsigned char)0, 0);
    xsi_set_current_line(473, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 30071);
    t5 = (t13 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 1;
    t9 = (t5 + 4U);
    *((int *)t9) = 16;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t12 = (16 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t14;
    std_textio_write7(STD_TEXTIO, t1, t2, t3, t13, (unsigned char)0, 0);
    xsi_set_current_line(474, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 7592U);
    t4 = *((char **)t3);
    memcpy(t76, t4, 32U);
    t3 = (t0 + 28544U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t2, t76, t3, (unsigned char)0, 0);
    xsi_set_current_line(475, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 30087);
    t5 = (t13 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 1;
    t9 = (t5 + 4U);
    *((int *)t9) = 27;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t12 = (27 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t14;
    std_textio_write7(STD_TEXTIO, t1, t2, t3, t13, (unsigned char)0, 0);
    xsi_set_current_line(476, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 6792U);
    t4 = *((char **)t3);
    memcpy(t77, t4, 32U);
    t3 = (t0 + 28496U);
    t12 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t2, t77, t3, (unsigned char)0, t12);

LAB12:    xsi_set_current_line(478, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 10904U);
    t3 = (t0 + 11224U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t3);
    goto LAB9;

LAB11:    xsi_set_current_line(459, ng0);
    t5 = (t0 + 7912U);
    t9 = *((char **)t5);
    t5 = (t0 + 6952U);
    t10 = *((char **)t5);
    t7 = 1;
    if (32U == 32U)
        goto LAB23;

LAB24:    t7 = 0;

LAB25:    if (t7 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(463, ng0);
    t1 = (t0 + 14336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(464, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 29963);
    t5 = (t13 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 1;
    t9 = (t5 + 4U);
    *((int *)t9) = 31;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t12 = (31 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t14;
    std_textio_write7(STD_TEXTIO, t1, t2, t3, t13, (unsigned char)0, 0);
    xsi_set_current_line(465, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 29994);
    t5 = (t13 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 1;
    t9 = (t5 + 4U);
    *((int *)t9) = 16;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t12 = (16 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t14;
    std_textio_write7(STD_TEXTIO, t1, t2, t3, t13, (unsigned char)0, 0);
    xsi_set_current_line(466, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 7912U);
    t4 = *((char **)t3);
    memcpy(t74, t4, 32U);
    t3 = (t0 + 28560U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t2, t74, t3, (unsigned char)0, 0);
    xsi_set_current_line(467, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 30010);
    t5 = (t13 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 1;
    t9 = (t5 + 4U);
    *((int *)t9) = 27;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t12 = (27 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t14;
    std_textio_write7(STD_TEXTIO, t1, t2, t3, t13, (unsigned char)0, 0);
    xsi_set_current_line(468, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 6952U);
    t4 = *((char **)t3);
    memcpy(t75, t4, 32U);
    t3 = (t0 + 28512U);
    t12 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t2, t75, t3, (unsigned char)0, t12);

LAB21:    goto LAB12;

LAB14:    t14 = 0;

LAB17:    if (t14 < 32U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t1 = (t2 + t14);
    t4 = (t3 + t14);
    if (*((unsigned char *)t1) != *((unsigned char *)t4))
        goto LAB15;

LAB19:    t14 = (t14 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(460, ng0);
    t19 = (t0 + 12832);
    t20 = (t0 + 11224U);
    t21 = (t0 + 6952U);
    t22 = *((char **)t21);
    memcpy(t72, t22, 32U);
    t21 = (t0 + 28512U);
    t12 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t19, t20, t72, t21, (unsigned char)0, t12);
    xsi_set_current_line(461, ng0);
    t1 = (t0 + 12832);
    t2 = (t0 + 11224U);
    t3 = (t0 + 29955);
    t5 = (t0 + 7112U);
    t9 = *((char **)t5);
    t5 = nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16134194175163265278_1413503434(t0, t13, t9);
    t17 = ((STD_STANDARD) + 984);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 2;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t12 = (2 - 1);
    t14 = (t12 * 1);
    t14 = (t14 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t14;
    t10 = xsi_base_array_concat(t10, t16, t17, (char)97, t3, t18, (char)97, t5, t13, (char)101);
    t20 = (t0 + 29957);
    t24 = ((STD_STANDARD) + 984);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((int *)t27) = 1;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (1 - 1);
    t14 = (t28 * 1);
    t14 = (t14 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t14;
    t22 = xsi_base_array_concat(t22, t23, t24, (char)97, t10, t16, (char)97, t20, t25, (char)101);
    t30 = ((STD_STANDARD) + 984);
    t27 = xsi_base_array_concat(t27, t29, t30, (char)97, t22, t23, (char)99, (unsigned char)9, (char)101);
    t33 = ((STD_STANDARD) + 984);
    t31 = xsi_base_array_concat(t31, t32, t33, (char)97, t27, t29, (char)99, (unsigned char)9, (char)101);
    t34 = (t0 + 29958);
    t38 = ((STD_STANDARD) + 984);
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 1;
    t41 = (t40 + 4U);
    *((int *)t41) = 2;
    t41 = (t40 + 8U);
    *((int *)t41) = 1;
    t42 = (2 - 1);
    t14 = (t42 * 1);
    t14 = (t14 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t14;
    t36 = xsi_base_array_concat(t36, t37, t38, (char)97, t31, t32, (char)97, t34, t39, (char)101);
    t41 = ((STD_STANDARD) + 384);
    t44 = xsi_get_sim_current_time();
    t45 = (1 * 10000LL);
    t46 = (t44 / t45);
    t47 = xsi_int_to_mem(t46);
    t48 = xsi_string_variable_get_image(t43, t41, t47);
    t51 = ((STD_STANDARD) + 984);
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t36, t37, (char)97, t48, t43, (char)101);
    t52 = (t0 + 29960);
    t56 = ((STD_STANDARD) + 984);
    t58 = (t57 + 0U);
    t59 = (t58 + 0U);
    *((int *)t59) = 1;
    t59 = (t58 + 4U);
    *((int *)t59) = 3;
    t59 = (t58 + 8U);
    *((int *)t59) = 1;
    t60 = (3 - 1);
    t14 = (t60 * 1);
    t14 = (t14 + 1);
    t59 = (t58 + 12U);
    *((unsigned int *)t59) = t14;
    t54 = xsi_base_array_concat(t54, t55, t56, (char)97, t49, t50, (char)97, t52, t57, (char)101);
    t59 = (t13 + 12U);
    t14 = *((unsigned int *)t59);
    t14 = (t14 * 1U);
    t61 = (2U + t14);
    t62 = (t61 + 1U);
    t63 = (t62 + 1U);
    t64 = (t63 + 1U);
    t65 = (t64 + 2U);
    t66 = (t43 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t65 + t67);
    t69 = (t68 + 3U);
    t73 = (char *)alloca(t69);
    memcpy(t73, t54, t69);
    std_textio_write7(STD_TEXTIO, t1, t2, t73, t55, (unsigned char)0, 0);
    goto LAB21;

LAB23:    t61 = 0;

LAB26:    if (t61 < 32U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t5 = (t9 + t61);
    t17 = (t10 + t61);
    if (*((unsigned char *)t5) != *((unsigned char *)t17))
        goto LAB24;

LAB28:    t61 = (t61 + 1);
    goto LAB26;

}


extern void nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_init()
{
	static char *pe[] = {(void *)nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_p_0,(void *)nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_p_1,(void *)nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_p_2,(void *)nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_p_3};
	static char *se[] = {(void *)nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_13891315768110443725_2940256418,(void *)nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_2940256418,(void *)nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16679151566995163314_1574170611,(void *)nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902_sub_16134194175163265278_1413503434};
	xsi_register_didat("nf10_axi_sim_transactor_v1_10_a_a_3763226961_1516540902", "isim/isim_system_axisim.sim/nf10_axi_sim_transactor_v1_10_a/a_3763226961_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
