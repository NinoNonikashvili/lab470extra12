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
static const char *ng0 = "C:/Users/nino/Desktop/TsotneLab/lab470EXTRA12/lab470extra12/lab470extra12/top.v";
static int ng1[] = {1, 0};
static int ng2[] = {4, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {14U, 0U};
static unsigned int ng5[] = {64U, 0U};
static unsigned int ng6[] = {121U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {36U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {48U, 0U};
static unsigned int ng11[] = {25U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {18U, 0U};
static int ng14[] = {6, 0};
static unsigned int ng15[] = {32U, 0U};
static int ng16[] = {7, 0};
static unsigned int ng17[] = {120U, 0U};
static int ng18[] = {8, 0};
static unsigned int ng19[] = {0U, 0U};
static int ng20[] = {9, 0};
static unsigned int ng21[] = {16U, 0U};
static unsigned int ng22[] = {13U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {7U, 0U};
static int ng25[] = {14, 0};
static int ng26[] = {11, 0};
static int ng27[] = {15, 0};
static int ng28[] = {12, 0};
static int ng29[] = {13, 0};



static void Always_16_0(char *t0)
{
    char t8[8];
    char t32[8];
    char t35[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    int t34;

LAB0:    t1 = (t0 + 3624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 4192);
    *((int *)t2) = 1;
    t3 = (t0 + 3656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 2064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 31, t7, 32);
    t9 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 31, 0LL);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 15, t5, 32);
    t6 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 15, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB17;

LAB14:    if (t19 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB2;

LAB8:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19, ng0);

LAB13:    xsi_set_current_line(20, ng0);
    t28 = (t0 + 2384);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng1)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 14, t31, 32);
    t33 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 14, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 31, 0LL);
    goto LAB12;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);

LAB21:    xsi_set_current_line(33, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 15, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB22:    t5 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t34 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng1)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t34 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t34 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t34 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    xsi_set_current_line(35, ng0);

LAB32:    xsi_set_current_line(36, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 12);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 12);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 15U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);

LAB33:    t9 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t9, 32);
    if (t34 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng1)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t34 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng7)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t34 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng9)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t34 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng2)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t34 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng12)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t34 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng14)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t34 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng16)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t34 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng18)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t34 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng20)));
    t34 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t34 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB56:    goto LAB31;

LAB25:    xsi_set_current_line(52, ng0);

LAB57:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t32, 0, 8);
    t6 = (t32 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 8);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 15U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);

LAB58:    t9 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t9, 32);
    if (t34 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng1)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t34 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng7)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t34 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng9)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t34 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng2)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t34 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng12)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t34 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng14)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t34 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng16)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t34 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng18)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t34 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng20)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t34 == 1)
        goto LAB77;

LAB78:
LAB80:
LAB79:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB81:    goto LAB31;

LAB27:    xsi_set_current_line(69, ng0);

LAB82:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t35, 0, 8);
    t6 = (t35 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 4);
    *((unsigned int *)t35) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 4);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t14 & 15U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);

LAB83:    t9 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t9, 32);
    if (t34 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng1)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t34 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng7)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t34 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng9)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t34 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng2)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t34 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng12)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t34 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng14)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t34 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng16)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t34 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng18)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t34 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng20)));
    t34 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t34 == 1)
        goto LAB102;

LAB103:
LAB105:
LAB104:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB106:    goto LAB31;

LAB29:    xsi_set_current_line(86, ng0);

LAB107:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t36, 0, 8);
    t6 = (t36 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t36) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t14 & 15U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);

LAB108:    t9 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t9, 32);
    if (t34 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng1)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t2, 32);
    if (t34 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng7)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t2, 32);
    if (t34 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng9)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t2, 32);
    if (t34 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng2)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t2, 32);
    if (t34 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng12)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t2, 32);
    if (t34 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng14)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t2, 32);
    if (t34 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng16)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t2, 32);
    if (t34 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng18)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t2, 32);
    if (t34 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng20)));
    t34 = xsi_vlog_unsigned_case_compare(t36, 32, t2, 32);
    if (t34 == 1)
        goto LAB127;

LAB128:
LAB130:
LAB129:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB131:    goto LAB31;

LAB34:    xsi_set_current_line(39, ng0);
    t22 = ((char*)((ng5)));
    t28 = (t0 + 1584);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 7);
    goto LAB56;

LAB36:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB56;

LAB38:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB56;

LAB40:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB56;

LAB42:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB56;

LAB44:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB56;

LAB46:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB56;

LAB48:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB56;

LAB50:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB56;

LAB52:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB56;

LAB59:    xsi_set_current_line(56, ng0);
    t22 = ((char*)((ng5)));
    t28 = (t0 + 1584);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 7);
    goto LAB81;

LAB61:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB81;

LAB63:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB81;

LAB65:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB81;

LAB67:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB81;

LAB69:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB81;

LAB71:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB81;

LAB73:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB81;

LAB75:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB81;

LAB77:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB81;

LAB84:    xsi_set_current_line(73, ng0);
    t22 = ((char*)((ng5)));
    t28 = (t0 + 1584);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 7);
    goto LAB106;

LAB86:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB106;

LAB88:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB106;

LAB90:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB106;

LAB92:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB106;

LAB94:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB106;

LAB96:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB106;

LAB98:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB106;

LAB100:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB106;

LAB102:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB106;

LAB109:    xsi_set_current_line(90, ng0);
    t22 = ((char*)((ng5)));
    t28 = (t0 + 1584);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 7);
    goto LAB131;

LAB111:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB131;

LAB113:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB131;

LAB115:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB131;

LAB117:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB131;

LAB119:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB131;

LAB121:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB131;

LAB123:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB131;

LAB125:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB131;

LAB127:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB131;

}

static void Always_107_1(char *t0)
{
    char t6[8];
    char t13[8];
    char t26[8];
    char t36[8];
    char t49[8];
    char t51[8];
    char t52[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t50;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    int t61;
    char *t62;
    unsigned int t63;
    int t64;
    int t65;
    char *t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4208);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB5:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(110, ng0);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng25)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(110, ng0);

LAB9:    xsi_set_current_line(111, ng0);
    t14 = (t0 + 2224);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 15U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 15U);
    t25 = ((char*)((ng12)));
    memset(t26, 0, 8);
    t27 = (t13 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB11;

LAB10:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t13) < *((unsigned int *)t25))
        goto LAB13;

LAB12:    *((unsigned int *)t26) = 1;

LAB13:    t30 = (t26 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 4);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t14 = ((char*)((ng12)));
    memset(t13, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB21;

LAB20:    t16 = (t14 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t6) < *((unsigned int *)t14))
        goto LAB23;

LAB22:    *((unsigned int *)t13) = 1;

LAB23:    t18 = (t13 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t14 = ((char*)((ng12)));
    memset(t13, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB31;

LAB30:    t16 = (t14 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t6) < *((unsigned int *)t14))
        goto LAB33;

LAB32:    *((unsigned int *)t13) = 1;

LAB33:    t18 = (t13 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 12);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 12);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t14 = ((char*)((ng12)));
    memset(t13, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB41;

LAB40:    t16 = (t14 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t6) < *((unsigned int *)t14))
        goto LAB43;

LAB42:    *((unsigned int *)t13) = 1;

LAB43:    t18 = (t13 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2384);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t15 = ((char*)((ng29)));
    t16 = (t0 + 2704);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t15, 32, t18, 32);
    xsi_vlog_generic_get_index_select_value(t13, 1, t4, t14, 2, t26, 32, 1);
    t25 = (t0 + 2224);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    memset(t36, 0, 8);
    t29 = (t36 + 4);
    t30 = (t28 + 4);
    t8 = *((unsigned int *)t28);
    t9 = (t8 >> 0);
    *((unsigned int *)t36) = t9;
    t10 = *((unsigned int *)t30);
    t11 = (t10 >> 0);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t12 & 32767U);
    t19 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t19 & 32767U);
    xsi_vlogtype_concat(t6, 16, 16, 2U, t36, 15, t13, 1);
    t37 = (t0 + 2224);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 16);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2704);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(112, ng0);
    t37 = (t0 + 2224);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t36, 0, 8);
    t40 = (t36 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 0);
    *((unsigned int *)t36) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t46 & 15U);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 & 15U);
    t48 = ((char*)((ng9)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_add(t49, 32, t36, 32, t48, 32);
    t50 = (t0 + 2224);
    t54 = (t0 + 2224);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng9)));
    t58 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t51, t52, t53, ((int*)(t56)), 2, t57, 32, 1, t58, 32, 1);
    t59 = (t51 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t52 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    t65 = (t61 && t64);
    t66 = (t53 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (!(t67));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB18;

LAB19:    goto LAB17;

LAB18:    t70 = *((unsigned int *)t53);
    t71 = (t70 + 0);
    t72 = *((unsigned int *)t51);
    t73 = *((unsigned int *)t52);
    t74 = (t72 - t73);
    t75 = (t74 + 1);
    xsi_vlogvar_assign_value(t50, t49, t71, *((unsigned int *)t52), t75);
    goto LAB19;

LAB21:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(114, ng0);
    t25 = (t0 + 2224);
    t27 = (t25 + 56U);
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
    t42 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t42 & 15U);
    t37 = ((char*)((ng9)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t26, 32, t37, 32);
    t38 = (t0 + 2224);
    t39 = (t0 + 2224);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t48 = ((char*)((ng16)));
    t50 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t49, t51, t52, ((int*)(t41)), 2, t48, 32, 1, t50, 32, 1);
    t54 = (t49 + 4);
    t43 = *((unsigned int *)t54);
    t61 = (!(t43));
    t55 = (t51 + 4);
    t44 = *((unsigned int *)t55);
    t64 = (!(t44));
    t65 = (t61 && t64);
    t56 = (t52 + 4);
    t45 = *((unsigned int *)t56);
    t68 = (!(t45));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB28;

LAB29:    goto LAB27;

LAB28:    t46 = *((unsigned int *)t52);
    t71 = (t46 + 0);
    t47 = *((unsigned int *)t49);
    t60 = *((unsigned int *)t51);
    t74 = (t47 - t60);
    t75 = (t74 + 1);
    xsi_vlogvar_assign_value(t38, t36, t71, *((unsigned int *)t51), t75);
    goto LAB29;

LAB31:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(116, ng0);
    t25 = (t0 + 2224);
    t27 = (t25 + 56U);
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
    t42 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t42 & 15U);
    t37 = ((char*)((ng9)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t26, 32, t37, 32);
    t38 = (t0 + 2224);
    t39 = (t0 + 2224);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t48 = ((char*)((ng26)));
    t50 = ((char*)((ng18)));
    xsi_vlog_convert_partindices(t49, t51, t52, ((int*)(t41)), 2, t48, 32, 1, t50, 32, 1);
    t54 = (t49 + 4);
    t43 = *((unsigned int *)t54);
    t61 = (!(t43));
    t55 = (t51 + 4);
    t44 = *((unsigned int *)t55);
    t64 = (!(t44));
    t65 = (t61 && t64);
    t56 = (t52 + 4);
    t45 = *((unsigned int *)t56);
    t68 = (!(t45));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB38;

LAB39:    goto LAB37;

LAB38:    t46 = *((unsigned int *)t52);
    t71 = (t46 + 0);
    t47 = *((unsigned int *)t49);
    t60 = *((unsigned int *)t51);
    t74 = (t47 - t60);
    t75 = (t74 + 1);
    xsi_vlogvar_assign_value(t38, t36, t71, *((unsigned int *)t51), t75);
    goto LAB39;

LAB41:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(118, ng0);
    t25 = (t0 + 2224);
    t27 = (t25 + 56U);
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
    t42 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t42 & 15U);
    t37 = ((char*)((ng9)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t26, 32, t37, 32);
    t38 = (t0 + 2224);
    t39 = (t0 + 2224);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t48 = ((char*)((ng27)));
    t50 = ((char*)((ng28)));
    xsi_vlog_convert_partindices(t49, t51, t52, ((int*)(t41)), 2, t48, 32, 1, t50, 32, 1);
    t54 = (t49 + 4);
    t43 = *((unsigned int *)t54);
    t61 = (!(t43));
    t55 = (t51 + 4);
    t44 = *((unsigned int *)t55);
    t64 = (!(t44));
    t65 = (t61 && t64);
    t56 = (t52 + 4);
    t45 = *((unsigned int *)t56);
    t68 = (!(t45));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB48;

LAB49:    goto LAB47;

LAB48:    t46 = *((unsigned int *)t52);
    t71 = (t46 + 0);
    t47 = *((unsigned int *)t49);
    t60 = *((unsigned int *)t51);
    t74 = (t47 - t60);
    t75 = (t74 + 1);
    xsi_vlogvar_assign_value(t38, t36, t71, *((unsigned int *)t51), t75);
    goto LAB49;

}


extern void work_m_00000000002553469162_3823007873_init()
{
	static char *pe[] = {(void *)Always_16_0,(void *)Always_107_1};
	xsi_register_didat("work_m_00000000002553469162_3823007873", "isim/toptest12_isim_beh.exe.sim/work/m_00000000002553469162_3823007873.didat");
	xsi_register_executes(pe);
}
