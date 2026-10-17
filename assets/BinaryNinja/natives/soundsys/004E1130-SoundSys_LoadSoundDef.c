// Original IGI.EXE function: SoundSys_LoadSoundDef (VA 0x004E1130; static CFG gate PASS, CFG score 0.917).
#include "SoundSys_LoadSoundDef.h"
int32_t SoundSys_LoadSoundDef(int32_t a1, int32_t a2, int32_t* a3, float a4, int32_t* a5, float a6)

{
    long double fpu7 = a4;
    long double f1 = 0f;
    fpu7 - f1;
    int16_t result;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = a6;
        long double f2_1 = 0f;
        x87_r7_1 - f2_1;
        result = (x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe;
    }

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&result + 1) & 0x40))
    {
        double v_84;
        memcpy(&v_84, a1, 0x18);
        double v_7c;
        double v_74;
        long double x87_r4_4 = g_bcab00 * (v_74 - g_bcab18)
            + g_bcaafc * (v_7c - g_bcab10) + g_bcaaf8 * (v_84 - g_bcab08);
        double v_9c;
        memcpy(&v_9c, a2, 0x18);
        float v_a0 = x87_r4_4;
        double v_94;
        double v_8c;
        float v_a4 = g_bcab00 * (v_8c - g_bcab18) + g_bcaafc * (v_94 - g_bcab10)
            + g_bcaaf8 * (v_9c - g_bcab08);
        long double x87_r7_8 = v_a0;
        long double f3_1 = 409.600006f;
        x87_r7_8 - f3_1;
        long double x87_r7_9 = v_a4;
        long double f4_1 = 409.600006f;
        x87_r7_9 - f4_1;
        result = (x87_r7_9 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == f4_1 ? 1 : 0) << 0xe;

        if (!(*(&((x87_r7_8 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            if (*(&result + 1) & 0x41)
            {
                long double x87_r7_18 = (409.600006f - v_a4) / (v_a0 - v_a4);
                v_9c = (v_84 - v_9c) * x87_r7_18 + v_9c;
                double v_94_1 = (v_7c - v_94) * x87_r7_18 + v_94;
                double v_8c_1 = (v_74 - v_8c) * x87_r7_18 + v_8c;
            }

            goto label_4e12eb;
        }

        if (!(*(&result + 1) & 0x41))
        {
            long double x87_r7_12 = (409.600006f - v_a0) / (v_a4 - v_a0);
            v_84 = (v_9c - v_84) * x87_r7_12 + v_84;
            double v_7c_1 = (v_94 - v_7c) * x87_r7_12 + v_7c;
            double v_74_1 = (v_8c - v_74) * x87_r7_12 + v_74;
        label_4e12eb:
            float v_64;
            Display_RestoreDevice_15(&v_64, &v_a0, &v_84);
            double* v_b4 = &v_9c;
            float v_6c;
            Display_RestoreDevice_15(&v_6c, &v_a4, v_b4);
            long double x87_r7_22 = a4;
            int32_t v_30_1 = *a3;
            int32_t v_28_1 = a3[2];
            int32_t v_2c_1 = a3[1];
            float tmpD2 = v_a0;
            float v_48 = v_64;
            float v_34_1 = a4;
            float v_40_1 = tmpD2;
            int32_t v_60;
            int32_t v_44_1 = v_60;
            int32_t v_c_1 = *a5;
            long double f5_1 = 1f;
            x87_r7_22 - f5_1;
            float v_10_1 = a6;
            int32_t v_68;
            int32_t v_20_1 = v_68;
            int32_t v_8_1 = a5[1];
            int32_t v_4_1 = a5[2];
            int32_t v_3c_1 = 0;
            int32_t v_38_1 = 0;
            int32_t v_18_1 = 0;
            int32_t v_14_1 = 0;
            float v_1c_1 = v_a4;
            float v_24_1 = v_6c;
            long double x87_r7_23;
            long double f6_1;

            if (*(&((x87_r7_22 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_22, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                x87_r7_23 = a6;
                f6_1 = 1f;
                x87_r7_23 - f6_1;
                int32_t v_58_1 = 0x40060000;
            }

            if (!(*(&((x87_r7_22 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_22, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_22 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                    (x87_r7_23 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_23, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_23 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                int32_t v_58_2 = 0xc0000;

            g_a84a50 = 0;
            g_a84a58 = 0;
            int32_t valA7 = g_a84a54;
            int32_t v_5c;
            int32_t* __saved_esi_2 = &v_5c;
            v_5c = 1;
            int32_t v_54_1 = 0xffffffff;
            int32_t v_50_1 = 2;
            float* v_4c_1 = &v_48;
            return (*((valA7 << 2) + &g_a94e84))(__saved_esi_2);
        }
    }

    return result;
}
