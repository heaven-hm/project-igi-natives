#include "00413120-HumanPlayer_Cleanup_2.h"
/* 0x00413120 HumanPlayer_Cleanup_2 full linked: callers=0 callees=23 */
void* HumanPlayer_Cleanup_2(void* a1, int32_t a2)

{
    void* ebp = *(Level_LoadLevel_6() + 0x5c);
    int32_t eax_1 = g_c28b44;
    int32_t ecx = g_c28b48;
    void* result;

    if (!*(a1 + 0xde4))
    {
        int32_t ecx_2 =
            (*(((sub_487190() * 0x180 + sub_460be0()) << 2) + &g_a96ae0))(a1, a2);
        float var_e0;
        float var_d4;
        float var_d0;
        float var_cc;
        float var_a8;

        if (*(a1 + 0xd68))
        {
            float var_f8_1 = ecx;
            int32_t var_120_1 = ecx_2;
            float var_f4_1 = eax_1;
            int32_t var_124_1 = ecx_2;
            int32_t var_128_1 = ecx_2;
            int32_t var_12c_1 = ecx_2;
            sub_4b4a00(var_f4_1 * 0.315625012f, var_f8_1 * 0.837499976f,
                *(a1 + 0xd64) / *(a1 + 0xd60) * var_f4_1 * 0.368750006f,
                var_f8_1 * 0.010416667f, 128f, 0f, 0f, 0x3f000000, 0x80000, 0);
            var_e0 = var_f8_1 * 0.0187500007f;
            float var_d8_1 = var_f4_1 * 0.375f;
            float var_f0_1 = var_f8_1 * 0.833333313f;
            float var_ec_1 = var_f4_1 * 0.3125f;
            sub_4b4a00(var_ec_1, var_f0_1, var_d8_1, var_e0, 0f, 100f, 0f, 0x3f000000, 0x80000, 0);
            long double x87_r7_21 = var_ec_1;
            float var_ec_2 = x87_r7_21;
            int32_t var_90_1 = 0;
            int32_t var_8c_1 = 0x3f800000;
            int32_t var_88_1 = 0;
            int32_t var_94_1 = 0x3f800000;
            int32_t var_9c_1 = 0;
            float var_f4_2 = var_d8_1 + x87_r7_21;
            int32_t var_98_1 = 0;
            int32_t var_a0_1 = 0x3a83126f;
            int32_t var_6c_1 = 0;
            int32_t var_68_1 = 0x3f800000;
            float var_f0_2 = var_e0 + var_f0_1;
            var_a8 = x87_r7_21;
            float* var_c4_1 = &var_a8;
            float var_a4_1 = var_f0_1;
            float var_84_1 = var_f4_2;
            int32_t ecx_6 = g_a84a54;
            int32_t var_64_1 = 0;
            int32_t var_70_1 = 0x3f800000;
            int32_t var_78_1 = 0;
            int32_t var_74_1 = 0;
            int32_t var_7c_1 = 0x3a83126f;
            var_d4 = 1.40129846e-45f;
            var_cc = 0f;
            int32_t var_c8_1 = 2;
            var_d0 = 0f;
            float var_80_1 = var_f0_1;
            (*((ecx_6 << 2) + &g_a94e84))(&var_d4);
            var_a8 = var_ec_2;
            float var_a4_2 = var_f0_2;
            float var_84_2 = var_f4_2;
            float var_80_2 = var_f0_2;
            (*((g_a84a54 << 2) + &g_a94e84))(&var_d4);
            float var_a4_3 = var_f0_1;
            var_a8 = var_ec_2;
            float var_84_3 = var_ec_2;
            float var_80_3 = var_f0_2;
            (*((g_a84a54 << 2) + &g_a94e84))(&var_d4);
            var_a8 = var_f4_2;
            float var_a4_4 = var_f0_1;
            float var_84_4 = var_f4_2;
            float var_80_4 = var_f0_2 + 1f;
            ecx_2 = (*((g_a84a54 << 2) + &g_a94e84))(&var_d4);
        }

        if (sub_4e7c30())
        {
            void* var_dc_1 = a1;
            double var_38;
            sub_465800(&var_38, *(a1 + 0x4ec));
            sub_4658a0(&var_d4, *(a1 + 0x4ec));
            double* var_10c_4 = &var_e0;
            double var_b8_2 = var_d0 * 4096000.0;
            double var_b0_2 = var_cc * 4096000.0;
            double var_c0 = var_38 + var_d4 * 4096000.0;
            double var_30;
            double var_b8_3 = var_30 + var_b8_2;
            double var_28;
            double var_b0_3 = var_28 + var_b0_2;
            char eax_24 = Level_LoadObjects_4();
            sub_4cc2a0(Level_StartMission_4(), &var_a8, &var_38, &var_c0, 1, eax_24, var_10c_4,
                0xffffffff);
            int32_t var_50;
            void var_20;

            if (!var_50)
                Game_DataSymbolLoad(&var_20, "RANGE: 1000+M\n");
            else
            {
                double var_48;
                var_10c_4 = var_48 * 0.000244140625;
                int32_t edx_12 = Game_DataSymbolLoad(&var_20, "RANGE: %0.2fM\n");

                if (var_a8)
                {
                    int16_t eax_28 = sub_4c48c0();
                    edx_12 = *(var_a8 + 0x1c);

                    if (TaskType_IsDerivedFrom(edx_12, eax_28))
                    {
                        int32_t var_108_6 = *(var_a8 + 0x6c) + 0x14;
                        sub_460c80(a1, "Model: %s\n");
                    }
                }
            }

            ecx_2 = sub_460c80(a1, &var_20);
        }

        result = *(ebp + 0xe8);

        if (result == 1)
        {
            long double x87_r7_33 = *(a1 + 0xdcc);
            var_e0 = x87_r7_33;
            long double temp0_1 = 0f;
            x87_r7_33 - temp0_1;
            result = (x87_r7_33 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_33, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_33 == temp0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_41364b:
                float ecx_17 = var_e0;
                float var_150_2 = ecx_17;
                float var_154_2 = ecx_17;
                result = sub_4b4be0(0f, 0f, eax_1, ecx, 255f, 0f, 0f, 255f, 0f, 0f, 255f, 0f, 0f,
                    255f, 0f, 0f, ecx_17, *(a1 + 0xdd8), *(a1 + 0xdd0), *(a1 + 0xdd4), 0,
                    0x80000, 0);
            }
            else
            {
                long double x87_r7_34 = *(a1 + 0xdd0);
                long double temp1_1 = 0f;
                x87_r7_34 - temp1_1;
                result = (x87_r7_34 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_34, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_34 == temp1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_41364b;

                long double x87_r7_35 = *(a1 + 0xdd4);
                long double temp3_1 = 0f;
                x87_r7_35 - temp3_1;
                result = (x87_r7_35 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_35, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_35 == temp3_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_41364b;

                long double x87_r7_36 = *(a1 + 0xdd8);
                long double temp5_1 = 0f;
                x87_r7_36 - temp5_1;
                result = (x87_r7_36 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_36, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_36 == temp5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_41364b;
            }

            long double x87_r7_39 = *(a1 + 0xddc);
            long double temp2_1 = 0f;
            x87_r7_39 - temp2_1;
            result = (x87_r7_39 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_39, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_39 == temp2_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
                float var_f8_3 = *(a1 + 0xddc);
                long double x87_r7_40 = var_f8_3;
                long double temp4_1 = 0f;
                x87_r7_40 - temp4_1;

                if (!(*(&((x87_r7_40 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_40, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_40 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_41 = var_f8_3;
                    long double temp6_1 = 0.99000001f;
                    x87_r7_41 - temp6_1;

                    if (!(*(&((x87_r7_41 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_41, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_41 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        var_f8_3 = 0.99000001f;
                }
                else
                    var_f8_3 = 0f;

                int32_t var_11c_3 = ecx_2;
                int32_t var_120_4 = ecx_2;
                return sub_4b4a00(0f, 0f, eax_1, ecx, 255f, 255f, 255f, var_f8_3, 0x80000, 0);
            }
        }
    }
    else
    {
        result = Table_GetAt(a1 + 0x4c4, 0);

        if (result)
        {
            uint32_t eax_4 = sub_487190();
            int32_t eax_5 = 0;
            eax_5 = *(result + 0x1c);
            return (*(((eax_4 * 0x180 + eax_5) << 2) + &g_a96ae0))(result, a2);
        }
    }

    return result;
}
