#include "gi_platform.h"
#include "00530F20-Particle_FadeParticles_3.h"
int32_t Particle_FadeParticles_3(double* a1, float a2)

{
    long double x87_r7_1 = *a1 - g_bcab08;
    double v_10 = a1[1] - g_bcab10;
    long double x87_r6_4 = v_10;
    long double fpu5 = a1[2] - g_bcab18;
    float v_18 = g_bcaae8 * fpu5 + g_bcaae4 * x87_r6_4 + g_bcaae0 * x87_r7_1;
    float v_24 = v_18;
    float v_14 = g_bcaaf4 * fpu5 + g_bcaaf0 * x87_r6_4 + g_bcaaec * x87_r7_1;
    v_10 = g_bcab00 * fpu5 + g_bcaafc * x87_r6_4 + g_bcaaf8 * x87_r7_1;
    long double x87_r7_3 = v_18;
    long double f1 = 0.0f;
    x87_r7_3 - f1;
    long double x87_r7_4 = v_18;

    if (*(&((x87_r7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_4 = -(x87_r7_4);

    long double x87_r7_5 = x87_r7_4 - a2;
    long double x87_r6_6 = v_14;
    long double f2 = 0.0f;
    x87_r6_6 - f2;
    long double x87_r6_7 = v_14;

    if (*(&((x87_r6_6 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, f2) ? 1 : 0) << 0xa
            | (x87_r6_6 == f2 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_7 = -(x87_r6_7);

    float v_20_1 = x87_r6_7 - a2;
    long double x87_r6_10 = v_10 + a2;
    float v_1c_1 = x87_r6_10;
    long double f3 = 0.0f;
    x87_r6_10 - f3;

    if (*(&((x87_r6_10 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_10, f3) ? 1 : 0) << 0xa
            | (x87_r6_10 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        return 0;

    long double f4 = 0.0f;
    x87_r7_5 - f4;

    if (!(*(&((x87_r7_5 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f4) ? 1 : 0) << 0xa
        | (x87_r7_5 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double x87_r6_12 = g_bcab20 * v_1c_1;
        x87_r7_5 - x87_r6_12;

        if (!(*(&((x87_r7_5 < x87_r6_12 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, x87_r6_12) ? 1 : 0) << 0xa
                | (x87_r7_5 == x87_r6_12 ? 1 : 0) << 0xe) + 1) & 0x41))
            return 0;
    }

    long double x87_r7_9 = v_20_1;
    long double f5 = 0.0f;
    x87_r7_9 - f5;

    if (!(*(&((x87_r7_9 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f5) ? 1 : 0) << 0xa
        | (x87_r7_9 == f5 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_11 = g_bcab24 * v_1c_1;
        long double f6_1 = v_20_1;
        x87_r7_11 - f6_1;

        if (*(&((x87_r7_11 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
            return 0;
    }

    return 1;
}
