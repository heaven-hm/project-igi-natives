#include "gi_platform.h"
#include "00449E50-GlassShatter_LoadParameters.h"
int32_t GlassShatter_LoadParameters(float a1)

{
    float srcS = a1;
    int32_t i = 0;
    float v_18 = (*(int32_t*)(uintptr_t)(srcS + 0xa8)) * -44.6008873.0f;
    float v_14 = (*(int32_t*)(uintptr_t)(srcS + 0xac)) * -44.6008873.0f;
    float v_10 = (*(int32_t*)(uintptr_t)(srcS + 0xb0)) * -44.6008873.0f;
    g_57c248 = (*(int32_t*)(uintptr_t)(srcS + 0xbc)) * 0.0333333351.0f;
    void* valA = (*(int32_t*)(uintptr_t)(srcS + 0x2b040));

    if ((*(int32_t*)(uintptr_t)(valA + 0x9c)) > 0)
    {
        int32_t tmpD1 = 0;

        do
        {
            void* valA2 = (*(int32_t*)(uintptr_t)(valA + 0x6c)) + tmpD1;
            i += 1;
            tmpD1 += 0x50;
            *(valA2 + 0x30) = g_57c248;
            *(valA2 + 0x34) = g_57c248;
            *(valA2 + 0x38) = g_57c248;
            valA = (*(int32_t*)(uintptr_t)(srcS + 0x2b040));
        } while (i < (*(int32_t*)(uintptr_t)(valA + 0x9c)));
    }

    int32_t i_1 = 0;

    if ((*(int32_t*)(uintptr_t)(srcS + 0xb8)) > 0)
    {
        float* valA4 = srcS + 0xd8;
        int32_t* tmpD2 = srcS + 0x17800;

        do
        {
            if (valA4[0x11])
            {
                long double x87_r7_9 = valA4[3] - *valA4;
                long double x87_r6_2 = valA4[4] - valA4[1];
                long double x87_r5_2 = valA4[5] - valA4[2];
                int32_t objC1 = valA4[0xc];
                float v_54_1 = valA4[6] - *valA4;
                float v_50_1 = valA4[7] - valA4[1];
                float v_4c_1 = valA4[8] - valA4[2];
                float v_48_1 = valA4[9] - *valA4;
                float v_44_1 = valA4[0xa] - valA4[1];
                float v_40_1 = valA4[0xb] - valA4[2];
                long double x87_r4_16 = x87_r5_2 * *(objC1 * 0x28 + 0x57c288)
                    + x87_r6_2 * *(objC1 * 0x28 + 0x57c284)
                    + x87_r7_9 * *(objC1 * 0x28 + &g_57c280);
                long double x87_r4_20 = x87_r7_9 * *(objC1 * 0x28 + 0x57c28c)
                    + x87_r5_2 * *(objC1 * 0x28 + 0x57c294)
                    + x87_r6_2 * *(objC1 * 0x28 + 0x57c290);
                long double x87_r7_13 = x87_r7_9 * *(objC1 * 0x28 + 0x57c298)
                    + x87_r5_2 * *(objC1 * 0x28 + 0x57c2a0)
                    + x87_r6_2 * *(objC1 * 0x28 + 0x57c29c);
                float v_30_1 = v_4c_1 * *(objC1 * 0x28 + 0x57c288)
                    + v_50_1 * *(objC1 * 0x28 + 0x57c284)
                    + v_54_1 * *(objC1 * 0x28 + &g_57c280);
                float v_2c_1 = v_54_1 * *(objC1 * 0x28 + 0x57c28c)
                    + v_4c_1 * *(objC1 * 0x28 + 0x57c294)
                    + v_50_1 * *(objC1 * 0x28 + 0x57c290);
                float v_28_1 = v_54_1 * *(objC1 * 0x28 + 0x57c298)
                    + v_4c_1 * *(objC1 * 0x28 + 0x57c2a0)
                    + v_50_1 * *(objC1 * 0x28 + 0x57c29c);
                float v_24_1 = v_40_1 * *(objC1 * 0x28 + 0x57c288)
                    + v_44_1 * *(objC1 * 0x28 + 0x57c284)
                    + v_48_1 * *(objC1 * 0x28 + &g_57c280);
                float v_20_1 = v_48_1 * *(objC1 * 0x28 + 0x57c28c)
                    + v_40_1 * *(objC1 * 0x28 + 0x57c294)
                    + v_44_1 * *(objC1 * 0x28 + 0x57c290);
                float v_1c_1 = v_48_1 * *(objC1 * 0x28 + 0x57c298)
                    + v_40_1 * *(objC1 * 0x28 + 0x57c2a0)
                    + v_44_1 * *(objC1 * 0x28 + 0x57c29c);
                float v_38_1 = *tmpD2 * *(objC1 * 0x28 + 0x57c290)
                    + tmpD2[1] * *(objC1 * 0x28 + 0x57c294)
                    + tmpD2[-1] * *(objC1 * 0x28 + 0x57c28c);
                long double x87_r6_38 =
                    *tmpD2 * *(objC1 * 0x28 + 0x57c29c) + *(objC1 * 0x28 + 0x57c298) * tmpD2[-1];
                long double x87_r5_42 = tmpD2[1] * *(objC1 * 0x28 + 0x57c2a0);
                tmpD2[-1] = *(objC1 * 0x28 + 0x57c288) * tmpD2[1]
                    + tmpD2[-1] * *(objC1 * 0x28 + &g_57c280)
                    + *tmpD2 * *(objC1 * 0x28 + 0x57c284);
                *tmpD2 = v_38_1;
                tmpD2[1] = x87_r6_38 + x87_r5_42;
                long double x87_r6_41 = valA4[0xd] + *valA4;
                valA4[-3] = valA4[-6];
                int32_t flagP2 = valA4[-5];
                a1 = x87_r6_41;
                *valA4 = x87_r6_41;
                long double x87_r6_43 = valA4[0xe] + valA4[1];
                int32_t objC8 = valA4[-4];
                valA4[-2] = flagP2;
                valA4[-1] = objC8;
                float v_5c_1 = x87_r6_43;
                valA4[1] = x87_r6_43;
                long double x87_r6_45 = valA4[0xf] + valA4[2];
                float v_58_1 = x87_r6_45;
                valA4[2] = x87_r6_45;
                valA4[3] = a1 + x87_r4_16;
                valA4[4] = v_5c_1 + x87_r4_20;
                valA4[5] = v_58_1 + x87_r7_13;
                valA4[6] = a1 + v_30_1;
                valA4[7] = v_5c_1 + v_2c_1;
                valA4[8] = v_58_1 + v_28_1;
                valA4[9] = a1 + v_24_1;
                valA4[0xa] = v_5c_1 + v_20_1;
                valA4[0xb] = v_58_1 + v_1c_1;
                valA4[0xd] = v_18 + valA4[0xd];
                valA4[0xe] = v_14 + valA4[0xe];
                valA4[0xf] = v_10 + valA4[0xf];
            }

            i_1 += 1;
            valA4 = &valA4[0x18];
            tmpD2 = &tmpD2[0x14];
        } while (i_1 < (*(int32_t*)(uintptr_t)(srcS + 0xb8)));
    }

    int32_t valA5 = (*(int32_t*)(uintptr_t)(srcS + 0xbc));
    int32_t result = valA5 - 1;
    (*(int32_t*)(uintptr_t)(srcS + 0xbc)) = result;

    if (valA5 != 1)
        return result;

    return QTask_FindType(srcS);
}
