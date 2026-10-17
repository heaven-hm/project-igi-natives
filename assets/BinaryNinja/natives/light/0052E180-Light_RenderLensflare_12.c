// Original IGI.EXE function: Light_RenderLensflare_12 (VA 0x0052E180; static CFG gate PASS, CFG score 1.000).
#include "Light_RenderLensflare_12.h"
void* Light_RenderLensflare_12(void* a1, float* a2, float a3)

{
    int32_t* valA = a3;
    long double fpu7 = 0f;
    float objC = *valA;
    long double fpu6 = 0f;
    float tmpD = valA[1];
    float v_8 = fpu6;
    long double fpu5 = 0f;
    float v_4 = fpu5;
    float v_10_1 = valA[2] * 0.100000001f;
    long double x87_r4_2 = objC;
    long double f0 = 0f;
    x87_r4_2 - f0;

    if (!(*(&((x87_r4_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_2, f0) ? 1 : 0) << 0xa
        | (x87_r4_2 == f0 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
    {
    label_52e1f6:
        long double x87_r4_5 = tmpD;
        long double x87_r3_1 = objC;
        long double x87_r2_1 = v_10_1;
        v_10_1 =
            1.0 / sqrtl(x87_r2_1 * x87_r2_1 + x87_r3_1 * x87_r3_1 + x87_r4_5 * x87_r4_5) * v_10_1;
    }
    else
    {
        long double x87_r4_3 = tmpD;
        long double f1_1 = 0f;
        x87_r4_3 - f1_1;

        if (!(*(&((x87_r4_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_3, f1_1) ? 1 : 0) << 0xa
                | (x87_r4_3 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_52e1f6;

        long double x87_r4_4 = v_10_1;
        long double f2_1 = 0f;
        x87_r4_4 - f2_1;

        if (!(*(&((x87_r4_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_4, f2_1) ? 1 : 0) << 0xa
                | (x87_r4_4 == f2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_52e1f6;
    }

    int32_t i_2 = g_b041e8;

    if (i_2 > 0)
    {
        int32_t* tmpD1 = g_b041e4;
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            long double x87_r4_10 = v_10_1;
            long double f3_1 = 0f;
            x87_r4_10 - f3_1;
            void* objC3 = g_b041f0 * *tmpD1 + g_b041e0;

            if (!(*(&((x87_r4_10 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_10, f3_1) ? 1 : 0) << 0xa
                | (x87_r4_10 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
            {
                fpu7 = fpu7 + v_10_1 * *(objC3 + 0xc);
                fpu6 = fpu6 + v_10_1 * *(objC3 + 0x10);
                fpu5 = fpu5 + v_10_1 * *(objC3 + 0x14);
            }

            tmpD1 = &tmpD1[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        v_4 = fpu5;
        v_8 = fpu6;
    }

    *a2 = fpu7 + *(a1 + 0x4a54);
    a2[1] = v_8 + *(a1 + 0x4a58);
    a2[2] = v_4 + *(a1 + 0x4a5c);
    return a1;
}
