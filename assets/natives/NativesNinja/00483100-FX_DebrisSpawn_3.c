#include "00483100-FX_DebrisSpawn_3.h"
/* 0x00483100 FX_DebrisSpawn_3 full linked: callers=4 callees=1 */
float* sub_483100(float* a1, double* a2, double* a3)

{
    double var_24 = *a3 - *a2;
    long double x87_r7_3 = a3[1] - a2[1];
    double var_1c = x87_r7_3;
    double var_14 = a3[2] - a2[2];
    long double x87_r6_2 = var_24;
    long double temp0 = 0.0;
    x87_r6_2 - temp0;
    long double temp1_1;

    if (*(&((x87_r6_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp0) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        temp1_1 = 0.0;
        x87_r7_3 - temp1_1;
    }

    long double x87_r7_4;

    if (!(*(&((x87_r6_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp0) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
        (x87_r7_3 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        sub_4b3100(&var_24);
        x87_r7_4 = var_14;
    }
    else
    {
        x87_r7_4 = 0.0;
        var_24 = 0;
        *(&var_24 + 4) = 0;
        var_1c = 0;
        *(&var_1c + 4) = 0x3ff00000;
    }

    float var_c = var_24;
    float var_8 = var_1c;
    long double x87_r6_5 = 0f;
    float var_30 = var_8 - x87_r6_5;
    float var_3c = var_30;
    float var_2c = -((var_c - x87_r6_5));
    long double x87_r6_7 = var_30;
    long double temp2 = 0f;
    x87_r6_7 - temp2;
    float var_38 = var_2c;
    long double x87_r6_13;

    if (!(*(&((x87_r6_7 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, temp2) ? 1 : 0) << 0xa
        | (x87_r6_7 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_483201:
        long double x87_r6_10 = 0f;
        long double x87_r5_5 = var_2c;
        long double x87_r4_1 = var_30;
        long double x87_r6_12 =
            1.0 / sqrtl(x87_r4_1 * x87_r4_1 + x87_r5_5 * x87_r5_5 + x87_r6_10 * x87_r6_10);
        var_3c = var_30 * x87_r6_12;
        var_38 = var_38 * x87_r6_12;
        x87_r6_13 = x87_r6_12 * 0f;
    }
    else
    {
        long double x87_r6_8 = var_2c;
        long double temp3_1 = 0f;
        x87_r6_8 - temp3_1;

        if (!(*(&((x87_r6_8 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, temp3_1) ? 1 : 0) << 0xa
                | (x87_r6_8 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_483201;

        long double x87_r6_9 = 0f;
        long double temp5_1 = 0f;
        x87_r6_9 - temp5_1;

        if (!(*(&((x87_r6_9 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, temp5_1) ? 1 : 0) << 0xa
                | (x87_r6_9 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_483201;

        x87_r6_13 = 0f;
    }

    float var_30_1 = var_38 * x87_r7_4 - x87_r6_13 * var_8;
    var_24 = var_30_1;
    float var_2c_1 = -((var_3c * x87_r7_4 - x87_r6_13 * var_c));
    *(&var_24 + 4) = var_2c_1;
    float var_28 = var_3c * var_8 - var_38 * var_c;
    long double x87_r5_21 = var_30_1;
    long double temp4 = 0f;
    x87_r5_21 - temp4;
    var_1c = var_28;

    if (!(*(&((x87_r5_21 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_21, temp4) ? 1 : 0) << 0xa
        | (x87_r5_21 == temp4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_4832d0:
        long double x87_r5_24 = var_28;
        long double x87_r4_9 = var_2c_1;
        long double x87_r3_6 = var_30_1;
        long double x87_r5_26 =
            1.0 / sqrtl(x87_r3_6 * x87_r3_6 + x87_r4_9 * x87_r4_9 + x87_r5_24 * x87_r5_24);
        var_24 = var_30_1 * x87_r5_26;
        *(&var_24 + 4) = *(&var_24 + 4) * x87_r5_26;
        var_1c = var_1c * x87_r5_26;
    }
    else
    {
        long double x87_r5_22 = var_2c_1;
        long double temp6_1 = 0f;
        x87_r5_22 - temp6_1;

        if (!(*(&((x87_r5_22 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_22, temp6_1) ? 1 : 0) << 0xa
                | (x87_r5_22 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4832d0;

        long double x87_r5_23 = var_28;
        long double temp7_1 = 0f;
        x87_r5_23 - temp7_1;

        if (!(*(&((x87_r5_23 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_23, temp7_1) ? 1 : 0) << 0xa
                | (x87_r5_23 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4832d0;
    }

    *a1 = var_3c;
    a1[3] = var_38;
    a1[6] = x87_r6_13;
    a1[1] = var_c;
    int32_t edx_3 = var_24;
    a1[7] = x87_r7_4;
    a1[4] = var_8;
    int32_t ecx_5 = *(&var_24 + 4);
    a1[2] = edx_3;
    a1[5] = ecx_5;
    a1[8] = var_1c;
    return a1;
}
