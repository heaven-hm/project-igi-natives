// IGI native provenance: Rotor_LoadParameters - 0x0042C630 - CFG score 81.5% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0042C630-Rotor_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Rotor_LoadParameters.h"
void* Rotor_LoadParameters(void* context)

{
    void* temp_val = *(context + 0xc);
    void item_f0;
    memcpy(&item_f0, temp_val, 0xf0);
    void* entity_val = *(*(temp_val + 0x13c) + 0x2d4);
    void* i = *(temp_val + 0x130);
    float* flagP = *(*(i + 0x1b4) + 0x2d4);
    float item_130;
    float item_80;
    memcpy(&item_130, &item_80, 0x28);
    int32_t item_84;

    if (item_84)
    {
        float source_1 = *(entity_val + 4);
        float item_108_1 = *(entity_val + 8) * *(i + 0x720);
        long double fpu_val_7_6 =
            *(i + 0x90) * *(i + 0x110) + *(i + 0x84) * *(i + 0x10c) + *(i + 0x78) * *(i + 0x108);
        long double fpu_val_6_6 = 1.0f - *(i + 0x720);
        long double fpu_val_5_1 = -0.100000001f;
        fpu_val_5_1 - fpu_val_6_6;

        if (*(&((fpu_val_5_1 < fpu_val_6_6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_1, fpu_val_6_6) ? 1 : 0) << 0xa
            | (fpu_val_5_1 == fpu_val_6_6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double fpu_val_5_2 = 1.0f;
            fpu_val_5_2 - fpu_val_6_6;

            if (*(&((fpu_val_5_2 < fpu_val_6_6 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_2, fpu_val_6_6) ? 1 : 0) << 0xa
                    | (fpu_val_5_2 == fpu_val_6_6 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                fpu_val_6_6 = 1.0f;
        }
        else
            fpu_val_6_6 = -0.100000001f;

        float item_21c_1 =
            -((fpu_val_6_6 * source_1)) - fpu_val_7_6 * 0.0263671875f * source_1 / (*flagP * 0.400000006f);
        long double fpu_val_7_10 = -(source_1);
        long double f1_1 = item_21c_1;
        fpu_val_7_10 - f1_1;

        if (*(&((fpu_val_7_10 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_10 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_12 = source_1;
            long double f2_1 = item_21c_1;
            fpu_val_7_12 - f2_1;

            if (*(&((fpu_val_7_12 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_12, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_12 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                item_21c_1 = source_1;
        }
        else
            item_21c_1 = fpu_val_7_10;

        i = *(entity_val + 0xc);
        void* i_1 = nullptr;
        float item_238_2 = *(temp_val + 0x138) * 21.3628311f;

        if (i > 0)
        {
            do
            {
                float item_158;
                Sys_DispatchOpcode_12(&item_158, item_21c_1);
                Sys_CloseFileStream_12(&item_80, item_238_2);
                float item_12c;
                float item_128;
                float item_74;
                float item_68;
                float item_200 = item_68 * item_128 + item_74 * item_12c + item_80 * item_130;
                float item_7c;
                float item_70;
                float item_64;
                float item_1fc_1 = item_64 * item_128 + item_70 * item_12c + item_7c * item_130;
                float item_78;
                float item_6c;
                float item_60;
                float item_1f8_1 = item_60 * item_128 + item_6c * item_12c + item_78 * item_130;
                float item_124;
                float item_120;
                float item_11c;
                float item_1f4_1 = item_11c * item_68 + item_120 * item_74 + item_124 * item_80;
                float item_1f0_1 = item_11c * item_64 + item_120 * item_70 + item_124 * item_7c;
                float item_1ec_1 = item_11c * item_60 + item_120 * item_6c + item_124 * item_78;
                float item_118;
                float item_114;
                float item_110;
                float item_1e8_1 = item_110 * item_68 + item_114 * item_74 + item_118 * item_80;
                int32_t item_5c;
                int32_t item_1dc_1 = item_5c * 2 + 1;
                float item_1e4_1 = item_110 * item_64 + item_114 * item_70 + item_118 * item_7c;
                float item_1e0 = item_110 * item_60 + item_114 * item_6c + item_118 * item_78;
                memcpy(&item_80, &item_200, 0x28);

                if (item_5c * 2 + 1 > 0x3e8)
                {
                    long double fpu_val_7_51 = item_200;
                    long double f3_1 = 0.0f;
                    fpu_val_7_51 - f3_1;
                    float item_1a8_1 = item_1f8_1;
                    float item_1b0 = item_200;
                    float item_1ac_1 = item_1fc_1;

                    if (!(*(&((fpu_val_7_51 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_51, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_51 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42ca06:
                        long double fpu_val_7_54 = item_1f8_1;
                        long double fpu_val_6_51 = item_1fc_1;
                        long double fpu_val_5_5 = item_200;
                        long double fpu_val_7_56 = 1.0 / sqrtl(fpu_val_5_5 * fpu_val_5_5
                            + fpu_val_6_51 * fpu_val_6_51 + fpu_val_7_54 * fpu_val_7_54);
                        item_1b0 = item_200 * fpu_val_7_56;
                        item_1ac_1 = item_1ac_1 * fpu_val_7_56;
                        item_1a8_1 = item_1a8_1 * fpu_val_7_56;
                    }
                    else
                    {
                        long double fpu_val_7_52 = item_1fc_1;
                        long double f4_1 = 0.0f;
                        fpu_val_7_52 - f4_1;

                        if (!(*(&((fpu_val_7_52 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_52, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_52 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42ca06;

                        long double fpu_val_7_53 = item_1f8_1;
                        long double f6_1 = 0.0f;
                        fpu_val_7_53 - f6_1;

                        if (!(*(&((fpu_val_7_53 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_53, f6_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_53 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42ca06;
                    }

                    float item_228 = item_1e4_1 * item_1f8_1 - item_1e0 * item_1fc_1;
                    float item_1a4_1 = item_228;
                    float item_224_1 = -((item_1e8_1 * item_1f8_1 - item_1e0 * item_200));
                    float item_220_1 = item_1e8_1 * item_1fc_1 - item_1e4_1 * item_200;
                    float item_20c_1 = item_220_1 * item_1ac_1 - item_224_1 * item_1a8_1;
                    float item_198_1 = item_20c_1;
                    float item_208_1 = -((item_220_1 * item_1b0 - item_228 * item_1a8_1));
                    float item_204_1 = item_224_1 * item_1b0 - item_228 * item_1ac_1;
                    long double fpu_val_7_78 = item_228;
                    long double f5_1 = 0.0f;
                    fpu_val_7_78 - f5_1;

                    if (!(*(&((fpu_val_7_78 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_78, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_78 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42cb6e:
                        long double fpu_val_7_81 = item_228;
                        long double fpu_val_6_71 = item_224_1;
                        long double fpu_val_5_7 = item_220_1;
                        long double fpu_val_7_83 = 1.0 / sqrtl(fpu_val_5_7 * fpu_val_5_7
                            + fpu_val_6_71 * fpu_val_6_71 + fpu_val_7_81 * fpu_val_7_81);
                        float item_1a4_2 = item_228 * fpu_val_7_83;
                        float item_1a0_2 = item_224_1 * fpu_val_7_83;
                        float item_19c_2 = item_220_1 * fpu_val_7_83;
                    }
                    else
                    {
                        long double fpu_val_7_79 = item_224_1;
                        long double f8_1 = 0.0f;
                        fpu_val_7_79 - f8_1;

                        if (!(*(&((fpu_val_7_79 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_79, f8_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_79 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cb6e;

                        long double fpu_val_7_80 = item_220_1;
                        long double f11_1 = 0.0f;
                        fpu_val_7_80 - f11_1;

                        if (!(*(&((fpu_val_7_80 < f11_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_80, f11_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_80 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cb6e;
                    }

                    long double fpu_val_7_85 = item_20c_1;
                    long double f10_1 = 0.0f;
                    fpu_val_7_85 - f10_1;

                    if (!(*(&((fpu_val_7_85 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_85, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_85 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42cbfa:
                        long double fpu_val_7_88 = item_204_1;
                        long double fpu_val_6_79 = item_208_1;
                        long double fpu_val_5_9 = item_20c_1;
                        long double fpu_val_7_90 = 1.0 / sqrtl(fpu_val_6_79 * fpu_val_6_79
                            + fpu_val_7_88 * fpu_val_7_88 + fpu_val_5_9 * fpu_val_5_9);
                        float item_198_2 = item_20c_1 * fpu_val_7_90;
                        float item_194_2 = item_208_1 * fpu_val_7_90;
                        float item_190_2 = item_204_1 * fpu_val_7_90;
                    }
                    else
                    {
                        long double fpu_val_7_86 = item_208_1;
                        long double f14_1 = 0.0f;
                        fpu_val_7_86 - f14_1;

                        if (!(*(&((fpu_val_7_86 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_86, f14_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_86 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cbfa;

                        long double fpu_val_7_87 = item_204_1;
                        long double f16_1 = 0.0f;
                        fpu_val_7_87 - f16_1;

                        if (!(*(&((fpu_val_7_87 < f16_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_87, f16_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_87 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cbfa;
                    }

                    memcpy(&item_200, &item_1b0, 0x28);
                    int32_t item_1dc_2 = 0;
                }

                float item_14c;
                float item_140;
                float item_1d8 = item_140 * item_78 + item_14c * item_7c + item_158 * item_80;
                float item_154;
                float item_148;
                float item_13c;
                float item_1d4_1 = item_13c * item_78 + item_148 * item_7c + item_154 * item_80;
                float item_150;
                float item_144;
                float item_138;
                float item_1d0_1 = item_138 * item_78 + item_144 * item_7c + item_150 * item_80;
                float item_1cc_1 = item_140 * item_6c + item_14c * item_70 + item_158 * item_74;
                float item_1c8_1 = item_13c * item_6c + item_148 * item_70 + item_154 * item_74;
                float item_1c4_1 = item_138 * item_6c + item_144 * item_70 + item_150 * item_74;
                float item_1c0_1 = item_140 * item_60 + item_14c * item_64 + item_158 * item_68;
                float item_1bc_1 = item_13c * item_60 + item_148 * item_64 + item_154 * item_68;
                int32_t item_134;
                int32_t item_1b4_1 = item_134 + item_5c + 1;
                float item_1b8_1 = item_138 * item_60 + item_144 * item_64 + item_150 * item_68;
                memcpy(&item_80, &item_1d8, 0x28);

                if (item_134 + item_5c + 1 > 0x3e8)
                {
                    long double fpu_val_7_128 = item_1d8;
                    long double f7_1 = 0.0f;
                    fpu_val_7_128 - f7_1;
                    float item_188 = item_1d8;
                    float item_184_1 = item_1d4_1;
                    float item_180_1 = item_1d0_1;

                    if (!(*(&((fpu_val_7_128 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_128, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_128 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42cec8:
                        long double fpu_val_7_131 = item_1d0_1;
                        long double fpu_val_6_123 = item_1d4_1;
                        long double fpu_val_5_11 = item_1d8;
                        long double fpu_val_7_133 = 1.0 / sqrtl(fpu_val_5_11 * fpu_val_5_11
                            + fpu_val_6_123 * fpu_val_6_123 + fpu_val_7_131 * fpu_val_7_131);
                        item_188 = item_1d8 * fpu_val_7_133;
                        item_184_1 = item_184_1 * fpu_val_7_133;
                        item_180_1 = item_180_1 * fpu_val_7_133;
                    }
                    else
                    {
                        long double fpu_val_7_129 = item_1d4_1;
                        long double f9_1 = 0.0f;
                        fpu_val_7_129 - f9_1;

                        if (!(*(&((fpu_val_7_129 < f9_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_129, f9_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_129 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cec8;

                        long double fpu_val_7_130 = item_1d0_1;
                        long double f13_1 = 0.0f;
                        fpu_val_7_130 - f13_1;

                        if (!(*(&((fpu_val_7_130 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_130, f13_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_130 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cec8;
                    }

                    float item_234_1 = item_1bc_1 * item_1d0_1 - item_1b8_1 * item_1d4_1;
                    float item_17c_1 = item_234_1;
                    float item_230_1 = -((item_1c0_1 * item_1d0_1 - item_1b8_1 * item_1d8));
                    float item_22c_1 = item_1c0_1 * item_1d4_1 - item_1bc_1 * item_1d8;
                    float item_218_1 = item_22c_1 * item_184_1 - item_230_1 * item_180_1;
                    float item_170_1 = item_218_1;
                    float item_214_1 = -((item_22c_1 * item_188 - item_234_1 * item_180_1));
                    float item_210_1 = item_230_1 * item_188 - item_234_1 * item_184_1;
                    long double fpu_val_7_155 = item_234_1;
                    long double f12_1 = 0.0f;
                    fpu_val_7_155 - f12_1;

                    if (!(*(&((fpu_val_7_155 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_155, f12_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_155 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42d042:
                        long double fpu_val_7_158 = item_234_1;
                        long double fpu_val_6_143 = item_230_1;
                        long double fpu_val_5_13 = item_22c_1;
                        long double fpu_val_7_160 = 1.0 / sqrtl(fpu_val_5_13 * fpu_val_5_13
                            + fpu_val_6_143 * fpu_val_6_143 + fpu_val_7_158 * fpu_val_7_158);
                        float item_17c_2 = item_234_1 * fpu_val_7_160;
                        float item_178_2 = item_230_1 * fpu_val_7_160;
                        float item_174_2 = item_22c_1 * fpu_val_7_160;
                    }
                    else
                    {
                        long double fpu_val_7_156 = item_230_1;
                        long double f15_1 = 0.0f;
                        fpu_val_7_156 - f15_1;

                        if (!(*(&((fpu_val_7_156 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_156, f15_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_156 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d042;

                        long double fpu_val_7_157 = item_22c_1;
                        long double f18_1 = 0.0f;
                        fpu_val_7_157 - f18_1;

                        if (!(*(&((fpu_val_7_157 < f18_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_157, f18_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_157 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d042;
                    }

                    long double fpu_val_7_162 = item_218_1;
                    long double f17_1 = 0.0f;
                    fpu_val_7_162 - f17_1;

                    if (!(*(&((fpu_val_7_162 < f17_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_162, f17_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_162 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42d0ce:
                        long double fpu_val_7_165 = item_210_1;
                        long double fpu_val_6_151 = item_214_1;
                        long double fpu_val_5_15 = item_218_1;
                        long double fpu_val_7_167 = 1.0 / sqrtl(fpu_val_5_15 * fpu_val_5_15
                            + fpu_val_6_151 * fpu_val_6_151 + fpu_val_7_165 * fpu_val_7_165);
                        float item_170_2 = item_218_1 * fpu_val_7_167;
                        float item_16c_2 = item_214_1 * fpu_val_7_167;
                        float item_168_2 = item_210_1 * fpu_val_7_167;
                    }
                    else
                    {
                        long double fpu_val_7_163 = item_214_1;
                        long double f19_1 = 0.0f;
                        fpu_val_7_163 - f19_1;

                        if (!(*(&((fpu_val_7_163 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_163, f19_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_163 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d0ce;

                        long double fpu_val_7_164 = item_210_1;
                        long double f20_1 = 0.0f;
                        fpu_val_7_164 - f20_1;

                        if (!(*(&((fpu_val_7_164 < f20_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_164, f20_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_164 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d0ce;
                    }

                    memcpy(&item_1d8, &item_188, 0x28);
                    int32_t item_1b4_2 = 0;
                }

                int32_t temp_9 = *(context + 0x18);
                int32_t item_100_1 = *(context + 0x14);
                int32_t entity_14 = *(context + 0x1c);
                void* item_104 = &item_f0;
                int32_t item_fc_1 = temp_9;
                int32_t item_f8_1 = *(context + 0x20);
                int32_t item_f4_1 = entity_14;
                (*((DynObj_ParseConfigFile_15() << 2) + &g_a94e84))(&item_104);
                i = i_1 + 1;
                i_1 = i;
                item_238_2 = item_238_2 + item_108_1;
            } while (i < *(entity_val + 0xc));
        }
    }

    return i;
}
