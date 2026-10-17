// IGI native provenance: Explosion0_Update - 0x00480790 - CFG score 89.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00480790-Explosion0_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Explosion0_Update.h"
int32_t Explosion0_Update(float context)

{
    int32_t result = *(context + 0xfc);

    if (result <= 0)
    {
        long double fpu_val_7_1 = *(context + 0xf4);
        float data_val = *(context + 0x10c);
        float item_94 = data_val;
        long double fpu_val_7_2 = fpu_val_7_1 / *(context + 0xf8);
        float item_90_1 = data_val;
        *(context + 0x98) = data_val;
        *(context + 0x9c) = data_val;
        float item_8c = (1.0f - fpu_val_7_2) * *(context + 0x10c) + 0.00999999978f;
        *(context + 0xa0) = item_8c;
        *(context + 0x88) = g_bcab08 - *(context + 0x20);
        *(context + 0x8c) = g_bcab10 - *(context + 0x28);
        float item_74 = g_bcab18 - *(context + 0x30);
        long double fpu_val_7_12 = *(context + 0x88);
        long double f1_1 = 0.0f;
        fpu_val_7_12 - f1_1;
        *(context + 0x90) = item_74;

        if (!(*(&((fpu_val_7_12 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_12 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_48085d:
            long double fpu_val_7_15 = *(context + 0x88);
            long double f2_1 = 0.0f;
            fpu_val_7_15 - f2_1;

            if (!(*(&((fpu_val_7_15 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_15, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_15 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_48088e:
                long double fpu_val_7_18 = item_74;
                long double fpu_val_6_1 = *(context + 0x8c);
                long double fpu_val_5_1 = *(context + 0x88);
                long double fpu_val_7_24 =
                    1.0 / sqrtl(fpu_val_7_18 * fpu_val_7_18 + fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1);
                *(context + 0x88) = *(context + 0x88) * fpu_val_7_24;
                *(context + 0x8c) = *(context + 0x8c) * fpu_val_7_24;
                *(context + 0x90) = *(context + 0x90) * fpu_val_7_24;
            }
            else
            {
                long double fpu_val_7_16 = *(context + 0x8c);
                long double f4_1 = 0.0f;
                fpu_val_7_16 - f4_1;

                if (!(*(&((fpu_val_7_16 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_16, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_16 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_48088e;

                long double fpu_val_7_17 = item_74;
                long double f7_1 = 0.0f;
                fpu_val_7_17 - f7_1;

                if (!(*(&((fpu_val_7_17 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_17, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_17 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_48088e;
            }
        }
        else
        {
            long double fpu_val_7_13 = *(context + 0x8c);
            long double f3_1 = 0.0f;
            fpu_val_7_13 - f3_1;

            if (!(*(&((fpu_val_7_13 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_13, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_48085d;

            long double fpu_val_7_14 = item_74;
            long double f5_1 = 0.0f;
            fpu_val_7_14 - f5_1;

            if (!(*(&((fpu_val_7_14 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_14, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_14 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_48085d;

            *(context + 0x88) = 0x3f800000;
        }

        long double fpu_val_7_26 = 0.0f;
        long double f6_1 = *(context + 0x88);
        fpu_val_7_26 - f6_1;
        long double fpu_val_7_27;
        long double f8_1;

        if (*(&((fpu_val_7_26 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_26, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_7_26 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            fpu_val_7_27 = 0.0f;
            f8_1 = *(context + 0x8c);
            fpu_val_7_27 - f8_1;
        }

        if (!(*(&((fpu_val_7_26 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_26, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_7_26 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
            (fpu_val_7_27 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_27, f8_1) ? 1 : 0) << 0xa
            | (fpu_val_7_27 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40) || *(context + 0x90) != 0x3f800000)
        {
            long double fpu_val_7_28 = 0.0f;
            long double fpu_val_6_10 = fpu_val_7_28 - *(context + 0x8c);
            item_8c = 0.0f;
            item_94 = fpu_val_6_10;
            long double fpu_val_7_29 = fpu_val_7_28 - *(context + 0x88);
            *(context + 0x70) = item_94;
            long double fpu_val_7_31 = *(context + 0x8c);
            *(context + 0x74) = -(fpu_val_7_29);
            *(context + 0x78) = item_8c;
            item_94 = fpu_val_7_31 * *(context + 0x78) - *(context + 0x90) * *(context + 0x74);
            long double fpu_val_7_35 = *(context + 0x88) * *(context + 0x78);
            long double fpu_val_6_14 = *(context + 0x90) * *(context + 0x70);
            *(context + 0x7c) = item_94;
            long double fpu_val_7_39 = *(context + 0x88) * *(context + 0x74);
            long double fpu_val_6_16 = *(context + 0x8c) * *(context + 0x70);
            *(context + 0x80) = -((fpu_val_7_35 - fpu_val_6_14));
            item_8c = fpu_val_7_39 - fpu_val_6_16;
            *(context + 0x84) = item_8c;
        }
        else
        {
            *(context + 0x70) = 0x3f800000;
            *(context + 0x74) = 0;
            *(context + 0x78) = 0;
            *(context + 0x7c) = 0;
            *(context + 0x80) = 0x3f800000;
            *(context + 0x84) = 0;
        }

        float item_bc = *(context + 0x70);
        long double fpu_val_7_41 = item_bc;
        long double f9_1 = 0.0f;
        fpu_val_7_41 - f9_1;
        float item_b8_1 = *(context + 0x74);
        float item_b4_1 = *(context + 0x78);

        if (!(*(&((fpu_val_7_41 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_41, f9_1) ? 1 : 0) << 0xa
            | (fpu_val_7_41 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_4809d9:
            long double fpu_val_7_44 = item_b4_1;
            long double fpu_val_6_17 = item_b8_1;
            long double fpu_val_5_6 = item_bc;
            long double fpu_val_7_46 =
                1.0 / sqrtl(fpu_val_5_6 * fpu_val_5_6 + fpu_val_6_17 * fpu_val_6_17 + fpu_val_7_44 * fpu_val_7_44);
            item_bc = item_bc * fpu_val_7_46;
            item_b8_1 = item_b8_1 * fpu_val_7_46;
            item_b4_1 = item_b4_1 * fpu_val_7_46;
        }
        else
        {
            long double fpu_val_7_42 = item_b8_1;
            long double f10_1 = 0.0f;
            fpu_val_7_42 - f10_1;

            if (!(*(&((fpu_val_7_42 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_42, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_42 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4809d9;

            long double fpu_val_7_43 = item_b4_1;
            long double f12_1 = 0.0f;
            fpu_val_7_43 - f12_1;

            if (!(*(&((fpu_val_7_43 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_43, f12_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_43 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4809d9;
        }

        float item_80_1 = *(context + 0x8c) * *(context + 0x78) - *(context + 0x90) * *(context + 0x74);
        float item_b0_1 = item_80_1;
        float item_7c_1 = -((*(context + 0x88) * *(context + 0x78) - *(context + 0x90) * *(context + 0x70)));
        float item_78_1 = *(context + 0x88) * *(context + 0x74) - *(context + 0x8c) * *(context + 0x70);
        item_94 = item_78_1 * item_b8_1 - item_7c_1 * item_b4_1;
        float item_a4_1 = item_94;
        float item_90_4 = -((item_78_1 * item_bc - item_80_1 * item_b4_1));
        item_8c = item_7c_1 * item_bc - item_80_1 * item_b8_1;
        long double fpu_val_7_68 = item_80_1;
        long double f11_1 = 0.0f;
        fpu_val_7_68 - f11_1;

        if (!(*(&((fpu_val_7_68 < f11_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_68, f11_1) ? 1 : 0) << 0xa
            | (fpu_val_7_68 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_480b00:
            long double fpu_val_7_71 = item_80_1;
            long double fpu_val_6_37 = item_7c_1;
            long double fpu_val_5_8 = item_78_1;
            long double fpu_val_7_73 =
                1.0 / sqrtl(fpu_val_5_8 * fpu_val_5_8 + fpu_val_6_37 * fpu_val_6_37 + fpu_val_7_71 * fpu_val_7_71);
            float item_b0_2 = item_80_1 * fpu_val_7_73;
            float item_ac_2 = item_7c_1 * fpu_val_7_73;
            float item_a8_2 = item_78_1 * fpu_val_7_73;
        }
        else
        {
            long double fpu_val_7_69 = item_7c_1;
            long double f13_1 = 0.0f;
            fpu_val_7_69 - f13_1;

            if (!(*(&((fpu_val_7_69 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_69, f13_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_69 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b00;

            long double fpu_val_7_70 = item_78_1;
            long double f15_1 = 0.0f;
            fpu_val_7_70 - f15_1;

            if (!(*(&((fpu_val_7_70 < f15_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_70, f15_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_70 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b00;
        }

        long double fpu_val_7_75 = item_94;
        long double f14_1 = 0.0f;
        fpu_val_7_75 - f14_1;

        if (!(*(&((fpu_val_7_75 < f14_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_75, f14_1) ? 1 : 0) << 0xa
            | (fpu_val_7_75 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_480b7d:
            long double fpu_val_7_78 = item_8c;
            long double fpu_val_6_45 = item_90_4;
            long double fpu_val_5_10 = item_94;
            long double fpu_val_7_80 =
                1.0 / sqrtl(fpu_val_5_10 * fpu_val_5_10 + fpu_val_6_45 * fpu_val_6_45 + fpu_val_7_78 * fpu_val_7_78);
            float item_a4_2 = item_94 * fpu_val_7_80;
            float item_a0_2 = item_90_4 * fpu_val_7_80;
            float item_9c_2 = item_8c * fpu_val_7_80;
        }
        else
        {
            long double fpu_val_7_76 = item_90_4;
            long double f16_1 = 0.0f;
            fpu_val_7_76 - f16_1;

            if (!(*(&((fpu_val_7_76 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_76, f16_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_76 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b7d;

            long double fpu_val_7_77 = item_8c;
            long double f17_1 = 0.0f;
            fpu_val_7_77 - f17_1;

            if (!(*(&((fpu_val_7_77 < f17_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_77, f17_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_77 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_480b7d;
        }

        memcpy(context + 0x70, &item_bc, 0x28);
        *(context + 0x94) = 0;
        float entity_12 = *(context + 0x110);
        int32_t item_98 = 0;
        float* item_d4_1 = &item_bc;
        float* item_d8_1 = &item_bc;
        item_bc = 1.0f;
        float item_b8_2 = 0.0f;
        float item_b4_2 = 0.0f;
        float item_b0_3 = 0.0f;
        float item_ac_3 = 1.0f;
        float item_a8_3 = 0.0f;
        float item_a4_3 = 0.0f;
        float item_a0_3 = 0.0f;
        float item_9c_3 = 1.0f;
        Sys_OpenFileStream_12(item_d8_1, item_d4_1, entity_12);
        *(context + 0x110) = *(context + 0x114) + *(context + 0x110);
        int32_t temp_1 = *(context + 0x7c);
        int32_t data_15 = *(context + 0x88);
        float item_70 = *(context + 0x70);
        int32_t item_6c_1 = temp_1;
        int32_t temp_2 = *(context + 0x80);
        int32_t item_64_1 = *(context + 0x74);
        int32_t item_68_1 = data_15;
        int32_t data_16 = *(context + 0x8c);
        float item_58 = *(context + 0x78);
        int32_t item_60_1 = temp_2;
        int32_t item_5c_1 = data_16;
        int32_t item_4c_1 = *(context + 0x94);
        long double fpu_val_7_84 = item_bc;
        int32_t item_54_1 = *(context + 0x84);
        float item_50 = *(context + 0x90);
        memcpy(context + 0x70, &item_70, 0x28);
        item_70 = fpu_val_7_84 * *(context + 0x70) + item_b0_3 * *(context + 0x74) + item_a4_3 * *(context + 0x78);
        float item_6c_2 =
            item_b8_2 * *(context + 0x70) + item_ac_3 * *(context + 0x74) + item_a0_3 * *(context + 0x78);
        float item_68_2 =
            item_b4_2 * *(context + 0x70) + item_a8_3 * *(context + 0x74) + item_9c_3 * *(context + 0x78);
        int32_t item_4c_2 = *(context + 0x94) + item_98 + 1;
        float* item_dc_1 = &item_74;
        float item_64_2 =
            item_a4_3 * *(context + 0x84) + item_bc * *(context + 0x7c) + item_b0_3 * *(context + 0x80);
        float item_60_2 =
            item_a0_3 * *(context + 0x84) + item_b8_2 * *(context + 0x7c) + item_ac_3 * *(context + 0x80);
        float item_5c_2 =
            item_9c_3 * *(context + 0x84) + item_b4_2 * *(context + 0x7c) + item_a8_3 * *(context + 0x80);
        item_58 = item_a4_3 * *(context + 0x90) + item_b0_3 * *(context + 0x8c) + item_bc * *(context + 0x88);
        float item_54_2 =
            item_a0_3 * *(context + 0x90) + item_ac_3 * *(context + 0x8c) + item_b8_2 * *(context + 0x88);
        item_50 = item_9c_3 * *(context + 0x90) + item_a8_3 * *(context + 0x8c) + item_b4_2 * *(context + 0x88);
        memcpy(context + 0x70, &item_70, 0x28);
        Render_SkinBones_13(item_dc_1);
        void item_44;
        int32_t* item_e0_1 = &item_44;
        void item_48;
        void** item_e4 = &item_48;
        Render_ComputeNormals_12(item_e4, item_e0_1);
        result = *(context + 0xf0);

        if (result >= 0)
        {
            Render_BindTexture_2(**(context + 0x6c), 0, result);
            item_94 = context;
            void* item_90_5 = Render_SkinBones_13(&item_8c);
            void item_84;
            int32_t* item_e0_2 = &item_84;
            void item_88;
            item_e4 = &item_88;
            Render_ComputeNormals_12(item_e4, item_e0_2);
            int32_t data_21 = DynObj_ParseConfigFile_15();
            result = (*((data_21 << 2) + &g_a94e84))(&item_94, item_e4);
        }

        int32_t* i_1 = *(context + 8);
        void item_40;
        memcpy(&item_40, context + 0x20, 0x18);
        void item_28;
        memcpy(&item_28, context + 0x70, 0x28);

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t entity_18 = g_afa7e0;

                do
                {
                    int32_t* temp_6 = *i;
                    void* data_25;

                    if (!temp_6)
                        data_25 = nullptr;
                    else
                    {
                        int32_t data_22 = *temp_6;
                        int32_t data_23 = -(data_22);
                        data_25 = (data_23 - data_23) & temp_6;
                    }

                    *((entity_18 << 2) + &g_afa6e0) = data_25;
                    g_afa7e0 = entity_18 + 1;
                    uint32_t data_27 = DynObj_FindSymbol_6();
                    int32_t data_28 = 0;
                    data_28 = i[7];
                    result = *(((data_27 * 0x180 + data_28) << 2) + &g_a96ae0);

                    if (result)
                        result = result(i, &item_40);

                    entity_18 = g_afa7e0 - 1;
                    g_afa7e0 = entity_18;
                    i = *((entity_18 << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    return result;
}
