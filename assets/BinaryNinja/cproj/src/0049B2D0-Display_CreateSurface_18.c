#include "gi_platform.h"
#include "0049B2D0-Display_CreateSurface_18.h"
int32_t Display_CreateSurface_18(float a1, float a2)

{
    double* valA = a1;
    long double fpu7 = g_b46d04;
    long double x87_r3_3 = g_bcab00 * (valA[2] - g_bcab18)
        + g_bcaafc * (valA[1] - g_bcab10) + g_bcaaf8 * (*valA - g_bcab08);
    a1 = x87_r3_3 - a2;
    float v_14 = x87_r3_3 + a2;
    long double x87_r6_7 =
        g_bcabec * a1 * fpu7 * (1.4426950407214463 + 1.675171316223821e-10);
    long double x87_r5_9 = roundl(x87_r6_7);
    long double fp0;
    bool c1;
    fp0 = __f2xm1(x87_r6_7 - x87_r5_9);
    long double fp0_1;
    bool c1_1;
    fp0_1 = __fscale(fp0 + 1, x87_r5_9);
    a2 = 1.0f / fp0_1;
    long double x87_r6_14 =
        g_bcabec * v_14 * fpu7 * (1.4426950407214463 + 1.675171316223821e-10);
    long double x87_r5_17 = roundl(x87_r6_14);
    long double fp0_2;
    bool c1_2;
    fp0_2 = __f2xm1(x87_r6_14 - x87_r5_17);
    long double fp0_3;
    bool c1_3;
    fp0_3 = __fscale(fp0_2 + 1, x87_r5_17);
    long double x87_r7_2 = 1.0f / fp0_3;
    long double x87_r7_3 = x87_r7_2 - a2;
    long double f1 = 0.0f;
    x87_r7_3 - f1;
    long double x87_r7_4;
    long double f2_1;

    if (!(*(&((x87_r7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1) ? 1 : 0) << 0xa
        | (x87_r7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        x87_r7_4 = a2;
        f2_1 = 0.0f;
        x87_r7_4 - f2_1;
    }

    if (*(&((x87_r7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1) ? 1 : 0) << 0xa
        | (x87_r7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x40 || *(&((x87_r7_4 < f2_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1)
        & 0x40)
    {
        a2 = 0.0f;
        a1 = 0.0f;
    }
    else
    {
        long double x87_r7_8 = (x87_r7_2 * a1 - a2 * v_14) / x87_r7_3;
        a2 = (x87_r7_8 - (x87_r7_8 - a1) / a2) * g_bcabec;
        a1 = g_bcabec * x87_r7_8;
    }

    int32_t* valA2 = g_5ca114;
    ((int(*)())(uintptr_t)(*(*valA2 + 0x50)))(valA2, 0x24, a2);
    int32_t* valA3 = g_5ca114;
    return ((int(*)())(uintptr_t)(*(*valA3 + 0x50)))(valA3, 0x25, a1);
}
