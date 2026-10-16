#include "00449E50-GlassShatter_LoadParameters.h"
/* 0x00449e50 GlassShatter_LoadParameters full linked: callers=0 callees=1 */
int32_t sub_449e50(float a1)

{
    float esi = a1;
    int32_t i = 0;
    float var_18 = *(esi + 0xa8) * -44.6008873f;
    float var_14 = *(esi + 0xac) * -44.6008873f;
    float var_10 = *(esi + 0xb0) * -44.6008873f;
    g_57c248 = *(esi + 0xbc) * 0.0333333351f;
    void* eax = *(esi + 0x2b040);

    if (*(eax + 0x9c) > 0)
    {
        int32_t edx_1 = 0;

        do
        {
            void* eax_2 = *(eax + 0x6c) + edx_1;
            i += 1;
            edx_1 += 0x50;
            *(eax_2 + 0x30) = g_57c248;
            *(eax_2 + 0x34) = g_57c248;
            *(eax_2 + 0x38) = g_57c248;
            eax = *(esi + 0x2b040);
        } while (i < *(eax + 0x9c));
    }

    int32_t i_1 = 0;

    if (*(esi + 0xb8) > 0)
    {
        float* eax_4 = esi + 0xd8;
        int32_t* edx_2 = esi + 0x17800;

        do
        {
            if (eax_4[0x11])
            {
                long double x87_r7_9 = eax_4[3] - *eax_4;
                long double x87_r6_2 = eax_4[4] - eax_4[1];
                long double x87_r5_2 = eax_4[5] - eax_4[2];
                int32_t ecx_1 = eax_4[0xc];
                float var_54_1 = eax_4[6] - *eax_4;
                float var_50_1 = eax_4[7] - eax_4[1];
                float var_4c_1 = eax_4[8] - eax_4[2];
                float var_48_1 = eax_4[9] - *eax_4;
                float var_44_1 = eax_4[0xa] - eax_4[1];
                float var_40_1 = eax_4[0xb] - eax_4[2];
                long double x87_r4_16 = x87_r5_2 * *(ecx_1 * 0x28 + 0x57c288)
                    + x87_r6_2 * *(ecx_1 * 0x28 + 0x57c284)
                    + x87_r7_9 * *(ecx_1 * 0x28 + &g_57c280);
                long double x87_r4_20 = x87_r7_9 * *(ecx_1 * 0x28 + 0x57c28c)
                    + x87_r5_2 * *(ecx_1 * 0x28 + 0x57c294)
                    + x87_r6_2 * *(ecx_1 * 0x28 + 0x57c290);
                long double x87_r7_13 = x87_r7_9 * *(ecx_1 * 0x28 + 0x57c298)
                    + x87_r5_2 * *(ecx_1 * 0x28 + 0x57c2a0)
                    + x87_r6_2 * *(ecx_1 * 0x28 + 0x57c29c);
                float var_30_1 = var_4c_1 * *(ecx_1 * 0x28 + 0x57c288)
                    + var_50_1 * *(ecx_1 * 0x28 + 0x57c284)
                    + var_54_1 * *(ecx_1 * 0x28 + &g_57c280);
                float var_2c_1 = var_54_1 * *(ecx_1 * 0x28 + 0x57c28c)
                    + var_4c_1 * *(ecx_1 * 0x28 + 0x57c294)
                    + var_50_1 * *(ecx_1 * 0x28 + 0x57c290);
                float var_28_1 = var_54_1 * *(ecx_1 * 0x28 + 0x57c298)
                    + var_4c_1 * *(ecx_1 * 0x28 + 0x57c2a0)
                    + var_50_1 * *(ecx_1 * 0x28 + 0x57c29c);
                float var_24_1 = var_40_1 * *(ecx_1 * 0x28 + 0x57c288)
                    + var_44_1 * *(ecx_1 * 0x28 + 0x57c284)
                    + var_48_1 * *(ecx_1 * 0x28 + &g_57c280);
                float var_20_1 = var_48_1 * *(ecx_1 * 0x28 + 0x57c28c)
                    + var_40_1 * *(ecx_1 * 0x28 + 0x57c294)
                    + var_44_1 * *(ecx_1 * 0x28 + 0x57c290);
                float var_1c_1 = var_48_1 * *(ecx_1 * 0x28 + 0x57c298)
                    + var_40_1 * *(ecx_1 * 0x28 + 0x57c2a0)
                    + var_44_1 * *(ecx_1 * 0x28 + 0x57c29c);
                float var_38_1 = *edx_2 * *(ecx_1 * 0x28 + 0x57c290)
                    + edx_2[1] * *(ecx_1 * 0x28 + 0x57c294)
                    + edx_2[-1] * *(ecx_1 * 0x28 + 0x57c28c);
                long double x87_r6_38 =
                    *edx_2 * *(ecx_1 * 0x28 + 0x57c29c) + *(ecx_1 * 0x28 + 0x57c298) * edx_2[-1];
                long double x87_r5_42 = edx_2[1] * *(ecx_1 * 0x28 + 0x57c2a0);
                edx_2[-1] = *(ecx_1 * 0x28 + 0x57c288) * edx_2[1]
                    + edx_2[-1] * *(ecx_1 * 0x28 + &g_57c280)
                    + *edx_2 * *(ecx_1 * 0x28 + 0x57c284);
                *edx_2 = var_38_1;
                edx_2[1] = x87_r6_38 + x87_r5_42;
                long double x87_r6_41 = eax_4[0xd] + *eax_4;
                eax_4[-3] = eax_4[-6];
                int32_t ebp_2 = eax_4[-5];
                a1 = x87_r6_41;
                *eax_4 = x87_r6_41;
                long double x87_r6_43 = eax_4[0xe] + eax_4[1];
                int32_t ecx_8 = eax_4[-4];
                eax_4[-2] = ebp_2;
                eax_4[-1] = ecx_8;
                float var_5c_1 = x87_r6_43;
                eax_4[1] = x87_r6_43;
                long double x87_r6_45 = eax_4[0xf] + eax_4[2];
                float var_58_1 = x87_r6_45;
                eax_4[2] = x87_r6_45;
                eax_4[3] = a1 + x87_r4_16;
                eax_4[4] = var_5c_1 + x87_r4_20;
                eax_4[5] = var_58_1 + x87_r7_13;
                eax_4[6] = a1 + var_30_1;
                eax_4[7] = var_5c_1 + var_2c_1;
                eax_4[8] = var_58_1 + var_28_1;
                eax_4[9] = a1 + var_24_1;
                eax_4[0xa] = var_5c_1 + var_20_1;
                eax_4[0xb] = var_58_1 + var_1c_1;
                eax_4[0xd] = var_18 + eax_4[0xd];
                eax_4[0xe] = var_14 + eax_4[0xe];
                eax_4[0xf] = var_10 + eax_4[0xf];
            }

            i_1 += 1;
            eax_4 = &eax_4[0x18];
            edx_2 = &edx_2[0x14];
        } while (i_1 < *(esi + 0xb8));
    }

    int32_t eax_5 = *(esi + 0xbc);
    int32_t result = eax_5 - 1;
    *(esi + 0xbc) = result;

    if (eax_5 != 1)
        return result;

    return QTask_FindType(esi);
}
