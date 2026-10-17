// IGI native provenance: Weapon_1006011 - 0x0047F200 - CFG score 94.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047F200-Weapon_1006011.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_1006011.h"
struct status_msg* Weapon_1006011(int32_t* context)

{
    long double fpu7 = context[0x15];
    long double f2 = 0.0;
    fpu7 - f2;
    double item_110 = fpu7;
    bool c1 = /* bool c1 = unknown  {fst qword [stack_ptr+0xa0], fp0} */;
    struct status_msg* data_val;
    data_val = (fpu7 < f2 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa | (fpu7 == f2 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&data_val + 1) & 0x40))
    {
        int32_t data_1 = context[0x1b];
        double item_20[0x3];
        memcpy(&item_20, &context[8], 0x18);
        int32_t* item_1c8;
        float item_1b8;
        struct status_msg* item_50;

        if (data_1)
        {
            float item_1a4_1;

            item_1a4_1 = data_1 <= 1 ? fpu7 : fpu7 * 0.75f;

            int32_t item_1b4_1 = 0;
            item_1b8 = 0.0f;
            int32_t item_1bc_1 = 0x4b;
            int32_t item_1c0_1 = 0;
            int32_t item_1c4_1 = 0x3c;
            item_1c8 = nullptr;
            struct status_msg* data_3 = FX_VirmodelIsNull(&item_20, "1006_01_1", item_1a4_1, 0x4b, item_1c8,
                item_1c0_1, item_1bc_1, item_1b8, item_1b4_1);
            fpu7 = item_110;
            item_50 = data_3;
        }

        int32_t i = 0;
        double item_1a0;
        double item_198;
        double item_190;
        int64_t item_178;
        double item_168;
        int64_t item_12c;
        double item_120;
        int32_t i_2;

        if (context[0x1b] - 1 > 0)
        {
            float item_130_1 = fpu7;

            do
            {
                float item_4c_1 = (Sys_AllocateMemory_14(Level_SetMission_5()) * 0.25f + 0.5f) * item_130_1;
                item_1b8 = Level_SetMission_5();
                Sys_AllocateMemory_14(item_1b8);
                item_120 = (Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5) * item_110;
                item_168 = (Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5) * item_110;
                double item_178_1 = (Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5) * item_110;
                item_1c8 = Level_SetMission_5();
                i_2 = (Sys_AllocateMemory_14(item_1c8) + 1.0f) * item_50->sprite[0x44] * 0.5f;
                int32_t i_3 = i_2;
                i_2 = i + 1;
                long double fpu_val_7_22 = Sys_AllocateMemory_14(Level_SetMission_5()) * -15.0f;
                context[0x1b];
                item_12c = fpu_val_7_22;
                int32_t data_14 = 0x4b / context[0x1b] * (i + 1) - item_12c;
                memcpy(&item_1a0, &item_50->head[8], 0x18);
                item_1a0 = item_1a0 + item_120;
                item_198 = item_198 + item_168;
                item_190 = item_190 + item_178_1;
                item_178 = i_3 * 0.899999976f;
                int32_t item_1e0_1 = item_178;
                FX_VirmodelIsNull(&item_1a0, "1006_01_1", item_4c_1, i_3, 0, data_14, i_3, 0, 0);
                i = i_2;
            } while (i < context[0x1b] - 1);

            fpu7 = item_110;
        }

        int32_t i_4 = context[0x1b];
        i_2 = i_4;
        float entity_3;

        if (i_4 <= 1)
            entity_3 = 2.1019477e-43.0f;
        else
        {
            item_178 = 150.0f - 150.0f / i_2 - 1.0f + 150.0f;
            entity_3 = item_178;
        }

        if (i_4)
        {
            item_1b8 = entity_3;
            item_1b8 = fpu7 * 0.89999997615814209;
            Weapon_EjectMagazine_9(&item_20, item_1b8, entity_3);
        }

        int32_t data_16 = context[0x1a];

        if (data_16)
        {
            int32_t item_130_2 = 0;

            if (data_16 > 0)
            {
                bool flag_5_1;

                do
                {
                    i_2 = context[0x11];
                    int32_t item_a8_1 = context[0x12];
                    int32_t entity_5 = context[0x13];
                    item_110 = context[0x11];
                    int32_t item_a4_1 = entity_5;
                    *(&item_110 + 4) = context[0x12];
                    int32_t item_108_1 = context[0x13];
                    long double fp0_8 = Sys_AllocateMemory_14(Level_SetMission_5());
                    long double fpu_val_6_7 = context[0x19] - context[0x18];
                    item_1b8 = &i_2;
                    float item_1a4_3 = fp0_8 * fpu_val_6_7 + context[0x18];
                    Sys_ResolveSymbol_12(&item_1a0, item_1b8);
                    int32_t item_48 = item_1a0;
                    float item_188;
                    float item_40_1 = item_188;
                    int32_t item_44_1 = *(&item_198 + 4);
                    int32_t item_3c_1 = *(&item_1a0 + 4);
                    float item_184;
                    float item_34_1 = item_184;
                    int32_t item_38 = item_190;
                    int32_t item_30_1 = item_198;
                    float item_180;
                    float item_28_1 = item_180;
                    int32_t item_2c_1 = *(&item_190 + 4);
                    int32_t item_17c;
                    int32_t item_24_1 = item_17c;
                    memcpy(&item_1a0, &item_48, 0x28);
                    float item_1b4_5 = Sys_AllocateMemory_14(Level_SetMission_5()) * 3.14159274f;
                    float item_158;
                    item_1b8 = &item_158;
                    Sys_DispatchOpcode_12(item_1b8, item_1b4_5);
                    float item_14c;
                    float item_140;
                    float item_d4 =
                        item_140 * item_198 + item_14c * *(&item_1a0 + 4) + item_158 * item_1a0;
                    float item_154;
                    float item_148;
                    float item_13c;
                    float item_d0_1 =
                        item_13c * item_198 + item_148 * *(&item_1a0 + 4) + item_154 * item_1a0;
                    int32_t item_134;
                    int32_t item_b0_1 = item_134 + item_17c + 1;
                    float item_150;
                    float item_144;
                    float item_138;
                    float item_cc_1 =
                        item_138 * item_198 + item_144 * *(&item_1a0 + 4) + item_150 * item_1a0;
                    float item_c8 =
                        item_140 * *(&item_190 + 4) + item_14c * item_190 + item_158 * *(&item_198 + 4);
                    float item_c4_1 =
                        item_13c * *(&item_190 + 4) + item_148 * item_190 + item_154 * *(&item_198 + 4);
                    float item_c0_1 =
                        item_138 * *(&item_190 + 4) + item_144 * item_190 + item_150 * *(&item_198 + 4);
                    float item_bc_1 = item_140 * item_180 + item_14c * item_184 + item_158 * item_188;
                    float item_b8_1 = item_13c * item_180 + item_148 * item_184 + item_154 * item_188;
                    float item_b4_1 = item_138 * item_180 + item_144 * item_184 + item_150 * item_188;
                    memcpy(&item_1a0, &item_d4, 0x28);

                    if (item_134 + item_17c + 1 > 0x3e8)
                    {
                        long double fpu_val_7_74 = item_d4;
                        long double f5_1 = 0.0f;
                        fpu_val_7_74 - f5_1;
                        float item_78 = item_d4;
                        float item_74_1 = item_d0_1;
                        float item_70 = item_cc_1;

                        if (!(*(&((fpu_val_7_74 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_74, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_74 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47f77e:
                            long double fpu_val_7_77 = item_cc_1;
                            long double fpu_val_6_44 = item_d0_1;
                            long double fpu_val_5_1 = item_d4;
                            long double fpu_val_7_79 = 1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1
                                + fpu_val_6_44 * fpu_val_6_44 + fpu_val_7_77 * fpu_val_7_77);
                            item_78 = item_d4 * fpu_val_7_79;
                            item_74_1 = item_74_1 * fpu_val_7_79;
                            item_70 = item_70 * fpu_val_7_79;
                        }
                        else
                        {
                            long double fpu_val_7_75 = item_d0_1;
                            long double f6_1 = 0.0f;
                            fpu_val_7_75 - f6_1;

                            if (!(*(&((fpu_val_7_75 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_75, f6_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_75 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f77e;

                            long double fpu_val_7_76 = item_cc_1;
                            long double f8_1 = 0.0f;
                            fpu_val_7_76 - f8_1;

                            if (!(*(&((fpu_val_7_76 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_76, f8_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_76 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f77e;
                        }

                        item_178 = item_b8_1 * item_cc_1 - item_b4_1 * item_d0_1;
                        int32_t item_6c_1 = item_178;
                        *(&item_178 + 4) = -((item_bc_1 * item_cc_1 - item_b4_1 * item_d4));
                        float item_170_1 = item_bc_1 * item_d0_1 - item_b8_1 * item_d4;
                        item_120 = item_170_1 * item_74_1 - *(&item_178 + 4) * item_70;
                        int32_t item_60_1 = item_120;
                        *(&item_120 + 4) = -((item_170_1 * item_78 - item_178 * item_70));
                        float item_118_1 = *(&item_178 + 4) * item_78 - item_178 * item_74_1;
                        long double fpu_val_7_101 = item_178;
                        long double f7_1 = 0.0f;
                        fpu_val_7_101 - f7_1;

                        if (!(*(&((fpu_val_7_101 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_101, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_101 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47f928:
                            long double fpu_val_7_104 = item_178;
                            long double fpu_val_6_64 = *(&item_178 + 4);
                            long double fpu_val_5_3 = item_170_1;
                            long double fpu_val_7_106 = 1.0 / sqrtl(fpu_val_5_3 * fpu_val_5_3
                                + fpu_val_6_64 * fpu_val_6_64 + fpu_val_7_104 * fpu_val_7_104);
                            float item_6c_2 = item_178 * fpu_val_7_106;
                            float item_68_2 = *(&item_178 + 4) * fpu_val_7_106;
                            float item_64_2 = item_170_1 * fpu_val_7_106;
                        }
                        else
                        {
                            long double fpu_val_7_102 = *(&item_178 + 4);
                            long double f10_1 = 0.0f;
                            fpu_val_7_102 - f10_1;

                            if (!(*(&((fpu_val_7_102 < f10_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_102, f10_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_102 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f928;

                            long double fpu_val_7_103 = item_170_1;
                            long double f13_1 = 0.0f;
                            fpu_val_7_103 - f13_1;

                            if (!(*(&((fpu_val_7_103 < f13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_103, f13_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_103 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f928;
                        }

                        long double fpu_val_7_108 = item_120;
                        long double f12_1 = 0.0f;
                        fpu_val_7_108 - f12_1;

                        if (!(*(&((fpu_val_7_108 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_108, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_108 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47f9bd:
                            long double fpu_val_7_111 = item_118_1;
                            long double fpu_val_6_72 = *(&item_120 + 4);
                            long double fpu_val_5_5 = item_120;
                            long double fpu_val_7_113 = 1.0 / sqrtl(fpu_val_5_5 * fpu_val_5_5
                                + fpu_val_6_72 * fpu_val_6_72 + fpu_val_7_111 * fpu_val_7_111);
                            float item_60_2 = item_120 * fpu_val_7_113;
                            float item_5c_2 = *(&item_120 + 4) * fpu_val_7_113;
                            float item_58_2 = item_118_1 * fpu_val_7_113;
                        }
                        else
                        {
                            long double fpu_val_7_109 = *(&item_120 + 4);
                            long double f16_1 = 0.0f;
                            fpu_val_7_109 - f16_1;

                            if (!(*(&((fpu_val_7_109 < f16_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_109, f16_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_109 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f9bd;

                            long double fpu_val_7_110 = item_118_1;
                            long double f18_1 = 0.0f;
                            fpu_val_7_110 - f18_1;

                            if (!(*(&((fpu_val_7_110 < f18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_110, f18_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_110 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f9bd;
                        }

                        memcpy(&item_d4, &item_78, 0x28);
                        int32_t item_b0_2 = 0;
                    }

                    float item_1b4_7 = Sys_AllocateMemory_14(Level_SetMission_5()) * context[0x17];
                    item_1b8 = &item_158;
                    Sys_CloseFileStream_12(item_1b8, item_1b4_7);
                    float item_fc =
                        item_140 * item_198 + item_14c * *(&item_1a0 + 4) + item_158 * item_1a0;
                    float item_f8_1 =
                        item_13c * item_198 + item_148 * *(&item_1a0 + 4) + item_154 * item_1a0;
                    float item_f4_1 =
                        item_138 * item_198 + item_144 * *(&item_1a0 + 4) + item_150 * item_1a0;
                    float item_f0_1 =
                        item_140 * *(&item_190 + 4) + item_14c * item_190 + item_158 * *(&item_198 + 4);
                    float item_ec_1 =
                        item_13c * *(&item_190 + 4) + item_148 * item_190 + item_154 * *(&item_198 + 4);
                    float item_e8_1 =
                        item_138 * *(&item_190 + 4) + item_144 * item_190 + item_150 * *(&item_198 + 4);
                    float item_e4_1 = item_140 * item_180 + item_14c * item_184 + item_158 * item_188;
                    int32_t item_d8_1 = item_134 + item_17c + 1;
                    float item_e0_1 = item_13c * item_180 + item_148 * item_184 + item_154 * item_188;
                    float item_dc_1 = item_138 * item_180 + item_144 * item_184 + item_150 * item_188;
                    memcpy(&item_1a0, &item_fc, 0x28);

                    if (item_134 + item_17c + 1 > 0x3e8)
                    {
                        long double fpu_val_7_153 = item_fc;
                        long double f9_1 = 0.0f;
                        fpu_val_7_153 - f9_1;
                        float item_a0 = item_fc;
                        float item_9c_1 = item_f8_1;
                        float item_98_1 = item_f4_1;

                        if (!(*(&((fpu_val_7_153 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_153, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_153 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47fc31:
                            long double fpu_val_7_156 = item_f4_1;
                            long double fpu_val_6_116 = item_f8_1;
                            long double fpu_val_5_7 = item_fc;
                            long double fpu_val_7_158 = 1.0 / sqrtl(fpu_val_5_7 * fpu_val_5_7
                                + fpu_val_6_116 * fpu_val_6_116 + fpu_val_7_156 * fpu_val_7_156);
                            item_a0 = item_fc * fpu_val_7_158;
                            item_9c_1 = item_9c_1 * fpu_val_7_158;
                            item_98_1 = item_98_1 * fpu_val_7_158;
                        }
                        else
                        {
                            long double fpu_val_7_154 = item_f8_1;
                            long double f11_1 = 0.0f;
                            fpu_val_7_154 - f11_1;

                            if (!(*(&((fpu_val_7_154 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_154, f11_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_154 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fc31;

                            long double fpu_val_7_155 = item_f4_1;
                            long double f15_1 = 0.0f;
                            fpu_val_7_155 - f15_1;

                            if (!(*(&((fpu_val_7_155 < f15_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_155, f15_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_155 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fc31;
                        }

                        item_168 = item_e0_1 * item_f4_1 - item_dc_1 * item_f8_1;
                        int32_t item_94_1 = item_168;
                        *(&item_168 + 4) = -((item_e4_1 * item_f4_1 - item_dc_1 * item_fc));
                        float item_160_1 = item_e4_1 * item_f8_1 - item_e0_1 * item_fc;
                        item_12c = item_160_1 * item_9c_1 - *(&item_168 + 4) * item_98_1;
                        int32_t item_88_1 = item_12c;
                        *(&item_12c + 4) = -((item_160_1 * item_a0 - item_168 * item_98_1));
                        float item_124 = *(&item_168 + 4) * item_a0 - item_168 * item_9c_1;
                        long double fpu_val_7_180 = item_168;
                        long double f14_1 = 0.0f;
                        fpu_val_7_180 - f14_1;

                        if (!(*(&((fpu_val_7_180 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_180, f14_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_180 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47fddb:
                            long double fpu_val_7_183 = item_168;
                            long double fpu_val_6_136 = *(&item_168 + 4);
                            long double fpu_val_5_9 = item_160_1;
                            long double fpu_val_7_185 = 1.0 / sqrtl(fpu_val_5_9 * fpu_val_5_9
                                + fpu_val_6_136 * fpu_val_6_136 + fpu_val_7_183 * fpu_val_7_183);
                            float item_94_2 = item_168 * fpu_val_7_185;
                            float item_90_2 = *(&item_168 + 4) * fpu_val_7_185;
                            float item_8c_2 = item_160_1 * fpu_val_7_185;
                        }
                        else
                        {
                            long double fpu_val_7_181 = *(&item_168 + 4);
                            long double f17_1 = 0.0f;
                            fpu_val_7_181 - f17_1;

                            if (!(*(&((fpu_val_7_181 < f17_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_181, f17_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_181 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fddb;

                            long double fpu_val_7_182 = item_160_1;
                            long double f20_1 = 0.0f;
                            fpu_val_7_182 - f20_1;

                            if (!(*(&((fpu_val_7_182 < f20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_182, f20_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_182 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fddb;
                        }

                        long double fpu_val_7_187 = item_12c;
                        long double f19_1 = 0.0f;
                        fpu_val_7_187 - f19_1;

                        if (!(*(&((fpu_val_7_187 < f19_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_187, f19_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_187 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47fe70:
                            long double fpu_val_7_190 = item_124;
                            long double fpu_val_6_144 = *(&item_12c + 4);
                            long double fpu_val_5_11 = item_12c;
                            long double fpu_val_7_192 = 1.0 / sqrtl(fpu_val_5_11 * fpu_val_5_11
                                + fpu_val_6_144 * fpu_val_6_144 + fpu_val_7_190 * fpu_val_7_190);
                            float item_88_2 = item_12c * fpu_val_7_192;
                            float item_84_2 = *(&item_12c + 4) * fpu_val_7_192;
                            float item_80_2 = item_124 * fpu_val_7_192;
                        }
                        else
                        {
                            long double fpu_val_7_188 = *(&item_12c + 4);
                            long double f21_1 = 0.0f;
                            fpu_val_7_188 - f21_1;

                            if (!(*(&((fpu_val_7_188 < f21_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_188, f21_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_188 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fe70;

                            long double fpu_val_7_189 = item_124;
                            long double f22_1 = 0.0f;
                            fpu_val_7_189 - f22_1;

                            if (!(*(&((fpu_val_7_189 < f22_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_189, f22_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_189 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fe70;
                        }

                        memcpy(&item_fc, &item_a0, 0x28);
                        int32_t item_d8_2 = 0;
                    }

                    item_110 = item_198 * item_1a4_3;
                    *(&item_110 + 4) = *(&item_190 + 4) * item_1a4_3;
                    float item_108_2 = item_180 * item_1a4_3;
                    Sys_AllocateMemory_14(Level_SetMission_5());
                    item_1b8 = 204.800003f;
                    int32_t item_1bc_5 = 0;
                    double* item_1c0_4 = &item_110;
                    double (* item_1c4_3)[0x3] = &item_20;
                    item_1c8 = context;
                    Weapon_UpdateBarrel_9(item_1c8, item_1c4_3, item_1c0_4, item_1bc_5, item_1b8);
                    flag_5_1 = item_130_2 + 1 < context[0x1a];
                    item_130_2 += 1;
                } while (flag_5_1);
            }

            char item_1b4_9 = 1;
            item_1b8 = context[0x20];
            Physics_ApplyImpulse_2(item_1b8, item_1b4_9);
        }

        item_1b8 = Script_FormatString();
        data_val = SoundSys_SetMasterVolume_7(item_1b8, &context[0x1c]);

        if (data_val)
        {
            double (* item_1b4_11)[0x3] = &item_20;
            item_1b8 = data_val;
            data_val = SoundSys_StopSoundSample_7(item_1b8, item_1b4_11);
        }

        long double fpu_val_7_202 = context[0x14];
        long double f4_1 = 0.0f;
        fpu_val_7_202 - f4_1;
        data_val = (fpu_val_7_202 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_202, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_202 == f4_1 ? 1 : 0) << 0xe;

        if (!(*(&data_val + 1) & 0x40))
        {
            int32_t entity_19 = context[0x14];
            item_1a0 = item_50;
            int32_t temp_26 = context[0x15];
            *(&item_1a0 + 4) = &item_20;
            item_198 = entity_19;
            *(&item_198 + 4) = temp_26;
            item_190 = context[0x16];
            *(&item_190 + 4) = 0x5a;
            int32_t item_188_1 = context[0x21];
            int32_t i_1 = 0;
            data_val = Level_InitTextures_4();

            if (data_val->head[0] > 0)
            {
                int32_t source_4 = 8;
                int32_t* data_48;

                do
                {
                    int32_t data_43 = 0;
                    data_43 = *(*(Level_InitTextures_4() + source_4) + 0x1c);
                    double* item_1b4_12 = &item_1a0;
                    int32_t context_3 =
                        *(((data_43 + Level_InitTextures_3() * 0x180) << 2) + &g_a96ae0);
                    item_1b8 = *(Level_InitTextures_4() + source_4);
                    context_3(item_1b8, item_1b4_12);
                    i_1 += 1;
                    source_4 += 4;
                    data_48 = Level_InitTextures_4();
                } while (i_1 < *data_48);

                return data_48;
            }
        }
    }

    return data_val;
}
