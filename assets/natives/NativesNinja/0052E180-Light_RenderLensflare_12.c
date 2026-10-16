#include "0052E180-Light_RenderLensflare_12.h"
/* 0x0052e180 Light_RenderLensflare_12 full linked: callers=3 callees=0 */
void* sub_52e180(void* a1, float* a2, float a3)

{
    int32_t* eax = a3;
    long double x87_r7 = 0f;
    float ecx = *eax;
    long double x87_r6 = 0f;
    float edx = eax[1];
    float var_8 = x87_r6;
    long double x87_r5 = 0f;
    float var_4 = x87_r5;
    float var_10_1 = eax[2] * 0.100000001f;
    long double x87_r4_2 = ecx;
    long double temp0 = 0f;
    x87_r4_2 - temp0;

    if (!(*(&((x87_r4_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_2, temp0) ? 1 : 0) << 0xa
        | (x87_r4_2 == temp0 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
    {
    label_52e1f6:
        long double x87_r4_5 = edx;
        long double x87_r3_1 = ecx;
        long double x87_r2_1 = var_10_1;
        var_10_1 =
            1.0 / sqrtl(x87_r2_1 * x87_r2_1 + x87_r3_1 * x87_r3_1 + x87_r4_5 * x87_r4_5) * var_10_1;
    }
    else
    {
        long double x87_r4_3 = edx;
        long double temp1_1 = 0f;
        x87_r4_3 - temp1_1;

        if (!(*(&((x87_r4_3 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_3, temp1_1) ? 1 : 0) << 0xa
                | (x87_r4_3 == temp1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_52e1f6;

        long double x87_r4_4 = var_10_1;
        long double temp2_1 = 0f;
        x87_r4_4 - temp2_1;

        if (!(*(&((x87_r4_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_4, temp2_1) ? 1 : 0) << 0xa
                | (x87_r4_4 == temp2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_52e1f6;
    }

    int32_t i_2 = g_b041e8;

    if (i_2 > 0)
    {
        int32_t* edx_1 = g_b041e4;
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            long double x87_r4_10 = var_10_1;
            long double temp3_1 = 0f;
            x87_r4_10 - temp3_1;
            void* ecx_3 = g_b041f0 * *edx_1 + g_b041e0;

            if (!(*(&((x87_r4_10 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_10, temp3_1) ? 1 : 0) << 0xa
                | (x87_r4_10 == temp3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
            {
                x87_r7 = x87_r7 + var_10_1 * *(ecx_3 + 0xc);
                x87_r6 = x87_r6 + var_10_1 * *(ecx_3 + 0x10);
                x87_r5 = x87_r5 + var_10_1 * *(ecx_3 + 0x14);
            }

            edx_1 = &edx_1[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        var_4 = x87_r5;
        var_8 = x87_r6;
    }

    *a2 = x87_r7 + *(a1 + 0x4a54);
    a2[1] = var_8 + *(a1 + 0x4a58);
    a2[2] = var_4 + *(a1 + 0x4a5c);
    return a1;
}
