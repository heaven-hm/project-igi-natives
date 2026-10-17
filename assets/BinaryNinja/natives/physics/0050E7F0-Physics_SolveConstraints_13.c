// Original IGI.EXE function: Physics_SolveConstraints_13 (VA 0x0050E7F0; static CFG gate FAIL, CFG score 0.741).
#include "Physics_SolveConstraints_13.h"
int32_t Physics_SolveConstraints_13(void* a1)

{
    void v_80;
    memcpy(&v_80, a1, 0x14);
    int32_t v_74 = 3;
    void v_6c;
    void* v_70 = &v_6c;
    float* objC = *(a1 + 0x10);
    long double fpu7 = *objC;
    long double f1 = g_bcabd0;
    fpu7 - f1;
    int32_t dstD;

    dstD = !(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

    long double x87_r7_1 = objC[1];
    long double f2 = g_bcabd4;
    x87_r7_1 - f2;
    int32_t srcS1;

    srcS1 = !(*(&((x87_r7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2) ? 1 : 0) << 0xa
        | (x87_r7_1 == f2 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

    float v_134 = g_bcabd8 + 1f;
    long double x87_r7_4 = *objC;
    long double f3 = v_134;
    x87_r7_4 - f3;
    int32_t tmpD;

    tmpD = *(&((x87_r7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3) ? 1 : 0) << 0xa
        | (x87_r7_4 == f3 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

    long double x87_r7_6 = g_bcabdc + 1f;
    long double f4 = objC[1];
    x87_r7_6 - f4;
    int32_t valA2;

    valA2 = !(*(&((x87_r7_6 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f4) ? 1 : 0) << 0xa
        | (x87_r7_6 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu6 = objC[9];
    long double f5 = g_bcabd0;
    fpu6 - f5;
    int32_t v_fc = (((valA2 * 2) | tmpD) << 1 | srcS1) << 1 | dstD;
    int32_t dstD1;

    dstD1 = !(*(&((fpu6 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f5) ? 1 : 0) << 0xa
        | (fpu6 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_1 = objC[1];
    long double f6 = g_bcabd4;
    x87_r6_1 - f6;
    int32_t srcS2;

    srcS2 = !(*(&((x87_r6_1 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f6) ? 1 : 0) << 0xa
        | (x87_r6_1 == f6 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_2 = objC[9];
    long double f7 = v_134;
    x87_r6_2 - f7;
    int32_t tmpD1;

    tmpD1 = *(&((x87_r6_2 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f7) ? 1 : 0) << 0xa
        | (x87_r6_2 == f7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

    long double f8 = objC[1];
    x87_r7_6 - f8;
    int32_t valA10;

    valA10 = !(*(&((x87_r7_6 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f8) ? 1 : 0) << 0xa
        | (x87_r7_6 == f8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_3 = *objC;
    long double f9 = g_bcabd0;
    x87_r6_3 - f9;
    int32_t v_d4 = (((valA10 * 2) | tmpD1) << 1 | srcS2) << 1 | dstD1;
    int32_t dstD2;

    dstD2 = !(*(&((x87_r6_3 < f9 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, f9) ? 1 : 0) << 0xa
        | (x87_r6_3 == f9 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_4 = objC[0xa];
    long double f10 = g_bcabd4;
    x87_r6_4 - f10;
    int32_t srcS3;

    srcS3 = !(*(&((x87_r6_4 < f10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f10) ? 1 : 0) << 0xa
        | (x87_r6_4 == f10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_5 = *objC;
    long double f11 = v_134;
    x87_r6_5 - f11;
    int32_t tmpD2;

    tmpD2 = *(&((x87_r6_5 < f11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, f11) ? 1 : 0) << 0xa
        | (x87_r6_5 == f11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

    long double f12 = objC[0xa];
    x87_r7_6 - f12;
    int32_t valA18;

    valA18 = !(*(&((x87_r7_6 < f12 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f12) ? 1 : 0) << 0xa
        | (x87_r7_6 == f12 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_6 = objC[9];
    long double f13 = g_bcabd0;
    x87_r6_6 - f13;
    int32_t v_ac = (((valA18 * 2) | tmpD2) << 1 | srcS3) << 1 | dstD2;
    int32_t dstD3;

    dstD3 = !(*(&((x87_r6_6 < f13 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, f13) ? 1 : 0) << 0xa
        | (x87_r6_6 == f13 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_7 = objC[0xa];
    long double f14 = g_bcabd4;
    x87_r6_7 - f14;
    int32_t srcS4;

    srcS4 = !(*(&((x87_r6_7 < f14 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, f14) ? 1 : 0) << 0xa
        | (x87_r6_7 == f14 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double x87_r6_8 = objC[9];
    long double f15 = v_134;
    x87_r6_8 - f15;
    int32_t tmpD3;

    tmpD3 = *(&((x87_r6_8 < f15 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, f15) ? 1 : 0) << 0xa
        | (x87_r6_8 == f15 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

    long double f16 = objC[0xa];
    x87_r7_6 - f16;
    int32_t valA26;

    valA26 = !(*(&((x87_r7_6 < f16 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f16) ? 1 : 0) << 0xa
        | (x87_r7_6 == f16 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

    long double x87_r7_8 = 1f / objC[2];
    float v_120 = *objC;
    int32_t v_f8 = objC[9];
    int32_t v_84 = (((valA26 * 2) | tmpD3) << 1 | srcS4) << 1 | dstD3;
    int32_t valA33 = objC[1];
    int32_t v_11c = valA33;
    int32_t v_f4 = valA33;
    float v_118 = x87_r7_8;
    long double x87_r6_10 = x87_r7_8 * objC[3];
    float v_114 = x87_r6_10;
    long double x87_r5_1 = x87_r7_8 * objC[4];
    float v_110 = x87_r5_1;
    long double x87_r4_1 = x87_r7_8 * objC[5];
    float v_134_1 = x87_r4_1;
    float v_10c = x87_r4_1;
    long double x87_r4_3 = x87_r7_8 * objC[6];
    float v_e4 = v_134_1;
    float v_128 = x87_r4_3;
    float v_108 = x87_r4_3;
    long double x87_r4_5 = x87_r7_8 * objC[7];
    float v_e0 = v_128;
    float v_12c = x87_r4_5;
    float v_104 = x87_r4_5;
    long double x87_r4_7 = x87_r7_8 * objC[8];
    float v_dc = v_12c;
    float v_d0 = *objC;
    float v_130 = x87_r4_7;
    float v_100 = x87_r4_7;
    float v_bc = v_134_1;
    float v_f0 = x87_r7_8;
    long double x87_r4_10 = x87_r7_8 * objC[0xc];
    float v_d8 = v_130;
    float v_b4 = v_12c;
    int32_t v_cc = objC[0xa];
    float v_124 = x87_r4_10;
    float v_ec = x87_r4_10;
    int32_t v_a8 = objC[9];
    float v_e8 = x87_r5_1;
    float v_b8 = v_128;
    float v_c8 = x87_r7_8;
    float v_b0 = v_130;
    float v_c4 = x87_r6_10;
    int32_t v_a4 = objC[0xa];
    long double x87_r6_12 = x87_r7_8 * objC[0xd];
    float v_9c = v_124;
    float v_c0 = x87_r6_12;
    float v_a0 = x87_r7_8;
    float v_98 = x87_r6_12;
    float v_90 = v_128;
    float v_8c = v_12c;
    void* v_140 = &v_80;
    int32_t** (* v_144)(int32_t* a1, int32_t* a2) = sub_50e730;
    int32_t v_148 = g_bcadc0;
    float v_94 = v_134_1;
    float v_88 = v_130;
    void v_170;
    memcpy(&v_170, &v_d0, 0x28);
    void v_198;
    memcpy(&v_198, &v_f8, 0x28);
    void v_1c0;
    memcpy(&v_1c0, &v_120, 0x28);
    Physics_CalculateSplineLength_13();
    void* v_140_1 = &v_80;
    int32_t** (* v_144_1)(int32_t* a1, int32_t* a2) = sub_50e730;
    v_148 = g_bcadc0;
    memcpy(&v_170, &v_a8, 0x28);
    memcpy(&v_198, &v_d0, 0x28);
    memcpy(&v_1c0, &v_f8, 0x28);
    return Physics_CalculateSplineLength_13();
}
