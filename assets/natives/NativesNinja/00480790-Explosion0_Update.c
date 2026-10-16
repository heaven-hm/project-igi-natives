#include "00480790-Explosion0_Update.h"
/* 0x00480790 Explosion0_Update full linked: callers=0 callees=13 */
int32_t sub_480790(float a1)

{
    int32_t result = *(a1 + 0xfc);

    if (result <= 0)
    {
        long double x87_r7_1 = *(a1 + 0xf4);
        float eax = *(a1 + 0x10c);
        float var_94 = eax;
        long double x87_r7_2 = x87_r7_1 / *(a1 + 0xf8);
        float var_90_1 = eax;
        *(a1 + 0x98) = eax;
        *(a1 + 0x9c) = eax;
        float var_8c = (1f - x87_r7_2) * *(a1 + 0x10c) + 0.00999999978f;
        *(a1 + 0xa0) = var_8c;
        *(a1 + 0x88) = g_bcab08 - *(a1 + 0x20);
        *(a1 + 0x8c) = g_bcab10 - *(a1 + 0x28);
        float var_74 = g_bcab18 - *(a1 + 0x30);
        long double x87_r7_12 = *(a1 + 0x88);
        long double temp1_1 = 0f;
        x87_r7_12 - temp1_1;
        *(a1 + 0x90) = var_74;

        if (!(*(&((x87_r7_12 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_12 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_48085d:
            long double x87_r7_15 = *(a1 + 0x88);
            long double temp2_1 = 0f;
            x87_r7_15 - temp2_1;

            if (!(*(&((x87_r7_15 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_15, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_48088e:
                long double x87_r7_18 = var_74;
                long double x87_r6_1 = *(a1 + 0x8c);
                long double x87_r5_1 = *(a1 + 0x88);
                long double x87_r7_24 =
                    1.0 / sqrtl(x87_r7_18 * x87_r7_18 + x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1);
                *(a1 + 0x88) = *(a1 + 0x88) * x87_r7_24;
                *(a1 + 0x8c) = *(a1 + 0x8c) * x87_r7_24;
                *(a1 + 0x90) = *(a1 + 0x90) * x87_r7_24;
            }
            else
            {
                long double x87_r7_16 = *(a1 + 0x8c);
                long double temp4_1 = 0f;
                x87_r7_16 - temp4_1;

                if (!(*(&((x87_r7_16 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_16, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_16 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_48088e;

                long double x87_r7_17 = var_74;
                long double temp7_1 = 0f;
                x87_r7_17 - temp7_1;

                if (!(*(&((x87_r7_17 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_48088e;
            }
        }
        else
        {
            long double x87_r7_13 = *(a1 + 0x8c);
            long double temp3_1 = 0f;
            x87_r7_13 - temp3_1;

            if (!(*(&((x87_r7_13 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_13, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_48085d;

            long double x87_r7_14 = var_74;
            long double temp5_1 = 0f;
            x87_r7_14 - temp5_1;

            if (!(*(&((x87_r7_14 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_48085d;

            *(a1 + 0x88) = 0x3f800000;
        }

        long double x87_r7_26 = 0f;
        long double temp6_1 = *(a1 + 0x88);
        x87_r7_26 - temp6_1;
        long double x87_r7_27;
        long double temp8_1;

        if (*(&((x87_r7_26 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_26 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            x87_r7_27 = 0f;
            temp8_1 = *(a1 + 0x8c);
            x87_r7_27 - temp8_1;
        }

        if (!(*(&((x87_r7_26 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_26 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
            (x87_r7_27 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_27, temp8_1) ? 1 : 0) << 0xa
            | (x87_r7_27 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40) || *(a1 + 0x90) != 0x3f800000)
        {
            long double x87_r7_28 = 0f;
            long double x87_r6_10 = x87_r7_28 - *(a1 + 0x8c);
            var_8c = 0f;
            var_94 = x87_r6_10;
            long double x87_r7_29 = x87_r7_28 - *(a1 + 0x88);
            *(a1 + 0x70) = var_94;
            long double x87_r7_31 = *(a1 + 0x8c);
            *(a1 + 0x74) = -(x87_r7_29);
            *(a1 + 0x78) = var_8c;
            var_94 = x87_r7_31 * *(a1 + 0x78) - *(a1 + 0x90) * *(a1 + 0x74);
            long double x87_r7_35 = *(a1 + 0x88) * *(a1 + 0x78);
            long double x87_r6_14 = *(a1 + 0x90) * *(a1 + 0x70);
            *(a1 + 0x7c) = var_94;
            long double x87_r7_39 = *(a1 + 0x88) * *(a1 + 0x74);
            long double x87_r6_16 = *(a1 + 0x8c) * *(a1 + 0x70);
            *(a1 + 0x80) = -((x87_r7_35 - x87_r6_14));
            var_8c = x87_r7_39 - x87_r6_16;
            *(a1 + 0x84) = var_8c;
        }
        else
        {
            *(a1 + 0x70) = 0x3f800000;
            *(a1 + 0x74) = 0;
            *(a1 + 0x78) = 0;
            *(a1 + 0x7c) = 0;
            *(a1 + 0x80) = 0x3f800000;
            *(a1 + 0x84) = 0;
        }

        float var_bc = *(a1 + 0x70);
        long double x87_r7_41 = var_bc;
        long double temp9_1 = 0f;
        x87_r7_41 - temp9_1;
        float var_b8_1 = *(a1 + 0x74);
        float var_b4_1 = *(a1 + 0x78);

        if (!(*(&((x87_r7_41 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_41, temp9_1) ? 1 : 0) << 0xa
            | (x87_r7_41 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_4809d9:
            long double x87_r7_44 = var_b4_1;
            long double x87_r6_17 = var_b8_1;
            long double x87_r5_6 = var_bc;
            long double x87_r7_46 =
                1.0 / sqrtl(x87_r5_6 * x87_r5_6 + x87_r6_17 * x87_r6_17 + x87_r7_44 * x87_r7_44);
            var_bc = var_bc * x87_r7_46;
            var_b8_1 = var_b8_1 * x87_r7_46;
            var_b4_1 = var_b4_1 * x87_r7_46;
        }
        else
        {
            long double x87_r7_42 = var_b8_1;
            long double temp10_1 = 0f;
            x87_r7_42 - temp10_1;

            if (!(*(&((x87_r7_42 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_42, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r7_42 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4809d9;

            long double x87_r7_43 = var_b4_1;
            long double temp12_1 = 0f;
            x87_r7_43 - temp12_1;

            if (!(*(&((x87_r7_43 < temp12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_43, temp12_1) ? 1 : 0) << 0xa
                    | (x87_r7_43 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4809d9;
        }

        float var_80_1 = *(a1 + 0x8c) * *(a1 + 0x78) - *(a1 + 0x90) * *(a1 + 0x74);
        float var_b0_1 = var_80_1;
        float var_7c_1 = -((*(a1 + 0x88) * *(a1 + 0x78) - *(a1 + 0x90) * *(a1 + 0x70)));
        float var_78_1 = *(a1 + 0x88) * *(a1 + 0x74) - *(a1 + 0x8c) * *(a1 + 0x70);
        var_94 = var_78_1 * var_b8_1 - var_7c_1 * var_b4_1;
        float var_a4_1 = var_94;
        float var_90_4 = -((var_78_1 * var_bc - var_80_1 * var_b4_1));
        var_8c = var_7c_1 * var_bc - var_80_1 * var_b8_1;
        long double x87_r7_68 = var_80_1;
        long double temp11_1 = 0f;
        x87_r7_68 - temp11_1;

        if (!(*(&((x87_r7_68 < temp11_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_68, temp11_1) ? 1 : 0) << 0xa
            | (x87_r7_68 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_480b00:
            long double x87_r7_71 = var_80_1;
            long double x87_r6_37 = var_7c_1;
            long double x87_r5_8 = var_78_1;
            long double x87_r7_73 =
                1.0 / sqrtl(x87_r5_8 * x87_r5_8 + x87_r6_37 * x87_r6_37 + x87_r7_71 * x87_r7_71);
            float var_b0_2 = var_80_1 * x87_r7_73;
            float var_ac_2 = var_7c_1 * x87_r7_73;
            float var_a8_2 = var_78_1 * x87_r7_73;
        }
        else
        {
            long double x87_r7_69 = var_7c_1;
            long double temp13_1 = 0f;
            x87_r7_69 - temp13_1;

            if (!(*(&((x87_r7_69 < temp13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_69, temp13_1) ? 1 : 0) << 0xa
                    | (x87_r7_69 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b00;

            long double x87_r7_70 = var_78_1;
            long double temp15_1 = 0f;
            x87_r7_70 - temp15_1;

            if (!(*(&((x87_r7_70 < temp15_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_70, temp15_1) ? 1 : 0) << 0xa
                    | (x87_r7_70 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b00;
        }

        long double x87_r7_75 = var_94;
        long double temp14_1 = 0f;
        x87_r7_75 - temp14_1;

        if (!(*(&((x87_r7_75 < temp14_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_75, temp14_1) ? 1 : 0) << 0xa
            | (x87_r7_75 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_480b7d:
            long double x87_r7_78 = var_8c;
            long double x87_r6_45 = var_90_4;
            long double x87_r5_10 = var_94;
            long double x87_r7_80 =
                1.0 / sqrtl(x87_r5_10 * x87_r5_10 + x87_r6_45 * x87_r6_45 + x87_r7_78 * x87_r7_78);
            float var_a4_2 = var_94 * x87_r7_80;
            float var_a0_2 = var_90_4 * x87_r7_80;
            float var_9c_2 = var_8c * x87_r7_80;
        }
        else
        {
            long double x87_r7_76 = var_90_4;
            long double temp16_1 = 0f;
            x87_r7_76 - temp16_1;

            if (!(*(&((x87_r7_76 < temp16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_76, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r7_76 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b7d;

            long double x87_r7_77 = var_8c;
            long double temp17_1 = 0f;
            x87_r7_77 - temp17_1;

            if (!(*(&((x87_r7_77 < temp17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_77, temp17_1) ? 1 : 0) << 0xa
                    | (x87_r7_77 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b7d;
        }

        memcpy(a1 + 0x70, &var_bc, 0x28);
        *(a1 + 0x94) = 0;
        float ecx_12 = *(a1 + 0x110);
        int32_t var_98 = 0;
        float* var_d4_1 = &var_bc;
        float* var_d8_1 = &var_bc;
        var_bc = 1f;
        float var_b8_2 = 0f;
        float var_b4_2 = 0f;
        float var_b0_3 = 0f;
        float var_ac_3 = 1f;
        float var_a8_3 = 0f;
        float var_a4_3 = 0f;
        float var_a0_3 = 0f;
        float var_9c_3 = 1f;
        sub_4b3790(var_d8_1, var_d4_1, ecx_12);
        *(a1 + 0x110) = *(a1 + 0x114) + *(a1 + 0x110);
        int32_t edx_1 = *(a1 + 0x7c);
        int32_t eax_15 = *(a1 + 0x88);
        float var_70 = *(a1 + 0x70);
        int32_t var_6c_1 = edx_1;
        int32_t edx_2 = *(a1 + 0x80);
        int32_t var_64_1 = *(a1 + 0x74);
        int32_t var_68_1 = eax_15;
        int32_t eax_16 = *(a1 + 0x8c);
        float var_58 = *(a1 + 0x78);
        int32_t var_60_1 = edx_2;
        int32_t var_5c_1 = eax_16;
        int32_t var_4c_1 = *(a1 + 0x94);
        long double x87_r7_84 = var_bc;
        int32_t var_54_1 = *(a1 + 0x84);
        float var_50 = *(a1 + 0x90);
        memcpy(a1 + 0x70, &var_70, 0x28);
        var_70 = x87_r7_84 * *(a1 + 0x70) + var_b0_3 * *(a1 + 0x74) + var_a4_3 * *(a1 + 0x78);
        float var_6c_2 =
            var_b8_2 * *(a1 + 0x70) + var_ac_3 * *(a1 + 0x74) + var_a0_3 * *(a1 + 0x78);
        float var_68_2 =
            var_b4_2 * *(a1 + 0x70) + var_a8_3 * *(a1 + 0x74) + var_9c_3 * *(a1 + 0x78);
        int32_t var_4c_2 = *(a1 + 0x94) + var_98 + 1;
        float* var_dc_1 = &var_74;
        float var_64_2 =
            var_a4_3 * *(a1 + 0x84) + var_bc * *(a1 + 0x7c) + var_b0_3 * *(a1 + 0x80);
        float var_60_2 =
            var_a0_3 * *(a1 + 0x84) + var_b8_2 * *(a1 + 0x7c) + var_ac_3 * *(a1 + 0x80);
        float var_5c_2 =
            var_9c_3 * *(a1 + 0x84) + var_b4_2 * *(a1 + 0x7c) + var_a8_3 * *(a1 + 0x80);
        var_58 = var_a4_3 * *(a1 + 0x90) + var_b0_3 * *(a1 + 0x8c) + var_bc * *(a1 + 0x88);
        float var_54_2 =
            var_a0_3 * *(a1 + 0x90) + var_ac_3 * *(a1 + 0x8c) + var_b8_2 * *(a1 + 0x88);
        var_50 = var_9c_3 * *(a1 + 0x90) + var_a8_3 * *(a1 + 0x8c) + var_b4_2 * *(a1 + 0x88);
        memcpy(a1 + 0x70, &var_70, 0x28);
        sub_4daa20(var_dc_1);
        void var_44;
        int32_t* var_e0_1 = &var_44;
        void var_48;
        void** var_e4 = &var_48;
        sub_4da180(var_e4, var_e0_1);
        result = *(a1 + 0xf0);

        if (result >= 0)
        {
            sub_4d0dc0(**(a1 + 0x6c), 0, result);
            var_94 = a1;
            void* var_90_5 = sub_4daa20(&var_8c);
            void var_84;
            int32_t* var_e0_2 = &var_84;
            void var_88;
            var_e4 = &var_88;
            sub_4da180(var_e4, var_e0_2);
            int32_t eax_21 = sub_4cfc30();
            result = (*((eax_21 << 2) + &g_a94e84))(&var_94, var_e4);
        }

        int32_t* i_1 = *(a1 + 8);
        void var_40;
        memcpy(&var_40, a1 + 0x20, 0x18);
        void var_28;
        memcpy(&var_28, a1 + 0x70, 0x28);

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t ecx_18 = g_afa7e0;

                do
                {
                    int32_t* edx_6 = *i;
                    void* eax_25;

                    if (!edx_6)
                        eax_25 = nullptr;
                    else
                    {
                        int32_t eax_22 = *edx_6;
                        int32_t eax_23 = -(eax_22);
                        eax_25 = (eax_23 - eax_23) & edx_6;
                    }

                    *((ecx_18 << 2) + &g_afa6e0) = eax_25;
                    g_afa7e0 = ecx_18 + 1;
                    uint32_t eax_27 = sub_4c56f0();
                    int32_t eax_28 = 0;
                    eax_28 = i[7];
                    result = *(((eax_27 * 0x180 + eax_28) << 2) + &g_a96ae0);

                    if (result)
                        result = result(i, &var_40);

                    ecx_18 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_18;
                    i = *((ecx_18 << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    return result;
}
