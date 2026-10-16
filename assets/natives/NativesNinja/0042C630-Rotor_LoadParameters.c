#include "0042C630-Rotor_LoadParameters.h"
/* 0x0042c630 Rotor_LoadParameters full linked: callers=0 callees=9 */
void* Rotor_LoadParameters(void* a1)

{
    void* edx = *(a1 + 0xc);
    void var_f0;
    memcpy(&var_f0, edx, 0xf0);
    void* ecx = *(*(edx + 0x13c) + 0x2d4);
    void* i = *(edx + 0x130);
    float* ebp = *(*(i + 0x1b4) + 0x2d4);
    float var_130;
    float var_80;
    memcpy(&var_130, &var_80, 0x28);
    int32_t var_84;

    if (var_84)
    {
        float esi_1 = *(ecx + 4);
        float var_108_1 = *(ecx + 8) * *(i + 0x720);
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

        float var_21c_1 =
            -((x87_r6_6 * esi_1)) - x87_r7_6 * 0.0263671875f * esi_1 / (*ebp * 0.400000006f);
        long double x87_r7_10 = -(esi_1);
        long double temp1_1 = var_21c_1;
        x87_r7_10 - temp1_1;

        if (*(&((x87_r7_10 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_12 = esi_1;
            long double temp2_1 = var_21c_1;
            x87_r7_12 - temp2_1;

            if (*(&((x87_r7_12 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_12, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
                var_21c_1 = esi_1;
        }
        else
            var_21c_1 = x87_r7_10;

        i = *(ecx + 0xc);
        void* i_1 = nullptr;
        float var_238_2 = *(edx + 0x138) * 21.3628311f;

        if (i > 0)
        {
            do
            {
                float var_158;
                sub_4b3be0(&var_158, var_21c_1);
                sub_4b3b60(&var_80, var_238_2);
                float var_12c;
                float var_128;
                float var_74;
                float var_68;
                float var_200 = var_68 * var_128 + var_74 * var_12c + var_80 * var_130;
                float var_7c;
                float var_70;
                float var_64;
                float var_1fc_1 = var_64 * var_128 + var_70 * var_12c + var_7c * var_130;
                float var_78;
                float var_6c;
                float var_60;
                float var_1f8_1 = var_60 * var_128 + var_6c * var_12c + var_78 * var_130;
                float var_124;
                float var_120;
                float var_11c;
                float var_1f4_1 = var_11c * var_68 + var_120 * var_74 + var_124 * var_80;
                float var_1f0_1 = var_11c * var_64 + var_120 * var_70 + var_124 * var_7c;
                float var_1ec_1 = var_11c * var_60 + var_120 * var_6c + var_124 * var_78;
                float var_118;
                float var_114;
                float var_110;
                float var_1e8_1 = var_110 * var_68 + var_114 * var_74 + var_118 * var_80;
                int32_t var_5c;
                int32_t var_1dc_1 = var_5c * 2 + 1;
                float var_1e4_1 = var_110 * var_64 + var_114 * var_70 + var_118 * var_7c;
                float var_1e0 = var_110 * var_60 + var_114 * var_6c + var_118 * var_78;
                memcpy(&var_80, &var_200, 0x28);

                if (var_5c * 2 + 1 > 0x3e8)
                {
                    long double x87_r7_51 = var_200;
                    long double temp3_1 = 0f;
                    x87_r7_51 - temp3_1;
                    float var_1a8_1 = var_1f8_1;
                    float var_1b0 = var_200;
                    float var_1ac_1 = var_1fc_1;

                    if (!(*(&((x87_r7_51 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_51, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_51 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42ca06:
                        long double x87_r7_54 = var_1f8_1;
                        long double x87_r6_51 = var_1fc_1;
                        long double x87_r5_5 = var_200;
                        long double x87_r7_56 = 1.0 / sqrtl(x87_r5_5 * x87_r5_5
                            + x87_r6_51 * x87_r6_51 + x87_r7_54 * x87_r7_54);
                        var_1b0 = var_200 * x87_r7_56;
                        var_1ac_1 = var_1ac_1 * x87_r7_56;
                        var_1a8_1 = var_1a8_1 * x87_r7_56;
                    }
                    else
                    {
                        long double x87_r7_52 = var_1fc_1;
                        long double temp4_1 = 0f;
                        x87_r7_52 - temp4_1;

                        if (!(*(&((x87_r7_52 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_52, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_52 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42ca06;

                        long double x87_r7_53 = var_1f8_1;
                        long double temp6_1 = 0f;
                        x87_r7_53 - temp6_1;

                        if (!(*(&((x87_r7_53 < temp6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_53, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_53 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42ca06;
                    }

                    float var_228 = var_1e4_1 * var_1f8_1 - var_1e0 * var_1fc_1;
                    float var_1a4_1 = var_228;
                    float var_224_1 = -((var_1e8_1 * var_1f8_1 - var_1e0 * var_200));
                    float var_220_1 = var_1e8_1 * var_1fc_1 - var_1e4_1 * var_200;
                    float var_20c_1 = var_220_1 * var_1ac_1 - var_224_1 * var_1a8_1;
                    float var_198_1 = var_20c_1;
                    float var_208_1 = -((var_220_1 * var_1b0 - var_228 * var_1a8_1));
                    float var_204_1 = var_224_1 * var_1b0 - var_228 * var_1ac_1;
                    long double x87_r7_78 = var_228;
                    long double temp5_1 = 0f;
                    x87_r7_78 - temp5_1;

                    if (!(*(&((x87_r7_78 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_78, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_78 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42cb6e:
                        long double x87_r7_81 = var_228;
                        long double x87_r6_71 = var_224_1;
                        long double x87_r5_7 = var_220_1;
                        long double x87_r7_83 = 1.0 / sqrtl(x87_r5_7 * x87_r5_7
                            + x87_r6_71 * x87_r6_71 + x87_r7_81 * x87_r7_81);
                        float var_1a4_2 = var_228 * x87_r7_83;
                        float var_1a0_2 = var_224_1 * x87_r7_83;
                        float var_19c_2 = var_220_1 * x87_r7_83;
                    }
                    else
                    {
                        long double x87_r7_79 = var_224_1;
                        long double temp8_1 = 0f;
                        x87_r7_79 - temp8_1;

                        if (!(*(&((x87_r7_79 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_79, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r7_79 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cb6e;

                        long double x87_r7_80 = var_220_1;
                        long double temp11_1 = 0f;
                        x87_r7_80 - temp11_1;

                        if (!(*(&((x87_r7_80 < temp11_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_80, temp11_1) ? 1 : 0) << 0xa
                                | (x87_r7_80 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cb6e;
                    }

                    long double x87_r7_85 = var_20c_1;
                    long double temp10_1 = 0f;
                    x87_r7_85 - temp10_1;

                    if (!(*(&((x87_r7_85 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_85, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_85 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42cbfa:
                        long double x87_r7_88 = var_204_1;
                        long double x87_r6_79 = var_208_1;
                        long double x87_r5_9 = var_20c_1;
                        long double x87_r7_90 = 1.0 / sqrtl(x87_r6_79 * x87_r6_79
                            + x87_r7_88 * x87_r7_88 + x87_r5_9 * x87_r5_9);
                        float var_198_2 = var_20c_1 * x87_r7_90;
                        float var_194_2 = var_208_1 * x87_r7_90;
                        float var_190_2 = var_204_1 * x87_r7_90;
                    }
                    else
                    {
                        long double x87_r7_86 = var_208_1;
                        long double temp14_1 = 0f;
                        x87_r7_86 - temp14_1;

                        if (!(*(&((x87_r7_86 < temp14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_86, temp14_1) ? 1 : 0) << 0xa
                                | (x87_r7_86 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cbfa;

                        long double x87_r7_87 = var_204_1;
                        long double temp16_1 = 0f;
                        x87_r7_87 - temp16_1;

                        if (!(*(&((x87_r7_87 < temp16_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_87, temp16_1) ? 1 : 0) << 0xa
                                | (x87_r7_87 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cbfa;
                    }

                    memcpy(&var_200, &var_1b0, 0x28);
                    int32_t var_1dc_2 = 0;
                }

                float var_14c;
                float var_140;
                float var_1d8 = var_140 * var_78 + var_14c * var_7c + var_158 * var_80;
                float var_154;
                float var_148;
                float var_13c;
                float var_1d4_1 = var_13c * var_78 + var_148 * var_7c + var_154 * var_80;
                float var_150;
                float var_144;
                float var_138;
                float var_1d0_1 = var_138 * var_78 + var_144 * var_7c + var_150 * var_80;
                float var_1cc_1 = var_140 * var_6c + var_14c * var_70 + var_158 * var_74;
                float var_1c8_1 = var_13c * var_6c + var_148 * var_70 + var_154 * var_74;
                float var_1c4_1 = var_138 * var_6c + var_144 * var_70 + var_150 * var_74;
                float var_1c0_1 = var_140 * var_60 + var_14c * var_64 + var_158 * var_68;
                float var_1bc_1 = var_13c * var_60 + var_148 * var_64 + var_154 * var_68;
                int32_t var_134;
                int32_t var_1b4_1 = var_134 + var_5c + 1;
                float var_1b8_1 = var_138 * var_60 + var_144 * var_64 + var_150 * var_68;
                memcpy(&var_80, &var_1d8, 0x28);

                if (var_134 + var_5c + 1 > 0x3e8)
                {
                    long double x87_r7_128 = var_1d8;
                    long double temp7_1 = 0f;
                    x87_r7_128 - temp7_1;
                    float var_188 = var_1d8;
                    float var_184_1 = var_1d4_1;
                    float var_180_1 = var_1d0_1;

                    if (!(*(&((x87_r7_128 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_128, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_128 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42cec8:
                        long double x87_r7_131 = var_1d0_1;
                        long double x87_r6_123 = var_1d4_1;
                        long double x87_r5_11 = var_1d8;
                        long double x87_r7_133 = 1.0 / sqrtl(x87_r5_11 * x87_r5_11
                            + x87_r6_123 * x87_r6_123 + x87_r7_131 * x87_r7_131);
                        var_188 = var_1d8 * x87_r7_133;
                        var_184_1 = var_184_1 * x87_r7_133;
                        var_180_1 = var_180_1 * x87_r7_133;
                    }
                    else
                    {
                        long double x87_r7_129 = var_1d4_1;
                        long double temp9_1 = 0f;
                        x87_r7_129 - temp9_1;

                        if (!(*(&((x87_r7_129 < temp9_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_129, temp9_1) ? 1 : 0) << 0xa
                                | (x87_r7_129 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cec8;

                        long double x87_r7_130 = var_1d0_1;
                        long double temp13_1 = 0f;
                        x87_r7_130 - temp13_1;

                        if (!(*(&((x87_r7_130 < temp13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_130, temp13_1) ? 1 : 0) << 0xa
                                | (x87_r7_130 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42cec8;
                    }

                    float var_234_1 = var_1bc_1 * var_1d0_1 - var_1b8_1 * var_1d4_1;
                    float var_17c_1 = var_234_1;
                    float var_230_1 = -((var_1c0_1 * var_1d0_1 - var_1b8_1 * var_1d8));
                    float var_22c_1 = var_1c0_1 * var_1d4_1 - var_1bc_1 * var_1d8;
                    float var_218_1 = var_22c_1 * var_184_1 - var_230_1 * var_180_1;
                    float var_170_1 = var_218_1;
                    float var_214_1 = -((var_22c_1 * var_188 - var_234_1 * var_180_1));
                    float var_210_1 = var_230_1 * var_188 - var_234_1 * var_184_1;
                    long double x87_r7_155 = var_234_1;
                    long double temp12_1 = 0f;
                    x87_r7_155 - temp12_1;

                    if (!(*(&((x87_r7_155 < temp12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_155, temp12_1) ? 1 : 0) << 0xa
                        | (x87_r7_155 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42d042:
                        long double x87_r7_158 = var_234_1;
                        long double x87_r6_143 = var_230_1;
                        long double x87_r5_13 = var_22c_1;
                        long double x87_r7_160 = 1.0 / sqrtl(x87_r5_13 * x87_r5_13
                            + x87_r6_143 * x87_r6_143 + x87_r7_158 * x87_r7_158);
                        float var_17c_2 = var_234_1 * x87_r7_160;
                        float var_178_2 = var_230_1 * x87_r7_160;
                        float var_174_2 = var_22c_1 * x87_r7_160;
                    }
                    else
                    {
                        long double x87_r7_156 = var_230_1;
                        long double temp15_1 = 0f;
                        x87_r7_156 - temp15_1;

                        if (!(*(&((x87_r7_156 < temp15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_156, temp15_1) ? 1 : 0) << 0xa
                                | (x87_r7_156 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d042;

                        long double x87_r7_157 = var_22c_1;
                        long double temp18_1 = 0f;
                        x87_r7_157 - temp18_1;

                        if (!(*(&((x87_r7_157 < temp18_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_157, temp18_1) ? 1 : 0) << 0xa
                                | (x87_r7_157 == temp18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d042;
                    }

                    long double x87_r7_162 = var_218_1;
                    long double temp17_1 = 0f;
                    x87_r7_162 - temp17_1;

                    if (!(*(&((x87_r7_162 < temp17_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_162, temp17_1) ? 1 : 0) << 0xa
                        | (x87_r7_162 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_42d0ce:
                        long double x87_r7_165 = var_210_1;
                        long double x87_r6_151 = var_214_1;
                        long double x87_r5_15 = var_218_1;
                        long double x87_r7_167 = 1.0 / sqrtl(x87_r5_15 * x87_r5_15
                            + x87_r6_151 * x87_r6_151 + x87_r7_165 * x87_r7_165);
                        float var_170_2 = var_218_1 * x87_r7_167;
                        float var_16c_2 = var_214_1 * x87_r7_167;
                        float var_168_2 = var_210_1 * x87_r7_167;
                    }
                    else
                    {
                        long double x87_r7_163 = var_214_1;
                        long double temp19_1 = 0f;
                        x87_r7_163 - temp19_1;

                        if (!(*(&((x87_r7_163 < temp19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_163, temp19_1) ? 1 : 0) << 0xa
                                | (x87_r7_163 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d0ce;

                        long double x87_r7_164 = var_210_1;
                        long double temp20_1 = 0f;
                        x87_r7_164 - temp20_1;

                        if (!(*(&((x87_r7_164 < temp20_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_164, temp20_1) ? 1 : 0) << 0xa
                                | (x87_r7_164 == temp20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_42d0ce;
                    }

                    memcpy(&var_1d8, &var_188, 0x28);
                    int32_t var_1b4_2 = 0;
                }

                int32_t edx_9 = *(a1 + 0x18);
                int32_t var_100_1 = *(a1 + 0x14);
                int32_t ecx_14 = *(a1 + 0x1c);
                void* var_104 = &var_f0;
                int32_t var_fc_1 = edx_9;
                int32_t var_f8_1 = *(a1 + 0x20);
                int32_t var_f4_1 = ecx_14;
                (*((sub_4cfc30() << 2) + &g_a94e84))(&var_104);
                i = i_1 + 1;
                i_1 = i;
                var_238_2 = var_238_2 + var_108_1;
            } while (i < *(ecx + 0xc));
        }
    }

    return i;
}
