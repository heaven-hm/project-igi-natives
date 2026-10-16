#include "0047ED50-Weapon_UpdateMuzzleFlash_9.h"
/* 0x0047ed50 Weapon_UpdateMuzzleFlash_9 full linked: callers=1 callees=24 */
int32_t sub_47ed50(void* a1)

{
    long double x87_r7_1 = *(a1 + 0x110) * 27f;
    int32_t var_44 = 0;
    int32_t var_40 = 0;
    int32_t var_3c = 0;
    float var_6c = x87_r7_1;
    float var_70 = *(a1 + 0x100) * 0.5f;
    int16_t var_50 = var_6c * 0.100000001f;
    long double x87_r7_7 = sub_4b4770(Level_SetMission_5()) * 0.200000003f;
    int32_t eax_1 = *(a1 + 0x104);
    int32_t var_50_1 = (x87_r7_7 + 0.800000012f) * var_6c;

    if (eax_1 == 2)
    {
        long double x87_r7_10 = *(a1 + 0xfc);
        long double temp1_1 = var_70;
        x87_r7_10 - temp1_1;
        eax_1 = (x87_r7_10 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&eax_1 + 1) & 0x41))
        {
            float var_6c_2 =
                sub_4b4770(Level_SetMission_5()) * (x87_r7_10 - var_70) * 0.200000003f / var_70;
            float var_90_2 = sub_4b4770(Level_SetMission_5()) * 6.28318548f;
            float var_94_2 = (0.5f - sub_4b4770(Level_SetMission_5())) * 0.00628318591f;
            eax_1 = sub_4fe120(*(a1 + 0x108), a1 + 0x20, &var_44, var_6c_2, var_94_2, var_90_2,
                0x3f800000, var_50, var_50_1);
        }

        long double x87_r7_22 = *(a1 + 0xfc);
        long double x87_r6_2 = var_70 * 1.5f;
        x87_r7_22 - x87_r6_2;
        eax_1 = (x87_r7_22 < x87_r6_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r7_22 == x87_r6_2 ? 1 : 0) << 0xe | 0x3000;

        if (*(&eax_1 + 1) & 1)
        {
            float var_6c_4 = sub_4b4770(Level_SetMission_5()) * x87_r7_22 / x87_r6_2 * 0.200000003f;
            float var_90_4 = sub_4b4770(Level_SetMission_5()) * 6.28318548f;
            float var_94_4 = (0.5f - sub_4b4770(Level_SetMission_5())) * 0.00628318591f;
            return sub_4fe120(*(a1 + 0x10c), a1 + 0x20, &var_44, var_6c_4, var_94_4, var_90_4,
                0x3f800000, var_50, var_50_1);
        }
    }
    else if (eax_1 == 1)
    {
        long double x87_r7_32 = *(a1 + 0xfc);
        long double temp2_1 = var_70;
        x87_r7_32 - temp2_1;
        eax_1 = (x87_r7_32 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_32, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_32 == temp2_1 ? 1 : 0) << 0xe;

        if (!(*(&eax_1 + 1) & 0x41))
        {
            long double x87_r7_34 = *(a1 + 0x110) * 4096f;
            long double x87_r6_6 = *(a1 + 0xf8);
            long double x87_r5_2 = *(a1 + 0xf4);
            long double x87_r4_1 = *(a1 + 0xf0);
            int32_t var_58_1 = 0;
            int32_t var_54_1 = 0;
            double var_60_1 =
                sqrtl(x87_r4_1 * x87_r4_1 + x87_r5_2 * x87_r5_2 + x87_r6_6 * x87_r6_6);
            long double x87_r6_8 = var_60_1;
            x87_r6_8 - x87_r7_34;
            eax_1 = (x87_r6_8 < x87_r7_34 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_8, x87_r7_34) ? 1 : 0) << 0xa
                | (x87_r6_8 == x87_r7_34 ? 1 : 0) << 0xe | 0x3800;
            long double x87_r7_35;

            x87_r7_35 = *(&eax_1 + 1) & 0x41 ? var_60_1 : var_60_1 / x87_r7_34;

            long double x87_r6_9 = *(a1 + 0xf0);
            double var_30_1 = *(a1 + 0xf4);
            double var_28_1 = *(a1 + 0xf8);
            double var_20;
            memcpy(&var_20, a1 + 0x20, 0x18);
            double var_38 = x87_r6_9 * x87_r7_35;
            double var_30_2 = var_30_1 * x87_r7_35;
            double var_28_2 = var_28_1 * x87_r7_35;
            long double x87_r7_38 = 0.0;
            long double temp3_1 = var_60_1;
            x87_r7_38 - temp3_1;
            eax_1 = (x87_r7_38 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_38, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_38 == temp3_1 ? 1 : 0) << 0xe;

            if (*(&eax_1 + 1) & 1)
            {
                int16_t eax_16;

                do
                {
                    float var_6c_6 = sub_4b4770(Level_SetMission_5()) * (*(a1 + 0xfc) - var_70)
                        * 0.200000003f / var_70;
                    float var_90_6 = sub_4b4770(Level_SetMission_5()) * 6.28318548f;
                    float var_94_6 = (0.5f - sub_4b4770(Level_SetMission_5())) * 0.00628318591f;
                    sub_4fe120(*(a1 + 0x10c), &var_20, &var_44, var_6c_6, var_94_6, var_90_6,
                        0x3f800000, var_50, var_50_1);
                    var_20 = var_20 + var_38;
                    double var_18 = var_18 + var_30_2;
                    double var_10 = var_10 + var_28_2;
                    long double x87_r7_57 = x87_r7_35 + 0.0;
                    var_58_1 = x87_r7_57;
                    long double temp4_1 = var_60_1;
                    x87_r7_57 - temp4_1;
                    eax_16 = (x87_r7_57 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_57, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_57 == temp4_1 ? 1 : 0) << 0xe;
                } while (*(&eax_16 + 1) & 1);

                return eax_16;
            }
        }
    }

    return eax_1;
}
