#include "00530F20-Particle_FadeParticles_3.h"
/* 0x00530f20 Particle_FadeParticles_3 full linked: callers=1 callees=0 */
int32_t sub_530f20(double* a1, float a2)

{
    long double x87_r7_1 = *a1 - g_bcab08;
    double var_10 = a1[1] - g_bcab10;
    long double x87_r6_4 = var_10;
    long double x87_r5 = a1[2] - g_bcab18;
    float var_18 = g_bcaae8 * x87_r5 + g_bcaae4 * x87_r6_4 + g_bcaae0 * x87_r7_1;
    float var_24 = var_18;
    float var_14 = g_bcaaf4 * x87_r5 + g_bcaaf0 * x87_r6_4 + g_bcaaec * x87_r7_1;
    var_10 = g_bcab00 * x87_r5 + g_bcaafc * x87_r6_4 + g_bcaaf8 * x87_r7_1;
    long double x87_r7_3 = var_18;
    long double temp1 = 0f;
    x87_r7_3 - temp1;
    long double x87_r7_4 = var_18;

    if (*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_4 = -(x87_r7_4);

    long double x87_r7_5 = x87_r7_4 - a2;
    long double x87_r6_6 = var_14;
    long double temp2 = 0f;
    x87_r6_6 - temp2;
    long double x87_r6_7 = var_14;

    if (*(&((x87_r6_6 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, temp2) ? 1 : 0) << 0xa
            | (x87_r6_6 == temp2 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_7 = -(x87_r6_7);

    float var_20_1 = x87_r6_7 - a2;
    long double x87_r6_10 = var_10 + a2;
    float var_1c_1 = x87_r6_10;
    long double temp3 = 0f;
    x87_r6_10 - temp3;

    if (*(&((x87_r6_10 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_10, temp3) ? 1 : 0) << 0xa
            | (x87_r6_10 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        return 0;

    long double temp4 = 0f;
    x87_r7_5 - temp4;

    if (!(*(&((x87_r7_5 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp4) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double x87_r6_12 = g_bcab20 * var_1c_1;
        x87_r7_5 - x87_r6_12;

        if (!(*(&((x87_r7_5 < x87_r6_12 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, x87_r6_12) ? 1 : 0) << 0xa
                | (x87_r7_5 == x87_r6_12 ? 1 : 0) << 0xe) + 1) & 0x41))
            return 0;
    }

    long double x87_r7_9 = var_20_1;
    long double temp5 = 0f;
    x87_r7_9 - temp5;

    if (!(*(&((x87_r7_9 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp5) ? 1 : 0) << 0xa
        | (x87_r7_9 == temp5 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_11 = g_bcab24 * var_1c_1;
        long double temp6_1 = var_20_1;
        x87_r7_11 - temp6_1;

        if (*(&((x87_r7_11 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1)
            return 0;
    }

    return 1;
}
