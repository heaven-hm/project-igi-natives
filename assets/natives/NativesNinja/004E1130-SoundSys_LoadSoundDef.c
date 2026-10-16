#include "004E1130-SoundSys_LoadSoundDef.h"
/* 0x004e1130 SoundSys_LoadSoundDef full linked: callers=2 callees=4 */
int32_t sub_4e1130(int32_t a1, int32_t a2, int32_t* a3, float a4, int32_t* a5, float a6)

{
    long double x87_r7 = a4;
    long double temp1 = 0f;
    x87_r7 - temp1;
    int16_t result;

    if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = a6;
        long double temp2_1 = 0f;
        x87_r7_1 - temp2_1;
        result = (x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe;
    }

    if (!(*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&result + 1) & 0x40))
    {
        double var_84;
        memcpy(&var_84, a1, 0x18);
        double var_7c;
        double var_74;
        long double x87_r4_4 = g_bcab00 * (var_74 - g_bcab18)
            + g_bcaafc * (var_7c - g_bcab10) + g_bcaaf8 * (var_84 - g_bcab08);
        double var_9c;
        memcpy(&var_9c, a2, 0x18);
        float var_a0 = x87_r4_4;
        double var_94;
        double var_8c;
        float var_a4 = g_bcab00 * (var_8c - g_bcab18) + g_bcaafc * (var_94 - g_bcab10)
            + g_bcaaf8 * (var_9c - g_bcab08);
        long double x87_r7_8 = var_a0;
        long double temp3_1 = 409.600006f;
        x87_r7_8 - temp3_1;
        long double x87_r7_9 = var_a4;
        long double temp4_1 = 409.600006f;
        x87_r7_9 - temp4_1;
        result = (x87_r7_9 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp4_1 ? 1 : 0) << 0xe;

        if (!(*(&((x87_r7_8 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            if (*(&result + 1) & 0x41)
            {
                long double x87_r7_18 = (409.600006f - var_a4) / (var_a0 - var_a4);
                var_9c = (var_84 - var_9c) * x87_r7_18 + var_9c;
                double var_94_1 = (var_7c - var_94) * x87_r7_18 + var_94;
                double var_8c_1 = (var_74 - var_8c) * x87_r7_18 + var_8c;
            }

            goto label_4e12eb;
        }

        if (!(*(&result + 1) & 0x41))
        {
            long double x87_r7_12 = (409.600006f - var_a0) / (var_a4 - var_a0);
            var_84 = (var_9c - var_84) * x87_r7_12 + var_84;
            double var_7c_1 = (var_94 - var_7c) * x87_r7_12 + var_7c;
            double var_74_1 = (var_8c - var_74) * x87_r7_12 + var_74;
        label_4e12eb:
            float var_64;
            sub_497f20(&var_64, &var_a0, &var_84);
            double* var_b4 = &var_9c;
            float var_6c;
            sub_497f20(&var_6c, &var_a4, var_b4);
            long double x87_r7_22 = a4;
            int32_t var_30_1 = *a3;
            int32_t var_28_1 = a3[2];
            int32_t var_2c_1 = a3[1];
            float edx_2 = var_a0;
            float var_48 = var_64;
            float var_34_1 = a4;
            float var_40_1 = edx_2;
            int32_t var_60;
            int32_t var_44_1 = var_60;
            int32_t var_c_1 = *a5;
            long double temp5_1 = 1f;
            x87_r7_22 - temp5_1;
            float var_10_1 = a6;
            int32_t var_68;
            int32_t var_20_1 = var_68;
            int32_t var_8_1 = a5[1];
            int32_t var_4_1 = a5[2];
            int32_t var_3c_1 = 0;
            int32_t var_38_1 = 0;
            int32_t var_18_1 = 0;
            int32_t var_14_1 = 0;
            float var_1c_1 = var_a4;
            float var_24_1 = var_6c;
            long double x87_r7_23;
            long double temp6_1;

            if (*(&((x87_r7_22 < temp5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_22, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                x87_r7_23 = a6;
                temp6_1 = 1f;
                x87_r7_23 - temp6_1;
                int32_t var_58_1 = 0x40060000;
            }

            if (!(*(&((x87_r7_22 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_22, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_22 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                    (x87_r7_23 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_23, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_23 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                int32_t var_58_2 = 0xc0000;

            g_a84a50 = 0;
            g_a84a58 = 0;
            int32_t eax_7 = g_a84a54;
            int32_t var_5c;
            int32_t* __saved_esi_2 = &var_5c;
            var_5c = 1;
            int32_t var_54_1 = 0xffffffff;
            int32_t var_50_1 = 2;
            float* var_4c_1 = &var_48;
            return (*((eax_7 << 2) + &g_a94e84))(__saved_esi_2);
        }
    }

    return result;
}
