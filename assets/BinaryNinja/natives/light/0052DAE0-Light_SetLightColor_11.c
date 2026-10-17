// Original IGI.EXE function: Light_SetLightColor_11 (VA 0x0052DAE0; static CFG gate PASS, CFG score 1.000).
#include "Light_SetLightColor_11.h"
int32_t Light_SetLightColor_11(float a1, void* a2, double* a3)

{
    float objC = a1;
    int32_t valA5 = fabsl(*a3) / *(objC + 0x4a88) % 5 * 5 + fabsl(a3[1]) / *(objC + 0x4a88) % 5;
    int32_t valA7 = *a3;
    long double x87_r7_9 = (a3[1] + *(((valA5 + 0x48c) << 4) + objC)) * *(objC + 0x48b0)
        + (*a3 + *((valA5 << 4) + objC + 0x48b8)) * *(objC + 0x48a8);
    long double x87_r7_12 = (x87_r7_9 - *(objC + 0x4a8c)) / *(objC + 0x4a84) * 6.28318548f;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(x87_r7_12);
    long double x87_r5_3 = (fp0 + 1f) * *(objC + 0x4a80) + *(objC + 0x4a94);
    *(a2 + 8) = valA7;
    *(a2 + 0xc) = *(a3 + 4);
    *(a2 + 0x10) = a3[1];
    int32_t valA10 = *(a3 + 0xc);
    *(a2 + 0x18) = x87_r5_3;
    *(a2 + 0x14) = valA10;
    *(a2 + 0x60) = a3[2] - x87_r5_3;
    a1 = fabsl(fp0);
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(x87_r7_12);
    long double f2 = 0f;
    fp0_1 - f2;
    long double x87_r7_15 = 1f - a1;
    bool c1_2 = /* bool c1_2 = unknown  {fsub fp0, dword [esp+0xc]} */;
    long double x87_r6_8 = *(objC + 0x4888) * x87_r7_15 * *(objC + 0x4a98);
    long double x87_r6_13;

    if (*(&((fp0_1 < f2 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
        | (FCMP_UO(fp0_1, f2) ? 1 : 0) << 0xa | (fp0_1 == f2 ? 1 : 0) << 0xe | 0x3000) + 1)
        & 0x41)
    {
        *(a2 + 0x38) = x87_r6_8;
        x87_r6_13 = *(objC + 0x4890) * x87_r7_15 * *(objC + 0x4a98);
    }
    else
    {
        *(a2 + 0x38) = -(x87_r6_8);
        x87_r6_13 = -((*(objC + 0x4890) * x87_r7_15 * *(objC + 0x4a98)));
    }

    *(a2 + 0x3c) = x87_r6_13;
    long double x87_r7_19 = (a1 + 1f) * 0.5f;
    *(a2 + 0x40) = x87_r7_19;
    long double x87_r6_16 = *(a2 + 0x38);
    long double f5 = 0f;
    x87_r6_16 - f5;

    if (!(*(&((x87_r6_16 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_16, f5) ? 1 : 0) << 0xa
        | (x87_r6_16 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_52dc40:
        long double x87_r5_5 = *(a2 + 0x3c);
        long double x87_r4_1 = *(a2 + 0x38);
        long double x87_r6_24 =
            1.0 / sqrtl(x87_r7_19 * x87_r7_19 + x87_r4_1 * x87_r4_1 + x87_r5_5 * x87_r5_5);
        *(a2 + 0x38) = *(a2 + 0x38) * x87_r6_24;
        *(a2 + 0x3c) = *(a2 + 0x3c) * x87_r6_24;
        *(a2 + 0x40) = x87_r7_19 * x87_r6_24;
    }
    else
    {
        long double x87_r6_17 = *(a2 + 0x3c);
        long double f6_1 = 0f;
        x87_r6_17 - f6_1;

        if (!(*(&((x87_r6_17 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_17, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_17 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_52dc40;

        long double f7_1 = 0f;
        x87_r7_19 - f7_1;

        if (!(*(&((x87_r7_19 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f7_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_52dc40;
    }

    *(a2 + 0x4c) = *(g_a44344 + 0xd64);
    int32_t result = *(g_a44344 + 0xd3c);
    *(a2 + 0x58) = 1;
    *(a2 + 0x50) = result;
    return result;
}
