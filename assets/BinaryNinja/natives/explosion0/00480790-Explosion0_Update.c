#include "Explosion0_Update.h"
int32_t Explosion0_Update(float a1)

{
    int32_t result = *(a1 + 0xfc);

    if (result <= 0)
    {
        long double x87_r7_1 = *(a1 + 0xf4);
        float valA = *(a1 + 0x10c);
        float v_94 = valA;
        long double x87_r7_2 = x87_r7_1 / *(a1 + 0xf8);
        float v_90_1 = valA;
        *(a1 + 0x98) = valA;
        *(a1 + 0x9c) = valA;
        float v_8c = (1f - x87_r7_2) * *(a1 + 0x10c) + 0.00999999978f;
        *(a1 + 0xa0) = v_8c;
        *(a1 + 0x88) = g_bcab08 - *(a1 + 0x20);
        *(a1 + 0x8c) = g_bcab10 - *(a1 + 0x28);
        float v_74 = g_bcab18 - *(a1 + 0x30);
        long double x87_r7_12 = *(a1 + 0x88);
        long double f1_1 = 0f;
        x87_r7_12 - f1_1;
        *(a1 + 0x90) = v_74;

        if (!(*(&((x87_r7_12 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_12 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_48085d:
            long double x87_r7_15 = *(a1 + 0x88);
            long double f2_1 = 0f;
            x87_r7_15 - f2_1;

            if (!(*(&((x87_r7_15 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_15, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_48088e:
                long double x87_r7_18 = v_74;
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
                long double f4_1 = 0f;
                x87_r7_16 - f4_1;

                if (!(*(&((x87_r7_16 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_16, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_16 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_48088e;

                long double x87_r7_17 = v_74;
                long double f7_1 = 0f;
                x87_r7_17 - f7_1;

                if (!(*(&((x87_r7_17 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_48088e;
            }
        }
        else
        {
            long double x87_r7_13 = *(a1 + 0x8c);
            long double f3_1 = 0f;
            x87_r7_13 - f3_1;

            if (!(*(&((x87_r7_13 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_13, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_48085d;

            long double x87_r7_14 = v_74;
            long double f5_1 = 0f;
            x87_r7_14 - f5_1;

            if (!(*(&((x87_r7_14 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_48085d;

            *(a1 + 0x88) = 0x3f800000;
        }

        long double x87_r7_26 = 0f;
        long double f6_1 = *(a1 + 0x88);
        x87_r7_26 - f6_1;
        long double x87_r7_27;
        long double f8_1;

        if (*(&((x87_r7_26 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, f6_1) ? 1 : 0) << 0xa
            | (x87_r7_26 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            x87_r7_27 = 0f;
            f8_1 = *(a1 + 0x8c);
            x87_r7_27 - f8_1;
        }

        if (!(*(&((x87_r7_26 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, f6_1) ? 1 : 0) << 0xa
            | (x87_r7_26 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
            (x87_r7_27 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_27, f8_1) ? 1 : 0) << 0xa
            | (x87_r7_27 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40) || *(a1 + 0x90) != 0x3f800000)
        {
            long double x87_r7_28 = 0f;
            long double x87_r6_10 = x87_r7_28 - *(a1 + 0x8c);
            v_8c = 0f;
            v_94 = x87_r6_10;
            long double x87_r7_29 = x87_r7_28 - *(a1 + 0x88);
            *(a1 + 0x70) = v_94;
            long double x87_r7_31 = *(a1 + 0x8c);
            *(a1 + 0x74) = -(x87_r7_29);
            *(a1 + 0x78) = v_8c;
            v_94 = x87_r7_31 * *(a1 + 0x78) - *(a1 + 0x90) * *(a1 + 0x74);
            long double x87_r7_35 = *(a1 + 0x88) * *(a1 + 0x78);
            long double x87_r6_14 = *(a1 + 0x90) * *(a1 + 0x70);
            *(a1 + 0x7c) = v_94;
            long double x87_r7_39 = *(a1 + 0x88) * *(a1 + 0x74);
            long double x87_r6_16 = *(a1 + 0x8c) * *(a1 + 0x70);
            *(a1 + 0x80) = -((x87_r7_35 - x87_r6_14));
            v_8c = x87_r7_39 - x87_r6_16;
            *(a1 + 0x84) = v_8c;
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

        float v_bc = *(a1 + 0x70);
        long double x87_r7_41 = v_bc;
        long double f9_1 = 0f;
        x87_r7_41 - f9_1;
        float v_b8_1 = *(a1 + 0x74);
        float v_b4_1 = *(a1 + 0x78);

        if (!(*(&((x87_r7_41 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_41, f9_1) ? 1 : 0) << 0xa
            | (x87_r7_41 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_4809d9:
            long double x87_r7_44 = v_b4_1;
            long double x87_r6_17 = v_b8_1;
            long double x87_r5_6 = v_bc;
            long double x87_r7_46 =
                1.0 / sqrtl(x87_r5_6 * x87_r5_6 + x87_r6_17 * x87_r6_17 + x87_r7_44 * x87_r7_44);
            v_bc = v_bc * x87_r7_46;
            v_b8_1 = v_b8_1 * x87_r7_46;
            v_b4_1 = v_b4_1 * x87_r7_46;
        }
        else
        {
            long double x87_r7_42 = v_b8_1;
            long double f10_1 = 0f;
            x87_r7_42 - f10_1;

            if (!(*(&((x87_r7_42 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_42, f10_1) ? 1 : 0) << 0xa
                    | (x87_r7_42 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4809d9;

            long double x87_r7_43 = v_b4_1;
            long double f12_1 = 0f;
            x87_r7_43 - f12_1;

            if (!(*(&((x87_r7_43 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_43, f12_1) ? 1 : 0) << 0xa
                    | (x87_r7_43 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4809d9;
        }

        float v_80_1 = *(a1 + 0x8c) * *(a1 + 0x78) - *(a1 + 0x90) * *(a1 + 0x74);
        float v_b0_1 = v_80_1;
        float v_7c_1 = -((*(a1 + 0x88) * *(a1 + 0x78) - *(a1 + 0x90) * *(a1 + 0x70)));
        float v_78_1 = *(a1 + 0x88) * *(a1 + 0x74) - *(a1 + 0x8c) * *(a1 + 0x70);
        v_94 = v_78_1 * v_b8_1 - v_7c_1 * v_b4_1;
        float v_a4_1 = v_94;
        float v_90_4 = -((v_78_1 * v_bc - v_80_1 * v_b4_1));
        v_8c = v_7c_1 * v_bc - v_80_1 * v_b8_1;
        long double x87_r7_68 = v_80_1;
        long double f11_1 = 0f;
        x87_r7_68 - f11_1;

        if (!(*(&((x87_r7_68 < f11_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_68, f11_1) ? 1 : 0) << 0xa
            | (x87_r7_68 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_480b00:
            long double x87_r7_71 = v_80_1;
            long double x87_r6_37 = v_7c_1;
            long double x87_r5_8 = v_78_1;
            long double x87_r7_73 =
                1.0 / sqrtl(x87_r5_8 * x87_r5_8 + x87_r6_37 * x87_r6_37 + x87_r7_71 * x87_r7_71);
            float v_b0_2 = v_80_1 * x87_r7_73;
            float v_ac_2 = v_7c_1 * x87_r7_73;
            float v_a8_2 = v_78_1 * x87_r7_73;
        }
        else
        {
            long double x87_r7_69 = v_7c_1;
            long double f13_1 = 0f;
            x87_r7_69 - f13_1;

            if (!(*(&((x87_r7_69 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_69, f13_1) ? 1 : 0) << 0xa
                    | (x87_r7_69 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b00;

            long double x87_r7_70 = v_78_1;
            long double f15_1 = 0f;
            x87_r7_70 - f15_1;

            if (!(*(&((x87_r7_70 < f15_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_70, f15_1) ? 1 : 0) << 0xa
                    | (x87_r7_70 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b00;
        }

        long double x87_r7_75 = v_94;
        long double f14_1 = 0f;
        x87_r7_75 - f14_1;

        if (!(*(&((x87_r7_75 < f14_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_75, f14_1) ? 1 : 0) << 0xa
            | (x87_r7_75 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_480b7d:
            long double x87_r7_78 = v_8c;
            long double x87_r6_45 = v_90_4;
            long double x87_r5_10 = v_94;
            long double x87_r7_80 =
                1.0 / sqrtl(x87_r5_10 * x87_r5_10 + x87_r6_45 * x87_r6_45 + x87_r7_78 * x87_r7_78);
            float v_a4_2 = v_94 * x87_r7_80;
            float v_a0_2 = v_90_4 * x87_r7_80;
            float v_9c_2 = v_8c * x87_r7_80;
        }
        else
        {
            long double x87_r7_76 = v_90_4;
            long double f16_1 = 0f;
            x87_r7_76 - f16_1;

            if (!(*(&((x87_r7_76 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_76, f16_1) ? 1 : 0) << 0xa
                    | (x87_r7_76 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b7d;

            long double x87_r7_77 = v_8c;
            long double f17_1 = 0f;
            x87_r7_77 - f17_1;

            if (!(*(&((x87_r7_77 < f17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_77, f17_1) ? 1 : 0) << 0xa
                    | (x87_r7_77 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b7d;
        }

        memcpy(a1 + 0x70, &v_bc, 0x28);
        *(a1 + 0x94) = 0;
        float objC12 = *(a1 + 0x110);
        int32_t v_98 = 0;
        float* v_d4_1 = &v_bc;
        float* v_d8_1 = &v_bc;
        v_bc = 1f;
        float v_b8_2 = 0f;
        float v_b4_2 = 0f;
        float v_b0_3 = 0f;
        float v_ac_3 = 1f;
        float v_a8_3 = 0f;
        float v_a4_3 = 0f;
        float v_a0_3 = 0f;
        float v_9c_3 = 1f;
        Sys_OpenFileStream_12(v_d8_1, v_d4_1, objC12);
        *(a1 + 0x110) = *(a1 + 0x114) + *(a1 + 0x110);
        int32_t tmpD1 = *(a1 + 0x7c);
        int32_t valA15 = *(a1 + 0x88);
        float v_70 = *(a1 + 0x70);
        int32_t v_6c_1 = tmpD1;
        int32_t tmpD2 = *(a1 + 0x80);
        int32_t v_64_1 = *(a1 + 0x74);
        int32_t v_68_1 = valA15;
        int32_t valA16 = *(a1 + 0x8c);
        float v_58 = *(a1 + 0x78);
        int32_t v_60_1 = tmpD2;
        int32_t v_5c_1 = valA16;
        int32_t v_4c_1 = *(a1 + 0x94);
        long double x87_r7_84 = v_bc;
        int32_t v_54_1 = *(a1 + 0x84);
        float v_50 = *(a1 + 0x90);
        memcpy(a1 + 0x70, &v_70, 0x28);
        v_70 = x87_r7_84 * *(a1 + 0x70) + v_b0_3 * *(a1 + 0x74) + v_a4_3 * *(a1 + 0x78);
        float v_6c_2 =
            v_b8_2 * *(a1 + 0x70) + v_ac_3 * *(a1 + 0x74) + v_a0_3 * *(a1 + 0x78);
        float v_68_2 =
            v_b4_2 * *(a1 + 0x70) + v_a8_3 * *(a1 + 0x74) + v_9c_3 * *(a1 + 0x78);
        int32_t v_4c_2 = *(a1 + 0x94) + v_98 + 1;
        float* v_dc_1 = &v_74;
        float v_64_2 =
            v_a4_3 * *(a1 + 0x84) + v_bc * *(a1 + 0x7c) + v_b0_3 * *(a1 + 0x80);
        float v_60_2 =
            v_a0_3 * *(a1 + 0x84) + v_b8_2 * *(a1 + 0x7c) + v_ac_3 * *(a1 + 0x80);
        float v_5c_2 =
            v_9c_3 * *(a1 + 0x84) + v_b4_2 * *(a1 + 0x7c) + v_a8_3 * *(a1 + 0x80);
        v_58 = v_a4_3 * *(a1 + 0x90) + v_b0_3 * *(a1 + 0x8c) + v_bc * *(a1 + 0x88);
        float v_54_2 =
            v_a0_3 * *(a1 + 0x90) + v_ac_3 * *(a1 + 0x8c) + v_b8_2 * *(a1 + 0x88);
        v_50 = v_9c_3 * *(a1 + 0x90) + v_a8_3 * *(a1 + 0x8c) + v_b4_2 * *(a1 + 0x88);
        memcpy(a1 + 0x70, &v_70, 0x28);
        Render_SkinBones_13(v_dc_1);
        void v_44;
        int32_t* v_e0_1 = &v_44;
        void v_48;
        void** v_e4 = &v_48;
        Render_ComputeNormals_12(v_e4, v_e0_1);
        result = *(a1 + 0xf0);

        if (result >= 0)
        {
            Render_BindTexture_2(**(a1 + 0x6c), 0, result);
            v_94 = a1;
            void* v_90_5 = Render_SkinBones_13(&v_8c);
            void v_84;
            int32_t* v_e0_2 = &v_84;
            void v_88;
            v_e4 = &v_88;
            Render_ComputeNormals_12(v_e4, v_e0_2);
            int32_t valA21 = DynObj_ParseConfigFile_15();
            result = (*((valA21 << 2) + &g_a94e84))(&v_94, v_e4);
        }

        int32_t* i_1 = *(a1 + 8);
        void v_40;
        memcpy(&v_40, a1 + 0x20, 0x18);
        void v_28;
        memcpy(&v_28, a1 + 0x70, 0x28);

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t objC18 = g_afa7e0;

                do
                {
                    int32_t* tmpD6 = *i;
                    void* valA25;

                    if (!tmpD6)
                        valA25 = nullptr;
                    else
                    {
                        int32_t valA22 = *tmpD6;
                        int32_t valA23 = -(valA22);
                        valA25 = (valA23 - valA23) & tmpD6;
                    }

                    *((objC18 << 2) + &g_afa6e0) = valA25;
                    g_afa7e0 = objC18 + 1;
                    uint32_t valA27 = DynObj_FindSymbol_6();
                    int32_t valA28 = 0;
                    valA28 = i[7];
                    result = *(((valA27 * 0x180 + valA28) << 2) + &g_a96ae0);

                    if (result)
                        result = result(i, &v_40);

                    objC18 = g_afa7e0 - 1;
                    g_afa7e0 = objC18;
                    i = *((objC18 << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    return result;
}
