// Original IGI.EXE function: Render_SkinBones (VA 0x004D0790; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones.h"
int32_t Render_SkinBones(void* a1, int32_t a2)

{
    float* objC = *(a1 + 0x5a0);
    long double x87_r7_1 = *(a1 + 0x20) - g_bcab08;
    float v_18;

    if (!objC)
    {
        long double x87_r6_13 = *(a1 + 0x28) - g_bcab10;
        long double x87_r5_13 = *(a1 + 0x30) - g_bcab18;
        a1 = *(a1 + 0x44);
        long double x87_r4_6 = g_bcaaf4 * x87_r5_13;
        long double x87_r3_6 = g_bcaaf0 * x87_r6_13;
        v_18 = g_bcaae8 * x87_r5_13 + g_bcaae4 * x87_r6_13 + g_bcaae0 * x87_r7_1;
        float v_14_3 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_1;
        float v_10_2 = g_bcab00 * x87_r5_13 + g_bcaafc * x87_r6_13 + g_bcaaf8 * x87_r7_1;
    }
    else
    {
        v_18 = x87_r7_1;
        float v_14 = *(a1 + 0x28) - g_bcab10;
        float v_10 = *(a1 + 0x30) - g_bcab18;
        v_18 = v_18 + *objC;
        float v_14_1 = v_14 + objC[1];
        long double x87_r7_11 = v_10 + objC[2];
        float v_14_2 = g_bcaaf4 * x87_r7_11 + g_bcaaf0 * v_14_1 + g_bcaaec * v_18;
        long double x87_r6_10 = g_bcab00 * x87_r7_11 + g_bcaafc * v_14_1;
        long double x87_r5_11 = g_bcaaf8 * v_18;
        v_18 = g_bcaae8 * x87_r7_11 + g_bcaae4 * v_14_1 + g_bcaae0 * v_18;
        float v_10_1 = x87_r6_10 + x87_r5_11;
        a1 = objC[3];
    }

    return Render_DrawBoneMesh(&v_18, a1, a2);
}
