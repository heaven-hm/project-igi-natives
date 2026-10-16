#include "gi_platform.h"
#include "00497F20-Display_RestoreDevice_15.h"
float* Display_RestoreDevice_15(float* a1, float* a2, double* a3)

{
    long double x87_r7_1 = *a3 - g_bcab08;
    long double x87_r6_1 = a3[1] - g_bcab10;
    long double x87_r5_1 = a3[2] - g_bcab18;
    float* valA1 = a2;
    float v_c = g_bcaae8 * x87_r5_1 + g_bcaae4 * x87_r6_1 + g_bcaae0 * x87_r7_1;
    float v_8 = g_bcaaf4 * x87_r5_1 + g_bcaaf0 * x87_r6_1 + g_bcaaec * x87_r7_1;
    long double x87_r4_11 =
        g_bcab00 * x87_r5_1 + g_bcaafc * x87_r6_1 + g_bcaaf8 * x87_r7_1;
    *valA1 = x87_r4_11;
    long double f0 = 0.0f;
    x87_r4_11 - f0;
    valA1 = (x87_r4_11 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_11, f0) ? 1 : 0) << 0xa
        | (x87_r4_11 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&valA1 + 1) & 0x41)
        return valA1;

    long double x87_r7_3 = 1.0 / x87_r4_11;
    *a1 = g_bcab28 * v_c * x87_r7_3 + g_bcab30;
    a1[1] = g_bcab2c * v_8 * x87_r7_3 + g_bcab34;
    return a1;
}
