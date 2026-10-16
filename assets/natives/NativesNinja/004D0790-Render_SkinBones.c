#include "004D0790-Render_SkinBones.h"
/* 0x004d0790 Render_SkinBones full linked: callers=1 callees=1 */
int32_t sub_4d0790(void* a1, int32_t a2)

{
    float* ecx = *(a1 + 0x5a0);
    long double x87_r7_1 = *(a1 + 0x20) - g_bcab08;
    float var_18;

    if (!ecx)
    {
        long double x87_r6_13 = *(a1 + 0x28) - g_bcab10;
        long double x87_r5_13 = *(a1 + 0x30) - g_bcab18;
        a1 = *(a1 + 0x44);
        long double x87_r4_6 = g_bcaaf4 * x87_r5_13;
        long double x87_r3_6 = g_bcaaf0 * x87_r6_13;
        var_18 = g_bcaae8 * x87_r5_13 + g_bcaae4 * x87_r6_13 + g_bcaae0 * x87_r7_1;
        float var_14_3 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_1;
        float var_10_2 = g_bcab00 * x87_r5_13 + g_bcaafc * x87_r6_13 + g_bcaaf8 * x87_r7_1;
    }
    else
    {
        var_18 = x87_r7_1;
        float var_14 = *(a1 + 0x28) - g_bcab10;
        float var_10 = *(a1 + 0x30) - g_bcab18;
        var_18 = var_18 + *ecx;
        float var_14_1 = var_14 + ecx[1];
        long double x87_r7_11 = var_10 + ecx[2];
        float var_14_2 = g_bcaaf4 * x87_r7_11 + g_bcaaf0 * var_14_1 + g_bcaaec * var_18;
        long double x87_r6_10 = g_bcab00 * x87_r7_11 + g_bcaafc * var_14_1;
        long double x87_r5_11 = g_bcaaf8 * var_18;
        var_18 = g_bcaae8 * x87_r7_11 + g_bcaae4 * var_14_1 + g_bcaae0 * var_18;
        float var_10_1 = x87_r6_10 + x87_r5_11;
        a1 = ecx[3];
    }

    return sub_4d03d0(&var_18, a1, a2);
}
