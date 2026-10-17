// Original IGI.EXE function: Particle_FadeParticles_3 (VA 0x00530F20; static CFG gate PASS, CFG score 1.000).
#include "Particle_FadeParticles_3.h"
int32_t Particle_FadeParticles_3(double* context, float param_2)

{
    long double fpu_val_7_1 = *context - g_bcab08;
    double item_10 = context[1] - g_bcab10;
    long double fpu_val_6_4 = item_10;
    long double fpu5 = context[2] - g_bcab18;
    float item_18 = g_bcaae8 * fpu5 + g_bcaae4 * fpu_val_6_4 + g_bcaae0 * fpu_val_7_1;
    float item_24 = item_18;
    float item_14 = g_bcaaf4 * fpu5 + g_bcaaf0 * fpu_val_6_4 + g_bcaaec * fpu_val_7_1;
    item_10 = g_bcab00 * fpu5 + g_bcaafc * fpu_val_6_4 + g_bcaaf8 * fpu_val_7_1;
    long double fpu_val_7_3 = item_18;
    long double f1 = 0.0f;
    fpu_val_7_3 - f1;
    long double fpu_val_7_4 = item_18;

    if (*(&((fpu_val_7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        fpu_val_7_4 = -(fpu_val_7_4);

    long double fpu_val_7_5 = fpu_val_7_4 - param_2;
    long double fpu_val_6_6 = item_14;
    long double f2 = 0.0f;
    fpu_val_6_6 - f2;
    long double fpu_val_6_7 = item_14;

    if (*(&((fpu_val_6_6 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_6, f2) ? 1 : 0) << 0xa
            | (fpu_val_6_6 == f2 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        fpu_val_6_7 = -(fpu_val_6_7);

    float item_20_1 = fpu_val_6_7 - param_2;
    long double fpu_val_6_10 = item_10 + param_2;
    float item_1c_1 = fpu_val_6_10;
    long double f3 = 0.0f;
    fpu_val_6_10 - f3;

    if (*(&((fpu_val_6_10 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_10, f3) ? 1 : 0) << 0xa
            | (fpu_val_6_10 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        return 0;

    long double f4 = 0.0f;
    fpu_val_7_5 - f4;

    if (!(*(&((fpu_val_7_5 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_5 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double fpu_val_6_12 = g_bcab20 * item_1c_1;
        fpu_val_7_5 - fpu_val_6_12;

        if (!(*(&((fpu_val_7_5 < fpu_val_6_12 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_5, fpu_val_6_12) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == fpu_val_6_12 ? 1 : 0) << 0xe) + 1) & 0x41))
            return 0;
    }

    long double fpu_val_7_9 = item_20_1;
    long double f5 = 0.0f;
    fpu_val_7_9 - f5;

    if (!(*(&((fpu_val_7_9 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_9 == f5 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_11 = g_bcab24 * item_1c_1;
        long double f6_1 = item_20_1;
        fpu_val_7_11 - f6_1;

        if (*(&((fpu_val_7_11 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_11 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
            return 0;
    }

    return 1;
}
