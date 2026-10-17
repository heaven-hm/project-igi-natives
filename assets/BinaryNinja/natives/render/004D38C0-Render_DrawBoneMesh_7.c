// Original IGI.EXE function: Render_DrawBoneMesh_7 (VA 0x004D38C0; static CFG gate PASS, CFG score 0.917).
#include "Render_DrawBoneMesh_7.h"
int32_t Render_DrawBoneMesh_7(int32_t a1, void* a2)

{
    float v_28;
    memcpy(&v_28, a1, 0x28);
    float v_18;
    float v_8;
    long double x87_r7_2 = v_8 + v_18 + v_28;
    long double f0 = 0f;
    x87_r7_2 - f0;
    float v_48;
    float v_3c;

    if (*(&((x87_r7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0) ? 1 : 0) << 0xa
        | (x87_r7_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_8 = v_18;
        long double f1_1 = v_28;
        x87_r7_8 - f1_1;
        int32_t objC1 = 0;
        v_48 = 1.40129846e-45f;
        int32_t v_44_1 = 2;
        int32_t v_40_1 = 0;

        if (!(*(&((x87_r7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            objC1 = 1;

        long double x87_r7_9 = v_8;
        long double f2_1 = (&v_28)[objC1 * 4];
        x87_r7_9 - f2_1;

        if (!(*(&((x87_r7_9 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            objC1 = 2;

        int32_t tmpD1 = (&v_48)[objC1];
        int32_t srcS1 = (&v_48)[tmpD1];
        long double x87_r7_14 =
            sqrtl((&v_28)[objC1 * 4] - (&v_28)[tmpD1 * 4] - (&v_28)[srcS1 * 4] + 1f);
        (&v_3c)[objC1] = x87_r7_14 * 0.5f;
        long double f3_1 = 0f;
        x87_r7_14 - f3_1;

        if (!(*(&((x87_r7_14 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            x87_r7_14 = 0.5f / x87_r7_14;

        int32_t dstD3 = tmpD1 * 3;
        int32_t valA9 = objC1 * 3;
        int32_t ctxB2 = srcS1 * 3;
        (&v_3c)[tmpD1] = ((&v_28)[dstD3 + objC1] + (&v_28)[valA9 + tmpD1]) * x87_r7_14;
        (&v_3c)[srcS1] = ((&v_28)[objC1 + ctxB2] + (&v_28)[valA9 + srcS1]) * x87_r7_14;
        float v_30_1 = -((((&v_28)[dstD3 + srcS1] - (&v_28)[ctxB2 + tmpD1]) * x87_r7_14));
    }
    else
    {
        long double x87_r7_4 = sqrtl(x87_r7_2 + 1f);
        float v_30 = x87_r7_4 * 0.5f;
        long double x87_r7_5 = 0.5f / x87_r7_4;
        float v_14;
        float v_c;
        v_3c = -(((v_14 - v_c) * x87_r7_5));
        float v_20;
        float v_10;
        float v_38_1 = -(((v_10 - v_20) * x87_r7_5));
        float v_24;
        float v_1c;
        float v_34_1 = -(((v_24 - v_1c) * x87_r7_5));
    }

    int32_t v_4;
    int32_t v_2c = v_4;
    Render_DrawRigidMesh_7(&v_28, &v_3c);
    float srcS2 = *(a2 + 8);
    v_48 = 0f;
    int32_t v_44_2 = 0;
    int32_t v_40_2 = 0;
    Render_DrawSplineMesh_7(&v_28, &v_3c, &v_48, srcS2, 0f);
    *(srcS2 + 0x60) = 0;
    *(srcS2 + 0x64) = 0;
    *(srcS2 + 0x68) = 0;
    *(srcS2 + 0x6c) = 0x3f800000;
    *(srcS2 + 0x70) = 0;
    return Render_DrawRigidMesh_7(0, 0);
}
