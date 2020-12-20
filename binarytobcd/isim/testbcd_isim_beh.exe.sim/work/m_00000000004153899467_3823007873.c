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
static const char *ng0 = "C:/Users/nino/Desktop/TsotneLab/lab470EXTRA12/lab470extra12/binarytobcd/top.v";
static int ng1[] = {1, 0};
static int ng2[] = {5, 0};
static int ng3[] = {3, 0};
static int ng4[] = {15, 0};
static int ng5[] = {12, 0};
static int ng6[] = {11, 0};
static int ng7[] = {8, 0};
static int ng8[] = {7, 0};
static int ng9[] = {4, 0};
static int ng10[] = {0, 0};



static void Always_11_0(char *t0)
{
    char t17[8];
    char t20[8];
    char t26[8];
    char t38[8];
    char t40[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    int t50;
    char *t51;
    unsigned int t52;
    int t53;
    int t54;
    char *t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(14, ng0);

LAB9:    xsi_set_current_line(15, ng0);
    t13 = (t0 + 1768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng1)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t15, 4, t16, 32);
    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 4);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 12);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 12);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t7 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t13 = (t17 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB10:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t17) < *((unsigned int *)t7))
        goto LAB13;

LAB12:    *((unsigned int *)t20) = 1;

LAB13:    t16 = (t20 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 8);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t7 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t13 = (t17 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB20:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t17) < *((unsigned int *)t7))
        goto LAB23;

LAB22:    *((unsigned int *)t20) = 1;

LAB23:    t16 = (t20 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 4);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t7 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t13 = (t17 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB31;

LAB30:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t17) < *((unsigned int *)t7))
        goto LAB33;

LAB32:    *((unsigned int *)t20) = 1;

LAB33:    t16 = (t20 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t7 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t13 = (t17 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB41;

LAB40:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t17) < *((unsigned int *)t7))
        goto LAB43;

LAB42:    *((unsigned int *)t20) = 1;

LAB43:    t16 = (t20 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 12);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 12);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t7 = ((char*)((ng1)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 4, t17, 4, t7, 32);
    t13 = (t0 + 1448);
    t14 = (t0 + 1448);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng4)));
    t27 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t26, t38, t40, ((int*)(t16)), 2, t18, 32, 1, t27, 32, 1);
    t28 = (t26 + 4);
    t21 = *((unsigned int *)t28);
    t50 = (!(t21));
    t29 = (t38 + 4);
    t22 = *((unsigned int *)t29);
    t53 = (!(t22));
    t54 = (t50 && t53);
    t30 = (t40 + 4);
    t23 = *((unsigned int *)t30);
    t57 = (!(t23));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t17) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 11);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t0 + 1448);
    t13 = (t0 + 1448);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t20, t15, 2, t16, 32, 1);
    t18 = (t20 + 4);
    t21 = *((unsigned int *)t18);
    t50 = (!(t21));
    if (t50 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 8);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t7 = ((char*)((ng1)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 4, t17, 4, t7, 32);
    t13 = (t0 + 1448);
    t14 = (t0 + 1448);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng6)));
    t27 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t26, t38, t40, ((int*)(t16)), 2, t18, 32, 1, t27, 32, 1);
    t28 = (t26 + 4);
    t21 = *((unsigned int *)t28);
    t50 = (!(t21));
    t29 = (t38 + 4);
    t22 = *((unsigned int *)t29);
    t53 = (!(t22));
    t54 = (t50 && t53);
    t30 = (t40 + 4);
    t23 = *((unsigned int *)t30);
    t57 = (!(t23));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 10);
    t10 = (t9 & 1);
    *((unsigned int *)t17) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 10);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t0 + 1448);
    t13 = (t0 + 1448);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t20, t15, 2, t16, 32, 1);
    t18 = (t20 + 4);
    t21 = *((unsigned int *)t18);
    t50 = (!(t21));
    if (t50 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 4);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t7 = ((char*)((ng1)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 4, t17, 4, t7, 32);
    t13 = (t0 + 1448);
    t14 = (t0 + 1448);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng8)));
    t27 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t26, t38, t40, ((int*)(t16)), 2, t18, 32, 1, t27, 32, 1);
    t28 = (t26 + 4);
    t21 = *((unsigned int *)t28);
    t50 = (!(t21));
    t29 = (t38 + 4);
    t22 = *((unsigned int *)t29);
    t53 = (!(t22));
    t54 = (t50 && t53);
    t30 = (t40 + 4);
    t23 = *((unsigned int *)t30);
    t57 = (!(t23));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t17) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 3);
    t19 = (t12 & 1);
    *((unsigned int *)t5) = t19;
    t7 = (t0 + 1448);
    t13 = (t0 + 1448);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t20, t15, 2, t16, 32, 1);
    t18 = (t20 + 4);
    t21 = *((unsigned int *)t18);
    t50 = (!(t21));
    if (t50 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t7 = ((char*)((ng1)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 4, t17, 4, t7, 32);
    t13 = (t0 + 1448);
    t14 = (t0 + 1448);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng3)));
    t27 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t26, t38, t40, ((int*)(t16)), 2, t18, 32, 1, t27, 32, 1);
    t28 = (t26 + 4);
    t21 = *((unsigned int *)t28);
    t50 = (!(t21));
    t29 = (t38 + 4);
    t22 = *((unsigned int *)t29);
    t53 = (!(t22));
    t54 = (t50 && t53);
    t30 = (t40 + 4);
    t23 = *((unsigned int *)t30);
    t57 = (!(t23));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t13 = (t0 + 1768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_index_select_value(t17, 1, t4, t7, 2, t15, 4, 2);
    t16 = (t0 + 1448);
    t18 = (t0 + 1448);
    t27 = (t18 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t20, t28, 2, t29, 32, 1);
    t30 = (t20 + 4);
    t8 = *((unsigned int *)t30);
    t50 = (!(t8));
    if (t50 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t17, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t19 = (t11 ^ t12);
    t21 = (t10 | t19);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t31 = (t21 & t25);
    if (t31 != 0)
        goto LAB69;

LAB66:    if (t24 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t17) = 1;

LAB69:    t14 = (t17 + 4);
    t32 = *((unsigned int *)t14);
    t33 = (~(t32));
    t34 = *((unsigned int *)t17);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB8;

LAB11:    t15 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(17, ng0);
    t18 = (t0 + 1448);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t29 = (t26 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 12);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 12);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 15U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 15U);
    t37 = ((char*)((ng3)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t26, 32, t37, 32);
    t39 = (t0 + 1448);
    t43 = (t0 + 1448);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng4)));
    t47 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB18;

LAB19:    goto LAB17;

LAB18:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_wait_assign_value(t39, t38, t60, *((unsigned int *)t41), t64, 0LL);
    goto LAB19;

LAB21:    t15 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(19, ng0);
    t18 = (t0 + 1448);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t29 = (t26 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 8);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 8);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 15U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 15U);
    t37 = ((char*)((ng3)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t26, 32, t37, 32);
    t39 = (t0 + 1448);
    t43 = (t0 + 1448);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng6)));
    t47 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB28;

LAB29:    goto LAB27;

LAB28:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_wait_assign_value(t39, t38, t60, *((unsigned int *)t41), t64, 0LL);
    goto LAB29;

LAB31:    t15 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(21, ng0);
    t18 = (t0 + 1448);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t29 = (t26 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 4);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 4);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 15U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 15U);
    t37 = ((char*)((ng3)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t26, 32, t37, 32);
    t39 = (t0 + 1448);
    t43 = (t0 + 1448);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng8)));
    t47 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB38;

LAB39:    goto LAB37;

LAB38:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_wait_assign_value(t39, t38, t60, *((unsigned int *)t41), t64, 0LL);
    goto LAB39;

LAB41:    t15 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(23, ng0);
    t18 = (t0 + 1448);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t29 = (t26 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 0);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 0);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 15U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 15U);
    t37 = ((char*)((ng3)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t26, 32, t37, 32);
    t39 = (t0 + 1448);
    t43 = (t0 + 1448);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng3)));
    t47 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB48;

LAB49:    goto LAB47;

LAB48:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_wait_assign_value(t39, t38, t60, *((unsigned int *)t41), t64, 0LL);
    goto LAB49;

LAB50:    t24 = *((unsigned int *)t40);
    t60 = (t24 + 0);
    t25 = *((unsigned int *)t26);
    t31 = *((unsigned int *)t38);
    t63 = (t25 - t31);
    t64 = (t63 + 1);
    xsi_vlogvar_wait_assign_value(t13, t20, t60, *((unsigned int *)t38), t64, 0LL);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t7, t17, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB53;

LAB54:    t24 = *((unsigned int *)t40);
    t60 = (t24 + 0);
    t25 = *((unsigned int *)t26);
    t31 = *((unsigned int *)t38);
    t63 = (t25 - t31);
    t64 = (t63 + 1);
    xsi_vlogvar_wait_assign_value(t13, t20, t60, *((unsigned int *)t38), t64, 0LL);
    goto LAB55;

LAB56:    xsi_vlogvar_wait_assign_value(t7, t17, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB57;

LAB58:    t24 = *((unsigned int *)t40);
    t60 = (t24 + 0);
    t25 = *((unsigned int *)t26);
    t31 = *((unsigned int *)t38);
    t63 = (t25 - t31);
    t64 = (t63 + 1);
    xsi_vlogvar_wait_assign_value(t13, t20, t60, *((unsigned int *)t38), t64, 0LL);
    goto LAB59;

LAB60:    xsi_vlogvar_wait_assign_value(t7, t17, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB61;

LAB62:    t24 = *((unsigned int *)t40);
    t60 = (t24 + 0);
    t25 = *((unsigned int *)t26);
    t31 = *((unsigned int *)t38);
    t63 = (t25 - t31);
    t64 = (t63 + 1);
    xsi_vlogvar_wait_assign_value(t13, t20, t60, *((unsigned int *)t38), t64, 0LL);
    goto LAB63;

LAB64:    xsi_vlogvar_wait_assign_value(t16, t17, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB65;

LAB68:    t13 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(35, ng0);
    t15 = ((char*)((ng10)));
    t16 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 1, 0LL);
    goto LAB72;

}


extern void work_m_00000000004153899467_3823007873_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000004153899467_3823007873", "isim/testbcd_isim_beh.exe.sim/work/m_00000000004153899467_3823007873.didat");
	xsi_register_executes(pe);
}
