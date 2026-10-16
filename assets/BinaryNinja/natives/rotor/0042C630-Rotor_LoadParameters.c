#include "Rotor_LoadParameters.h"
void* Rotor_LoadParameters(void* a1)

{
    void* tmpD = *(a1 + 0xc);
    void v_f0;
    memcpy(&v_f0, tmpD, 0xf0);
    void* objC = *(*(tmpD + 0x13c) + 0x2d4);
    void* i = *(tmpD + 0x130);
    float* flagP = *(*(i + 0x1b4) + 0x2d4);
    float v_130;
    float v_80;
    memcpy(&v_130, &v_80, 0x28);
    int32_t v_84;

    if (v_84)
    {
        float srcS1 = *(objC + 4);
        float v_108_1 = *(objC + 8) * *(i + 0x720);
        long double x87_r7_6 =
            *(i + 0x90) * *(i + 0x110) + *(i + 0x84) * *(i + 0x10c) + *(i + 0x78) * *(i + 0x108);
        long double x87_r6_6 = 1f - *(i + 0x720);
        long double x87_r5_1 = -0.100000001f;
        x87_r5_1 - x87_r6_6;

        if (*(&((x87_r5_1 < x87_r6_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_1, x87_r6_6) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double x87_r5_2 = 1f;
            x87_r5_2 - x87_r6_6;

            if (*(&((x87_r5_2 < x87_r6_6 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_2, x87_r6_6) ? 1 : 0) << 0xa
                    | (x87_r5_2 == x87_r6_6 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_6 = 1f;
        }
        else
            x87_r6_6 = -0.100000001f;

        float v_21c_1 =
            -((x87_r6_6 * srcS1)) - x87_r7_6 * 0.0263671875f * srcS1 / (*flagP * 0.400000006f);
        long double x87_r7_10 = -(srcS1);
        long double f1_1 = v_21c_1;
        x87_r7_10 - f1_1;

        if (*(&((x87_r7_10 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_12 = srcS1;
            long double f2_1 = v_21c_1;
            x87_r7_12 - f2_1;

            if (*(&((x87_r7_12 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_12, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                v_21c_1 = srcS1;
        }
        else
            v_21c_1 = x87_r7_10;

        i = *(objC + 0xc);
        void* i_1 = nullptr;
        float v_238_2 = *(tmpD + 0x138) * 21.3628311f;

        if (i > 0)
        {
            do
            {
                float v_158;
                Sys_DispatchOpcode_12(&v_158, v_21c_1);
                Sys_CloseFileStream_12(&v_80, v_238_2);
                float v_12c;
                float v_128;
                float v_74;
                float v_68;
                float v_200 = v_68 * v_128 + v_74 * v_12c + v_80 * v_130;
                float v_7c;
                float v_70;
                float v_64;
                float v_1fc_1 = v_64 * v_128 + v_70 * v_12c + v_7c * v_130;
                float v_78;
                float v_6c;
                float v_60;
                float v_1f8_1 = v_60 * v_128 + v_6c * v_12c + v_78 * v_130;
                float v_124;
                float v_120;
                float v_11c;
                float v_1f4_1 = v_11c * v_68 + v_120 * v_74 + v_124 * v_80;
                float v_1f0_1 = v_11c * v_64 + v_120 * v_70 + v_124 * v_7c;
                float v_1ec_1 = v_11c * v_60 + v_120 * v_6c + v_124 * v_78;
                float v_118;
                float v_114;
                float v_110;
                float v_1e8_1 = v_110 * v_68 + v_114 * v_74 + v_118 * v_80;
                int32_t v_5c;
                int32_t v_1dc_1 = v_5c * 2 + 1;
                float v_1e4_1 = v_110 * v_64 + v_114 * v_70 + v_118 * v_7c;
                float v_1e0 = v_110 * v_60 + v_114 * v_6c + v_118 * v_78;
                memcpy(&v_80, &v_200, 0x28);

                if (v_5c * 2 + 1 > 0x3e8)
                {
                    long double x87_r7_51 = v_200;
                    long double f3_1 = 0f;
                    x87_r7_51 - f3_1;
                    float v_1a8_1 = v_1f8_1;
                    float v_1b0 = v_200;
                    float v_1ac_1 = v_1fc_1;

                    if (!(*(&((x87_r7_51 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_51, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_51 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42ca06:
                        long double x87_r7_54 = v_1f8_1;
                        long double x87_r6_51 = v_1fc_1;
                        long double x87_r5_5 = v_200;
                        long double x87_r7_56 = 1.0 / sqrtl(x87_r5_5 * x87_r5_5
                            + x87_r6_51 * x87_r6_51 + x87_r7_54 * x87_r7_54);
                        v_1b0 = v_200 * x87_r7_56;
                        v_1ac_1 = v_1ac_1 * x87_r7_56;
                        v_1a8_1 = v_1a8_1 * x87_r7_56;
                    }
                    else
                    {
                        long double x87_r7_52 = v_1fc_1;
                        long double f4_1 = 0f;
                        x87_r7_52 - f4_1;

                        if (!(*(&((x87_r7_52 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_52, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_52 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42ca06;

                        long double x87_r7_53 = v_1f8_1;
                        long double f6_1 = 0f;
                        x87_r7_53 - f6_1;

                        if (!(*(&((x87_r7_53 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_53, f6_1) ? 1 : 0) << 0xa
                                | (x87_r7_53 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42ca06;
                    }

                    float v_228 = v_1e4_1 * v_1f8_1 - v_1e0 * v_1fc_1;
                    float v_1a4_1 = v_228;
                    float v_224_1 = -((v_1e8_1 * v_1f8_1 - v_1e0 * v_200));
                    float v_220_1 = v_1e8_1 * v_1fc_1 - v_1e4_1 * v_200;
                    float v_20c_1 = v_220_1 * v_1ac_1 - v_224_1 * v_1a8_1;
                    float v_198_1 = v_20c_1;
                    float v_208_1 = -((v_220_1 * v_1b0 - v_228 * v_1a8_1));
                    float v_204_1 = v_224_1 * v_1b0 - v_228 * v_1ac_1;
                    long double x87_r7_78 = v_228;
                    long double f5_1 = 0f;
                    x87_r7_78 - f5_1;

                    if (!(*(&((x87_r7_78 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_78, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_78 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42cb6e:
                        long double x87_r7_81 = v_228;
                        long double x87_r6_71 = v_224_1;
                        long double x87_r5_7 = v_220_1;
                        long double x87_r7_83 = 1.0 / sqrtl(x87_r5_7 * x87_r5_7
                            + x87_r6_71 * x87_r6_71 + x87_r7_81 * x87_r7_81);
                        float v_1a4_2 = v_228 * x87_r7_83;
                        float v_1a0_2 = v_224_1 * x87_r7_83;
                        float v_19c_2 = v_220_1 * x87_r7_83;
                    }
                    else
                    {
                        long double x87_r7_79 = v_224_1;
                        long double f8_1 = 0f;
                        x87_r7_79 - f8_1;

                        if (!(*(&((x87_r7_79 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_79, f8_1) ? 1 : 0) << 0xa
                                | (x87_r7_79 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cb6e;

                        long double x87_r7_80 = v_220_1;
                        long double f11_1 = 0f;
                        x87_r7_80 - f11_1;

                        if (!(*(&((x87_r7_80 < f11_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_80, f11_1) ? 1 : 0) << 0xa
                                | (x87_r7_80 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cb6e;
                    }

                    long double x87_r7_85 = v_20c_1;
                    long double f10_1 = 0f;
                    x87_r7_85 - f10_1;

                    if (!(*(&((x87_r7_85 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_85, f10_1) ? 1 : 0) << 0xa
                        | (x87_r7_85 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42cbfa:
                        long double x87_r7_88 = v_204_1;
                        long double x87_r6_79 = v_208_1;
                        long double x87_r5_9 = v_20c_1;
                        long double x87_r7_90 = 1.0 / sqrtl(x87_r6_79 * x87_r6_79
                            + x87_r7_88 * x87_r7_88 + x87_r5_9 * x87_r5_9);
                        float v_198_2 = v_20c_1 * x87_r7_90;
                        float v_194_2 = v_208_1 * x87_r7_90;
                        float v_190_2 = v_204_1 * x87_r7_90;
                    }
                    else
                    {
                        long double x87_r7_86 = v_208_1;
                        long double f14_1 = 0f;
                        x87_r7_86 - f14_1;

                        if (!(*(&((x87_r7_86 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_86, f14_1) ? 1 : 0) << 0xa
                                | (x87_r7_86 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cbfa;

                        long double x87_r7_87 = v_204_1;
                        long double f16_1 = 0f;
                        x87_r7_87 - f16_1;

                        if (!(*(&((x87_r7_87 < f16_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_87, f16_1) ? 1 : 0) << 0xa
                                | (x87_r7_87 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cbfa;
                    }

                    memcpy(&v_200, &v_1b0, 0x28);
                    int32_t v_1dc_2 = 0;
                }

                float v_14c;
                float v_140;
                float v_1d8 = v_140 * v_78 + v_14c * v_7c + v_158 * v_80;
                float v_154;
                float v_148;
                float v_13c;
                float v_1d4_1 = v_13c * v_78 + v_148 * v_7c + v_154 * v_80;
                float v_150;
                float v_144;
                float v_138;
                float v_1d0_1 = v_138 * v_78 + v_144 * v_7c + v_150 * v_80;
                float v_1cc_1 = v_140 * v_6c + v_14c * v_70 + v_158 * v_74;
                float v_1c8_1 = v_13c * v_6c + v_148 * v_70 + v_154 * v_74;
                float v_1c4_1 = v_138 * v_6c + v_144 * v_70 + v_150 * v_74;
                float v_1c0_1 = v_140 * v_60 + v_14c * v_64 + v_158 * v_68;
                float v_1bc_1 = v_13c * v_60 + v_148 * v_64 + v_154 * v_68;
                int32_t v_134;
                int32_t v_1b4_1 = v_134 + v_5c + 1;
                float v_1b8_1 = v_138 * v_60 + v_144 * v_64 + v_150 * v_68;
                memcpy(&v_80, &v_1d8, 0x28);

                if (v_134 + v_5c + 1 > 0x3e8)
                {
                    long double x87_r7_128 = v_1d8;
                    long double f7_1 = 0f;
                    x87_r7_128 - f7_1;
                    float v_188 = v_1d8;
                    float v_184_1 = v_1d4_1;
                    float v_180_1 = v_1d0_1;

                    if (!(*(&((x87_r7_128 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_128, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_128 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42cec8:
                        long double x87_r7_131 = v_1d0_1;
                        long double x87_r6_123 = v_1d4_1;
                        long double x87_r5_11 = v_1d8;
                        long double x87_r7_133 = 1.0 / sqrtl(x87_r5_11 * x87_r5_11
                            + x87_r6_123 * x87_r6_123 + x87_r7_131 * x87_r7_131);
                        v_188 = v_1d8 * x87_r7_133;
                        v_184_1 = v_184_1 * x87_r7_133;
                        v_180_1 = v_180_1 * x87_r7_133;
                    }
                    else
                    {
                        long double x87_r7_129 = v_1d4_1;
                        long double f9_1 = 0f;
                        x87_r7_129 - f9_1;

                        if (!(*(&((x87_r7_129 < f9_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_129, f9_1) ? 1 : 0) << 0xa
                                | (x87_r7_129 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cec8;

                        long double x87_r7_130 = v_1d0_1;
                        long double f13_1 = 0f;
                        x87_r7_130 - f13_1;

                        if (!(*(&((x87_r7_130 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_130, f13_1) ? 1 : 0) << 0xa
                                | (x87_r7_130 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cec8;
                    }

                    float v_234_1 = v_1bc_1 * v_1d0_1 - v_1b8_1 * v_1d4_1;
                    float v_17c_1 = v_234_1;
                    float v_230_1 = -((v_1c0_1 * v_1d0_1 - v_1b8_1 * v_1d8));
                    float v_22c_1 = v_1c0_1 * v_1d4_1 - v_1bc_1 * v_1d8;
                    float v_218_1 = v_22c_1 * v_184_1 - v_230_1 * v_180_1;
                    float v_170_1 = v_218_1;
                    float v_214_1 = -((v_22c_1 * v_188 - v_234_1 * v_180_1));
                    float v_210_1 = v_230_1 * v_188 - v_234_1 * v_184_1;
                    long double x87_r7_155 = v_234_1;
                    long double f12_1 = 0f;
                    x87_r7_155 - f12_1;

                    if (!(*(&((x87_r7_155 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_155, f12_1) ? 1 : 0) << 0xa
                        | (x87_r7_155 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42d042:
                        long double x87_r7_158 = v_234_1;
                        long double x87_r6_143 = v_230_1;
                        long double x87_r5_13 = v_22c_1;
                        long double x87_r7_160 = 1.0 / sqrtl(x87_r5_13 * x87_r5_13
                            + x87_r6_143 * x87_r6_143 + x87_r7_158 * x87_r7_158);
                        float v_17c_2 = v_234_1 * x87_r7_160;
                        float v_178_2 = v_230_1 * x87_r7_160;
                        float v_174_2 = v_22c_1 * x87_r7_160;
                    }
                    else
                    {
                        long double x87_r7_156 = v_230_1;
                        long double f15_1 = 0f;
                        x87_r7_156 - f15_1;

                        if (!(*(&((x87_r7_156 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_156, f15_1) ? 1 : 0) << 0xa
                                | (x87_r7_156 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d042;

                        long double x87_r7_157 = v_22c_1;
                        long double f18_1 = 0f;
                        x87_r7_157 - f18_1;

                        if (!(*(&((x87_r7_157 < f18_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_157, f18_1) ? 1 : 0) << 0xa
                                | (x87_r7_157 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d042;
                    }

                    long double x87_r7_162 = v_218_1;
                    long double f17_1 = 0f;
                    x87_r7_162 - f17_1;

                    if (!(*(&((x87_r7_162 < f17_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_162, f17_1) ? 1 : 0) << 0xa
                        | (x87_r7_162 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42d0ce:
                        long double x87_r7_165 = v_210_1;
                        long double x87_r6_151 = v_214_1;
                        long double x87_r5_15 = v_218_1;
                        long double x87_r7_167 = 1.0 / sqrtl(x87_r5_15 * x87_r5_15
                            + x87_r6_151 * x87_r6_151 + x87_r7_165 * x87_r7_165);
                        float v_170_2 = v_218_1 * x87_r7_167;
                        float v_16c_2 = v_214_1 * x87_r7_167;
                        float v_168_2 = v_210_1 * x87_r7_167;
                    }
                    else
                    {
                        long double x87_r7_163 = v_214_1;
                        long double f19_1 = 0f;
                        x87_r7_163 - f19_1;

                        if (!(*(&((x87_r7_163 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_163, f19_1) ? 1 : 0) << 0xa
                                | (x87_r7_163 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d0ce;

                        long double x87_r7_164 = v_210_1;
                        long double f20_1 = 0f;
                        x87_r7_164 - f20_1;

                        if (!(*(&((x87_r7_164 < f20_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_164, f20_1) ? 1 : 0) << 0xa
                                | (x87_r7_164 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d0ce;
                    }

                    memcpy(&v_1d8, &v_188, 0x28);
                    int32_t v_1b4_2 = 0;
                }

                int32_t tmpD9 = *(a1 + 0x18);
                int32_t v_100_1 = *(a1 + 0x14);
                int32_t objC14 = *(a1 + 0x1c);
                void* v_104 = &v_f0;
                int32_t v_fc_1 = tmpD9;
                int32_t v_f8_1 = *(a1 + 0x20);
                int32_t v_f4_1 = objC14;
                (*((DynObj_ParseConfigFile_15() << 2) + &g_a94e84))(&v_104);
                i = i_1 + 1;
                i_1 = i;
                v_238_2 = v_238_2 + v_108_1;
            } while (i < *(objC + 0xc));
        }
    }

    return i;
}
