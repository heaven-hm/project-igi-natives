#include "SCamera_Cleanup_6.h"
int32_t SCamera_Cleanup_6(float a1)

{
    float srcS = a1;
    void* dstD = *(srcS + 0x25d0);

    if (*(dstD + 0x168))
    {
        double v_18;
        WeaponType_UpdateAnim(&v_18, srcS, 0);
        v_18 = v_18 + *(srcS + 0x20);
        double v_10;
        double v_10_1 = v_10 + *(srcS + 0x28);
        double v_8;
        double v_8_1 = v_8 + *(srcS + 0x30);
        float v_38;
        Display_RestoreDevice_15(&v_38, &a1, &v_18);
        long double x87_r7_7 = a1;
        long double f0_1 = 0f;
        x87_r7_7 - f0_1;
        int16_t valA2 = (x87_r7_7 < f0_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_7, f0_1) ? 1 : 0) << 0xa | (x87_r7_7 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&valA2 + 1) & 0x41))
        {
            valA2 = *(dstD + 0x169);
            float v_50_1;
            float v_4c_1;
            float v_40;
            float v_3c_1;

            if (valA2 || *(dstD + 0x16c))
            {
                v_4c_1 = 128f;
                v_50_1 = 0f;

                if (!*(srcS + 0x25d8))
                {
                    v_40 = 512f;
                    v_3c_1 = 512f;
                }
                else
                {
                    v_40 = 1433.59998f;
                    v_3c_1 = 1433.59998f;
                }
            }
            else
            {
                v_4c_1 = 0f;
                v_50_1 = 128f;

                if (!*(srcS + 0x25d8))
                {
                    v_40 = 307.200012f;
                    v_3c_1 = 307.200012f;
                    v_4c_1 = 0f;
                    v_50_1 = 64f;
                }
                else
                {
                    v_40 = 819.200012f;
                    v_3c_1 = 819.200012f;
                }
            }

            Display_SetGammaRamp_15(&v_40, &v_40, a1);
            long double x87_r7_9 = v_38 - v_40;
            float v_34;
            long double x87_r6_2 = v_34 - v_3c_1;
            long double x87_r5_2 = v_38 + v_40;
            long double x87_r7_11 = v_34 + v_3c_1;
            Qsprite_Register4Az(g_57c17c + 0x18, x87_r7_9, x87_r6_2, x87_r5_2, x87_r6_2,
                x87_r7_9, x87_r7_11, x87_r5_2, x87_r7_11, v_4c_1, v_50_1, 0f, a1, 0x3f000000,
                0, 0x1040008, 0);
        }
    }

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(srcS, 0);
}
