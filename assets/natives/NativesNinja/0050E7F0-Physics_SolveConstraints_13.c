#include "0050E7F0-Physics_SolveConstraints_13.h"
/* 0x0050e7f0 Physics_SolveConstraints_13 full linked: callers=1 callees=9 */
int32_t sub_50e7f0(void* a1)

{
    void var_80;
    memcpy(&var_80, a1, 0x14);
    int32_t var_74 = 3;
    void var_6c;
    void* var_70 = &var_6c;
    float* ecx = *(a1 + 0x10);
    long double x87_r7 = *ecx;
    long double temp1 = g_bcabd0;
    x87_r7 - temp1;
    int32_t edi;

    edi = !(*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

    long double x87_r7_1 = ecx[1];
    long double temp2 = g_bcabd4;
    x87_r7_1 - temp2;
    int32_t esi_1;

    esi_1 = !(*(&((x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

    float var_134 = g_bcabd8 + 1f;
    long double x87_r7_4 = *ecx;
    long double temp3 = var_134;
    x87_r7_4 - temp3;
    int32_t edx;

    edx = *(&((x87_r7_4 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp3 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

    long double x87_r7_6 = g_bcabdc + 1f;
    long double temp4 = ecx[1];
    x87_r7_6 - temp4;
    int32_t eax_2;

    eax_2 = !(*(&((x87_r7_6 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp4) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6 = ecx[9];
    long double temp5 = g_bcabd0;
    x87_r6 - temp5;
    int32_t var_fc = (((eax_2 * 2) | edx) << 1 | esi_1) << 1 | edi;
    int32_t edi_1;

    edi_1 = !(*(&((x87_r6 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp5) ? 1 : 0) << 0xa
        | (x87_r6 == temp5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_1 = ecx[1];
    long double temp6 = g_bcabd4;
    x87_r6_1 - temp6;
    int32_t esi_2;

    esi_2 = !(*(&((x87_r6_1 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp6) ? 1 : 0) << 0xa
        | (x87_r6_1 == temp6 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_2 = ecx[9];
    long double temp7 = var_134;
    x87_r6_2 - temp7;
    int32_t edx_1;

    edx_1 = *(&((x87_r6_2 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp7) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

    long double temp8 = ecx[1];
    x87_r7_6 - temp8;
    int32_t eax_10;

    eax_10 = !(*(&((x87_r7_6 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp8) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_3 = *ecx;
    long double temp9 = g_bcabd0;
    x87_r6_3 - temp9;
    int32_t var_d4 = (((eax_10 * 2) | edx_1) << 1 | esi_2) << 1 | edi_1;
    int32_t edi_2;

    edi_2 = !(*(&((x87_r6_3 < temp9 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp9) ? 1 : 0) << 0xa
        | (x87_r6_3 == temp9 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_4 = ecx[0xa];
    long double temp10 = g_bcabd4;
    x87_r6_4 - temp10;
    int32_t esi_3;

    esi_3 = !(*(&((x87_r6_4 < temp10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp10) ? 1 : 0) << 0xa
        | (x87_r6_4 == temp10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_5 = *ecx;
    long double temp11 = var_134;
    x87_r6_5 - temp11;
    int32_t edx_2;

    edx_2 = *(&((x87_r6_5 < temp11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, temp11) ? 1 : 0) << 0xa
        | (x87_r6_5 == temp11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

    long double temp12 = ecx[0xa];
    x87_r7_6 - temp12;
    int32_t eax_18;

    eax_18 = !(*(&((x87_r7_6 < temp12 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp12) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp12 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_6 = ecx[9];
    long double temp13 = g_bcabd0;
    x87_r6_6 - temp13;
    int32_t var_ac = (((eax_18 * 2) | edx_2) << 1 | esi_3) << 1 | edi_2;
    int32_t edi_3;

    edi_3 = !(*(&((x87_r6_6 < temp13 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, temp13) ? 1 : 0) << 0xa
        | (x87_r6_6 == temp13 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_7 = ecx[0xa];
    long double temp14 = g_bcabd4;
    x87_r6_7 - temp14;
    int32_t esi_4;

    esi_4 = !(*(&((x87_r6_7 < temp14 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, temp14) ? 1 : 0) << 0xa
        | (x87_r6_7 == temp14 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_8 = ecx[9];
    long double temp15 = var_134;
    x87_r6_8 - temp15;
    int32_t edx_3;

    edx_3 = *(&((x87_r6_8 < temp15 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, temp15) ? 1 : 0) << 0xa
        | (x87_r6_8 == temp15 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

    long double temp16 = ecx[0xa];
    x87_r7_6 - temp16;
    int32_t eax_26;

    eax_26 = !(*(&((x87_r7_6 < temp16 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp16) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp16 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

    long double x87_r7_8 = 1f / ecx[2];
    float var_120 = *ecx;
    int32_t var_f8 = ecx[9];
    int32_t var_84 = (((eax_26 * 2) | edx_3) << 1 | esi_4) << 1 | edi_3;
    int32_t eax_33 = ecx[1];
    int32_t var_11c = eax_33;
    int32_t var_f4 = eax_33;
    float var_118 = x87_r7_8;
    long double x87_r6_10 = x87_r7_8 * ecx[3];
    float var_114 = x87_r6_10;
    long double x87_r5_1 = x87_r7_8 * ecx[4];
    float var_110 = x87_r5_1;
    long double x87_r4_1 = x87_r7_8 * ecx[5];
    float var_134_1 = x87_r4_1;
    float var_10c = x87_r4_1;
    long double x87_r4_3 = x87_r7_8 * ecx[6];
    float var_e4 = var_134_1;
    float var_128 = x87_r4_3;
    float var_108 = x87_r4_3;
    long double x87_r4_5 = x87_r7_8 * ecx[7];
    float var_e0 = var_128;
    float var_12c = x87_r4_5;
    float var_104 = x87_r4_5;
    long double x87_r4_7 = x87_r7_8 * ecx[8];
    float var_dc = var_12c;
    float var_d0 = *ecx;
    float var_130 = x87_r4_7;
    float var_100 = x87_r4_7;
    float var_bc = var_134_1;
    float var_f0 = x87_r7_8;
    long double x87_r4_10 = x87_r7_8 * ecx[0xc];
    float var_d8 = var_130;
    float var_b4 = var_12c;
    int32_t var_cc = ecx[0xa];
    float var_124 = x87_r4_10;
    float var_ec = x87_r4_10;
    int32_t var_a8 = ecx[9];
    float var_e8 = x87_r5_1;
    float var_b8 = var_128;
    float var_c8 = x87_r7_8;
    float var_b0 = var_130;
    float var_c4 = x87_r6_10;
    int32_t var_a4 = ecx[0xa];
    long double x87_r6_12 = x87_r7_8 * ecx[0xd];
    float var_9c = var_124;
    float var_c0 = x87_r6_12;
    float var_a0 = x87_r7_8;
    float var_98 = x87_r6_12;
    float var_90 = var_128;
    float var_8c = var_12c;
    void* var_140 = &var_80;
    int32_t** (* var_144)(int32_t* a1, int32_t* a2) = sub_50e730;
    int32_t var_148 = g_bcadc0;
    float var_94 = var_134_1;
    float var_88 = var_130;
    void var_170;
    memcpy(&var_170, &var_d0, 0x28);
    void var_198;
    memcpy(&var_198, &var_f8, 0x28);
    void var_1c0;
    memcpy(&var_1c0, &var_120, 0x28);
    sub_50bf20();
    void* var_140_1 = &var_80;
    int32_t** (* var_144_1)(int32_t* a1, int32_t* a2) = sub_50e730;
    var_148 = g_bcadc0;
    memcpy(&var_170, &var_a8, 0x28);
    memcpy(&var_198, &var_d0, 0x28);
    memcpy(&var_1c0, &var_f8, 0x28);
    return sub_50bf20();
}
