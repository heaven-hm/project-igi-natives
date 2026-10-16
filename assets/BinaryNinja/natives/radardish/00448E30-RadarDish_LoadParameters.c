#include "RadarDish_LoadParameters.h"
void* RadarDish_LoadParameters(void* a1)

{
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            int32_t valA = *((valA5 << 2) + &g_a970e0);

            if (valA)
            {
                valA(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    long double fpu7 = *(a1 + 0x140);
    long double f0 = *(a1 + 0x13c);
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_1 = *(a1 + 0x140);
        long double f2_1 = *(a1 + 0x13c);
        x87_r7_1 - f2_1;

        if (!(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_5 = *(a1 + 0x140);
            long double f4_1 = *(a1 + 0x13c);
            x87_r7_5 - f4_1;

            if (!(*(&((x87_r7_5 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_8 = *(a1 + 0x140) - *(*(a1 + 0x138) + 0x24) * 0.0333333351f;
                *(a1 + 0x140) = x87_r7_8;
                long double f6_1 = *(a1 + 0x13c);
                x87_r7_8 - f6_1;

                if (*(&((x87_r7_8 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    i = *(a1 + 0x13c);
                    *(a1 + 0x140) = i;
                }
            }
        }
        else
        {
            i = *(a1 + 0x138);
            long double x87_r7_4 = i[9] * 0.0333333351f + *(a1 + 0x140);
            *(a1 + 0x140) = x87_r7_4;
            long double f5_1 = *(a1 + 0x13c);
            x87_r7_4 - f5_1;

            if (!(*(&((x87_r7_4 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                *(a1 + 0x140) = *(a1 + 0x13c);
        }
    }

    long double x87_r7_11 = *(a1 + 0x140) * 0.0333333351f + *(a1 + 0x144);
    *(a1 + 0x144) = x87_r7_11;
    long double f1 = 360f;
    x87_r7_11 - f1;

    if (!(*(&((x87_r7_11 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f1) ? 1 : 0) << 0xa
        | (x87_r7_11 == f1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_13;
        long double f3_1;

        do
        {
            x87_r7_13 = *(a1 + 0x144) - 360f;
            *(a1 + 0x144) = x87_r7_13;
            f3_1 = 360f;
            x87_r7_13 - f3_1;
        } while (!(*(&((x87_r7_13 < f3_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_13, f3_1) ? 1 : 0) << 0xa | (x87_r7_13 == f3_1 ? 1 : 0) << 0xe)
            + 1) & 1));
    }

    int32_t* i_1 = i;
    float v_50;
    Sys_DispatchOpcode_12(&v_50, *(a1 + 0x144) * 0.0174532924f);
    float v_44;
    float v_38;
    float v_28 = v_44 * *(a1 + 0x14c) + v_38 * *(a1 + 0x150) + v_50 * *(a1 + 0x148);
    float v_4c;
    float v_40;
    float v_34;
    float v_24 = v_40 * *(a1 + 0x14c) + v_34 * *(a1 + 0x150) + v_4c * *(a1 + 0x148);
    float v_48;
    float v_3c;
    float v_30;
    float v_20 = v_3c * *(a1 + 0x14c) + v_30 * *(a1 + 0x150) + v_48 * *(a1 + 0x148);
    float v_1c = v_38 * *(a1 + 0x15c) + v_50 * *(a1 + 0x154) + v_44 * *(a1 + 0x158);
    float v_18 = v_34 * *(a1 + 0x15c) + v_4c * *(a1 + 0x154) + v_40 * *(a1 + 0x158);
    float v_14 = v_30 * *(a1 + 0x15c) + v_48 * *(a1 + 0x154) + v_3c * *(a1 + 0x158);
    float v_10 = v_44 * *(a1 + 0x164) + v_38 * *(a1 + 0x168) + v_50 * *(a1 + 0x160);
    void* result = *(a1 + 0x178);
    int32_t v_2c;
    int32_t v_4 = *(a1 + 0x16c) + v_2c + 1;
    float v_c = v_40 * *(a1 + 0x164) + v_34 * *(a1 + 0x168) + v_4c * *(a1 + 0x160);
    float v_8 = v_3c * *(a1 + 0x164) + v_30 * *(a1 + 0x168) + v_48 * *(a1 + 0x160);
    memcpy(a1 + 0x70, &v_28, 0x28);

    if (result)
    {
        *(result + 4) = *(a1 + 0x140) / *(*(a1 + 0x138) + 0x20);
        void* ctxB1 = *(a1 + 0x178);
        long double x87_r7_54 = *(ctxB1 + 4);
        long double f8_1 = 0f;
        x87_r7_54 - f8_1;
        result = (x87_r7_54 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_54, f8_1) ? 1 : 0) << 0xa
            | (x87_r7_54 == f8_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            *(ctxB1 + 4) = 0;
            return result;
        }

        long double x87_r7_55 = *(ctxB1 + 4);
        long double f9_1 = 1f;
        x87_r7_55 - f9_1;
        result = (x87_r7_55 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_55, f9_1) ? 1 : 0) << 0xa
            | (x87_r7_55 == f9_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            *(ctxB1 + 4) = 0x3f800000;
    }

    return result;
}
