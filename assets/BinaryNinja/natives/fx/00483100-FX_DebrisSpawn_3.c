// Original IGI.EXE function: FX_DebrisSpawn_3 (VA 0x00483100; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_3.h"
float* FX_DebrisSpawn_3(float* a1, double* a2, double* a3)

{
    double v_24 = *a3 - *a2;
    long double x87_r7_3 = a3[1] - a2[1];
    double v_1c = x87_r7_3;
    double v_14 = a3[2] - a2[2];
    long double x87_r6_2 = v_24;
    long double f0 = 0.0;
    x87_r6_2 - f0;
    long double f1_1;

    if (*(&((x87_r6_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f0) ? 1 : 0) << 0xa
        | (x87_r6_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        f1_1 = 0.0;
        x87_r7_3 - f1_1;
    }

    long double x87_r7_4;

    if (!(*(&((x87_r6_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f0) ? 1 : 0) << 0xa
        | (x87_r6_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
        (x87_r7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
        | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        Sys_FreeMemory_11(&v_24);
        x87_r7_4 = v_14;
    }
    else
    {
        x87_r7_4 = 0.0;
        v_24 = 0;
        *(&v_24 + 4) = 0;
        v_1c = 0;
        *(&v_1c + 4) = 0x3ff00000;
    }

    float v_c = v_24;
    float v_8 = v_1c;
    long double x87_r6_5 = 0f;
    float v_30 = v_8 - x87_r6_5;
    float v_3c = v_30;
    float v_2c = -((v_c - x87_r6_5));
    long double x87_r6_7 = v_30;
    long double f2 = 0f;
    x87_r6_7 - f2;
    float v_38 = v_2c;
    long double x87_r6_13;

    if (!(*(&((x87_r6_7 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, f2) ? 1 : 0) << 0xa
        | (x87_r6_7 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_483201:
        long double x87_r6_10 = 0f;
        long double x87_r5_5 = v_2c;
        long double x87_r4_1 = v_30;
        long double x87_r6_12 =
            1.0 / sqrtl(x87_r4_1 * x87_r4_1 + x87_r5_5 * x87_r5_5 + x87_r6_10 * x87_r6_10);
        v_3c = v_30 * x87_r6_12;
        v_38 = v_38 * x87_r6_12;
        x87_r6_13 = x87_r6_12 * 0f;
    }
    else
    {
        long double x87_r6_8 = v_2c;
        long double f3_1 = 0f;
        x87_r6_8 - f3_1;

        if (!(*(&((x87_r6_8 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, f3_1) ? 1 : 0) << 0xa
                | (x87_r6_8 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_483201;

        long double x87_r6_9 = 0f;
        long double f5_1 = 0f;
        x87_r6_9 - f5_1;

        if (!(*(&((x87_r6_9 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, f5_1) ? 1 : 0) << 0xa
                | (x87_r6_9 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_483201;

        x87_r6_13 = 0f;
    }

    float v_30_1 = v_38 * x87_r7_4 - x87_r6_13 * v_8;
    v_24 = v_30_1;
    float v_2c_1 = -((v_3c * x87_r7_4 - x87_r6_13 * v_c));
    *(&v_24 + 4) = v_2c_1;
    float v_28 = v_3c * v_8 - v_38 * v_c;
    long double x87_r5_21 = v_30_1;
    long double f4 = 0f;
    x87_r5_21 - f4;
    v_1c = v_28;

    if (!(*(&((x87_r5_21 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_21, f4) ? 1 : 0) << 0xa
        | (x87_r5_21 == f4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_4832d0:
        long double x87_r5_24 = v_28;
        long double x87_r4_9 = v_2c_1;
        long double x87_r3_6 = v_30_1;
        long double x87_r5_26 =
            1.0 / sqrtl(x87_r3_6 * x87_r3_6 + x87_r4_9 * x87_r4_9 + x87_r5_24 * x87_r5_24);
        v_24 = v_30_1 * x87_r5_26;
        *(&v_24 + 4) = *(&v_24 + 4) * x87_r5_26;
        v_1c = v_1c * x87_r5_26;
    }
    else
    {
        long double x87_r5_22 = v_2c_1;
        long double f6_1 = 0f;
        x87_r5_22 - f6_1;

        if (!(*(&((x87_r5_22 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_22, f6_1) ? 1 : 0) << 0xa
                | (x87_r5_22 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4832d0;

        long double x87_r5_23 = v_28;
        long double f7_1 = 0f;
        x87_r5_23 - f7_1;

        if (!(*(&((x87_r5_23 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_23, f7_1) ? 1 : 0) << 0xa
                | (x87_r5_23 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4832d0;
    }

    *a1 = v_3c;
    a1[3] = v_38;
    a1[6] = x87_r6_13;
    a1[1] = v_c;
    int32_t tmpD3 = v_24;
    a1[7] = x87_r7_4;
    a1[4] = v_8;
    int32_t objC5 = *(&v_24 + 4);
    a1[2] = tmpD3;
    a1[5] = objC5;
    a1[8] = v_1c;
    return a1;
}
