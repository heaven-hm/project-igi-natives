#include "0052B9F0-Light_UpdateGlobalLight_8.h"
/* 0x0052b9f0 Light_UpdateGlobalLight_8 full linked: callers=2 callees=4 */
void* sub_52b9f0(void* a1, int32_t a2, int32_t a3, void* a4)

{
    void* result = a1;

    if (a2 <= *(result + 0x6c))
    {
        void* esi_1 = a4;

        if (sub_52bcc0(result, a3, esi_1) == 1)
            return sub_52c610(a1, esi_1, a2);

        long double x87_r7_1 = a3;
        int32_t var_90 = 0;
        int32_t eax_4;
        int32_t edx_1;
        edx_1 = HIGHD(a3);
        eax_4 = LOWD(a3);
        double var_10_1 = x87_r7_1;
        int32_t var_8c_1 = 0x3fd00000;
        int32_t eax_6 = (eax_4 - edx_1) >> 1;
        int32_t var_88_1 = 0;
        double var_f8_1 = x87_r7_1 * 0.5;
        int32_t var_84_1 = 0x3fe80000;
        int32_t var_80_1 = 0;
        int32_t var_7c_1 = 0x3fd00000;
        int32_t var_78_1 = 0;
        int32_t var_74_1 = 0x3fe80000;
        int32_t var_70_1 = 0;
        int32_t var_6c_1 = 0x3fd00000;
        int32_t var_68_1 = 0;
        int32_t var_64_1 = 0x3fe80000;
        int32_t var_60_1 = 0;
        int32_t var_5c_1 = 0x3fd00000;
        int32_t var_58_1 = 0;
        int32_t var_54_1 = 0x3fe80000;
        int32_t var_50 = 0;
        int32_t var_4c_1 = 0x3fd00000;
        int32_t var_48_1 = 0;
        int32_t var_44_1 = 0x3fd00000;
        int32_t var_40_1 = 0;
        int32_t var_3c_1 = 0x3fe80000;
        int32_t var_38_1 = 0;
        int32_t var_34_1 = 0x3fe80000;
        int32_t var_30_1 = 0;
        int32_t var_2c_1 = 0x3fd00000;
        int32_t var_28_1 = 0;
        int32_t var_24_1 = 0x3fd00000;
        int32_t var_20_1 = 0;
        int32_t var_1c_1 = 0x3fe80000;
        int32_t var_18_1 = 0;
        int32_t var_14_1 = 0x3fe80000;
        int32_t var_d0 = 0;
        int32_t var_cc_1 = 0x3fd00000;
        int32_t var_c8_1 = 0;
        int32_t var_c4_1 = 0x3fd00000;
        int32_t var_c0_1 = 0;
        int32_t var_bc_1 = 0x3fd00000;
        int32_t var_b8_1 = 0;
        int32_t var_b4_1 = 0x3fd00000;
        int32_t var_b0_1 = 0;
        int32_t var_ac_1 = 0x3fe80000;
        int32_t var_a8_1 = 0;
        int32_t var_a4_1 = 0x3fe80000;
        int32_t var_a0_1 = 0;
        int32_t var_9c_1 = 0x3fe80000;
        int32_t var_98_1 = 0;
        int32_t var_94_1 = 0x3fe80000;
        int32_t var_fc_1 = eax_6;
        int32_t ebx_2 = 0;

        while (true)
        {
            long double x87_r6_4 = x87_r7_1 * *(&var_90 + ebx_2);
            double var_e8;
            memcpy(&var_e8, esi_1, 0x18);
            var_e8 = x87_r6_4 - var_f8_1 + var_e8;
            double var_e0 = x87_r7_1 * *(&var_50 + ebx_2) - var_f8_1 + var_e0;
            double var_d8 = x87_r7_1 * *(&var_d0 + ebx_2) - var_f8_1 + var_d8;
            result = sub_52b9f0(a1, a2 + 1, eax_6, &var_e8);
            ebx_2 += 8;

            if (ebx_2 >= 0x40)
                break;

            x87_r7_1 = var_10_1;
            eax_6 = var_fc_1;
            esi_1 = a4;
        }
    }

    return result;
}
