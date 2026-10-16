#include "Weapon_1006011.h"
struct status_msg* Weapon_1006011(int32_t* a1)

{
    long double fpu7 = a1[0x15];
    long double f2 = 0.0;
    fpu7 - f2;
    double v_110 = fpu7;
    bool c1 = /* bool c1 = unknown  {fst qword [esp+0xa0], fp0} */;
    struct status_msg* valA;
    valA = (fpu7 < f2 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa | (fpu7 == f2 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&valA + 1) & 0x40))
    {
        int32_t valA1 = a1[0x1b];
        double v_20[0x3];
        memcpy(&v_20, &a1[8], 0x18);
        int32_t* v_1c8;
        float v_1b8;
        struct status_msg* v_50;

        if (valA1)
        {
            float v_1a4_1;

            v_1a4_1 = valA1 <= 1 ? fpu7 : fpu7 * 0.75f;

            int32_t v_1b4_1 = 0;
            v_1b8 = 0f;
            int32_t v_1bc_1 = 0x4b;
            int32_t v_1c0_1 = 0;
            int32_t v_1c4_1 = 0x3c;
            v_1c8 = nullptr;
            struct status_msg* valA3 = FX_VirmodelIsNull(&v_20, "1006_01_1", v_1a4_1, 0x4b, v_1c8,
                v_1c0_1, v_1bc_1, v_1b8, v_1b4_1);
            fpu7 = v_110;
            v_50 = valA3;
        }

        int32_t i = 0;
        double v_1a0;
        double v_198;
        double v_190;
        int64_t v_178;
        double v_168;
        int64_t v_12c;
        double v_120;
        int32_t i_2;

        if (a1[0x1b] - 1 > 0)
        {
            float v_130_1 = fpu7;

            do
            {
                float v_4c_1 = (Sys_AllocateMemory_14(Level_SetMission_5()) * 0.25f + 0.5f) * v_130_1;
                v_1b8 = Level_SetMission_5();
                Sys_AllocateMemory_14(v_1b8);
                v_120 = (Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5) * v_110;
                v_168 = (Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5) * v_110;
                double v_178_1 = (Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5) * v_110;
                v_1c8 = Level_SetMission_5();
                i_2 = (Sys_AllocateMemory_14(v_1c8) + 1f) * v_50->sprite[0x44] * 0.5f;
                int32_t i_3 = i_2;
                i_2 = i + 1;
                long double x87_r7_22 = Sys_AllocateMemory_14(Level_SetMission_5()) * -15f;
                a1[0x1b];
                v_12c = x87_r7_22;
                int32_t valA14 = 0x4b / a1[0x1b] * (i + 1) - v_12c;
                memcpy(&v_1a0, &v_50->head[8], 0x18);
                v_1a0 = v_1a0 + v_120;
                v_198 = v_198 + v_168;
                v_190 = v_190 + v_178_1;
                v_178 = i_3 * 0.899999976f;
                int32_t v_1e0_1 = v_178;
                FX_VirmodelIsNull(&v_1a0, "1006_01_1", v_4c_1, i_3, 0, valA14, i_3, 0, 0);
                i = i_2;
            } while (i < a1[0x1b] - 1);

            fpu7 = v_110;
        }

        int32_t i_4 = a1[0x1b];
        i_2 = i_4;
        float objC3;

        if (i_4 <= 1)
            objC3 = 2.1019477e-43f;
        else
        {
            v_178 = 150f - 150f / i_2 - 1f + 150f;
            objC3 = v_178;
        }

        if (i_4)
        {
            v_1b8 = objC3;
            v_1b8 = fpu7 * 0.89999997615814209;
            Weapon_EjectMagazine_9(&v_20, v_1b8, objC3);
        }

        int32_t valA16 = a1[0x1a];

        if (valA16)
        {
            int32_t v_130_2 = 0;

            if (valA16 > 0)
            {
                bool cond_5_1;

                do
                {
                    i_2 = a1[0x11];
                    int32_t v_a8_1 = a1[0x12];
                    int32_t objC5 = a1[0x13];
                    v_110 = a1[0x11];
                    int32_t v_a4_1 = objC5;
                    *(&v_110 + 4) = a1[0x12];
                    int32_t v_108_1 = a1[0x13];
                    long double fp0_8 = Sys_AllocateMemory_14(Level_SetMission_5());
                    long double x87_r6_7 = a1[0x19] - a1[0x18];
                    v_1b8 = &i_2;
                    float v_1a4_3 = fp0_8 * x87_r6_7 + a1[0x18];
                    Sys_ResolveSymbol_12(&v_1a0, v_1b8);
                    int32_t v_48 = v_1a0;
                    float v_188;
                    float v_40_1 = v_188;
                    int32_t v_44_1 = *(&v_198 + 4);
                    int32_t v_3c_1 = *(&v_1a0 + 4);
                    float v_184;
                    float v_34_1 = v_184;
                    int32_t v_38 = v_190;
                    int32_t v_30_1 = v_198;
                    float v_180;
                    float v_28_1 = v_180;
                    int32_t v_2c_1 = *(&v_190 + 4);
                    int32_t v_17c;
                    int32_t v_24_1 = v_17c;
                    memcpy(&v_1a0, &v_48, 0x28);
                    float v_1b4_5 = Sys_AllocateMemory_14(Level_SetMission_5()) * 3.14159274f;
                    float v_158;
                    v_1b8 = &v_158;
                    Sys_DispatchOpcode_12(v_1b8, v_1b4_5);
                    float v_14c;
                    float v_140;
                    float v_d4 =
                        v_140 * v_198 + v_14c * *(&v_1a0 + 4) + v_158 * v_1a0;
                    float v_154;
                    float v_148;
                    float v_13c;
                    float v_d0_1 =
                        v_13c * v_198 + v_148 * *(&v_1a0 + 4) + v_154 * v_1a0;
                    int32_t v_134;
                    int32_t v_b0_1 = v_134 + v_17c + 1;
                    float v_150;
                    float v_144;
                    float v_138;
                    float v_cc_1 =
                        v_138 * v_198 + v_144 * *(&v_1a0 + 4) + v_150 * v_1a0;
                    float v_c8 =
                        v_140 * *(&v_190 + 4) + v_14c * v_190 + v_158 * *(&v_198 + 4);
                    float v_c4_1 =
                        v_13c * *(&v_190 + 4) + v_148 * v_190 + v_154 * *(&v_198 + 4);
                    float v_c0_1 =
                        v_138 * *(&v_190 + 4) + v_144 * v_190 + v_150 * *(&v_198 + 4);
                    float v_bc_1 = v_140 * v_180 + v_14c * v_184 + v_158 * v_188;
                    float v_b8_1 = v_13c * v_180 + v_148 * v_184 + v_154 * v_188;
                    float v_b4_1 = v_138 * v_180 + v_144 * v_184 + v_150 * v_188;
                    memcpy(&v_1a0, &v_d4, 0x28);

                    if (v_134 + v_17c + 1 > 0x3e8)
                    {
                        long double x87_r7_74 = v_d4;
                        long double f5_1 = 0f;
                        x87_r7_74 - f5_1;
                        float v_78 = v_d4;
                        float v_74_1 = v_d0_1;
                        float v_70 = v_cc_1;

                        if (!(*(&((x87_r7_74 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_74, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_74 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47f77e:
                            long double x87_r7_77 = v_cc_1;
                            long double x87_r6_44 = v_d0_1;
                            long double x87_r5_1 = v_d4;
                            long double x87_r7_79 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1
                                + x87_r6_44 * x87_r6_44 + x87_r7_77 * x87_r7_77);
                            v_78 = v_d4 * x87_r7_79;
                            v_74_1 = v_74_1 * x87_r7_79;
                            v_70 = v_70 * x87_r7_79;
                        }
                        else
                        {
                            long double x87_r7_75 = v_d0_1;
                            long double f6_1 = 0f;
                            x87_r7_75 - f6_1;

                            if (!(*(&((x87_r7_75 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_75, f6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_75 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f77e;

                            long double x87_r7_76 = v_cc_1;
                            long double f8_1 = 0f;
                            x87_r7_76 - f8_1;

                            if (!(*(&((x87_r7_76 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_76, f8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_76 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f77e;
                        }

                        v_178 = v_b8_1 * v_cc_1 - v_b4_1 * v_d0_1;
                        int32_t v_6c_1 = v_178;
                        *(&v_178 + 4) = -((v_bc_1 * v_cc_1 - v_b4_1 * v_d4));
                        float v_170_1 = v_bc_1 * v_d0_1 - v_b8_1 * v_d4;
                        v_120 = v_170_1 * v_74_1 - *(&v_178 + 4) * v_70;
                        int32_t v_60_1 = v_120;
                        *(&v_120 + 4) = -((v_170_1 * v_78 - v_178 * v_70));
                        float v_118_1 = *(&v_178 + 4) * v_78 - v_178 * v_74_1;
                        long double x87_r7_101 = v_178;
                        long double f7_1 = 0f;
                        x87_r7_101 - f7_1;

                        if (!(*(&((x87_r7_101 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_101, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_101 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47f928:
                            long double x87_r7_104 = v_178;
                            long double x87_r6_64 = *(&v_178 + 4);
                            long double x87_r5_3 = v_170_1;
                            long double x87_r7_106 = 1.0 / sqrtl(x87_r5_3 * x87_r5_3
                                + x87_r6_64 * x87_r6_64 + x87_r7_104 * x87_r7_104);
                            float v_6c_2 = v_178 * x87_r7_106;
                            float v_68_2 = *(&v_178 + 4) * x87_r7_106;
                            float v_64_2 = v_170_1 * x87_r7_106;
                        }
                        else
                        {
                            long double x87_r7_102 = *(&v_178 + 4);
                            long double f10_1 = 0f;
                            x87_r7_102 - f10_1;

                            if (!(*(&((x87_r7_102 < f10_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_102, f10_1) ? 1 : 0) << 0xa
                                    | (x87_r7_102 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f928;

                            long double x87_r7_103 = v_170_1;
                            long double f13_1 = 0f;
                            x87_r7_103 - f13_1;

                            if (!(*(&((x87_r7_103 < f13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_103, f13_1) ? 1 : 0) << 0xa
                                    | (x87_r7_103 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f928;
                        }

                        long double x87_r7_108 = v_120;
                        long double f12_1 = 0f;
                        x87_r7_108 - f12_1;

                        if (!(*(&((x87_r7_108 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_108, f12_1) ? 1 : 0) << 0xa
                            | (x87_r7_108 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47f9bd:
                            long double x87_r7_111 = v_118_1;
                            long double x87_r6_72 = *(&v_120 + 4);
                            long double x87_r5_5 = v_120;
                            long double x87_r7_113 = 1.0 / sqrtl(x87_r5_5 * x87_r5_5
                                + x87_r6_72 * x87_r6_72 + x87_r7_111 * x87_r7_111);
                            float v_60_2 = v_120 * x87_r7_113;
                            float v_5c_2 = *(&v_120 + 4) * x87_r7_113;
                            float v_58_2 = v_118_1 * x87_r7_113;
                        }
                        else
                        {
                            long double x87_r7_109 = *(&v_120 + 4);
                            long double f16_1 = 0f;
                            x87_r7_109 - f16_1;

                            if (!(*(&((x87_r7_109 < f16_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_109, f16_1) ? 1 : 0) << 0xa
                                    | (x87_r7_109 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f9bd;

                            long double x87_r7_110 = v_118_1;
                            long double f18_1 = 0f;
                            x87_r7_110 - f18_1;

                            if (!(*(&((x87_r7_110 < f18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_110, f18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_110 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f9bd;
                        }

                        memcpy(&v_d4, &v_78, 0x28);
                        int32_t v_b0_2 = 0;
                    }

                    float v_1b4_7 = Sys_AllocateMemory_14(Level_SetMission_5()) * a1[0x17];
                    v_1b8 = &v_158;
                    Sys_CloseFileStream_12(v_1b8, v_1b4_7);
                    float v_fc =
                        v_140 * v_198 + v_14c * *(&v_1a0 + 4) + v_158 * v_1a0;
                    float v_f8_1 =
                        v_13c * v_198 + v_148 * *(&v_1a0 + 4) + v_154 * v_1a0;
                    float v_f4_1 =
                        v_138 * v_198 + v_144 * *(&v_1a0 + 4) + v_150 * v_1a0;
                    float v_f0_1 =
                        v_140 * *(&v_190 + 4) + v_14c * v_190 + v_158 * *(&v_198 + 4);
                    float v_ec_1 =
                        v_13c * *(&v_190 + 4) + v_148 * v_190 + v_154 * *(&v_198 + 4);
                    float v_e8_1 =
                        v_138 * *(&v_190 + 4) + v_144 * v_190 + v_150 * *(&v_198 + 4);
                    float v_e4_1 = v_140 * v_180 + v_14c * v_184 + v_158 * v_188;
                    int32_t v_d8_1 = v_134 + v_17c + 1;
                    float v_e0_1 = v_13c * v_180 + v_148 * v_184 + v_154 * v_188;
                    float v_dc_1 = v_138 * v_180 + v_144 * v_184 + v_150 * v_188;
                    memcpy(&v_1a0, &v_fc, 0x28);

                    if (v_134 + v_17c + 1 > 0x3e8)
                    {
                        long double x87_r7_153 = v_fc;
                        long double f9_1 = 0f;
                        x87_r7_153 - f9_1;
                        float v_a0 = v_fc;
                        float v_9c_1 = v_f8_1;
                        float v_98_1 = v_f4_1;

                        if (!(*(&((x87_r7_153 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_153, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_153 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47fc31:
                            long double x87_r7_156 = v_f4_1;
                            long double x87_r6_116 = v_f8_1;
                            long double x87_r5_7 = v_fc;
                            long double x87_r7_158 = 1.0 / sqrtl(x87_r5_7 * x87_r5_7
                                + x87_r6_116 * x87_r6_116 + x87_r7_156 * x87_r7_156);
                            v_a0 = v_fc * x87_r7_158;
                            v_9c_1 = v_9c_1 * x87_r7_158;
                            v_98_1 = v_98_1 * x87_r7_158;
                        }
                        else
                        {
                            long double x87_r7_154 = v_f8_1;
                            long double f11_1 = 0f;
                            x87_r7_154 - f11_1;

                            if (!(*(&((x87_r7_154 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_154, f11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_154 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fc31;

                            long double x87_r7_155 = v_f4_1;
                            long double f15_1 = 0f;
                            x87_r7_155 - f15_1;

                            if (!(*(&((x87_r7_155 < f15_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_155, f15_1) ? 1 : 0) << 0xa
                                    | (x87_r7_155 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fc31;
                        }

                        v_168 = v_e0_1 * v_f4_1 - v_dc_1 * v_f8_1;
                        int32_t v_94_1 = v_168;
                        *(&v_168 + 4) = -((v_e4_1 * v_f4_1 - v_dc_1 * v_fc));
                        float v_160_1 = v_e4_1 * v_f8_1 - v_e0_1 * v_fc;
                        v_12c = v_160_1 * v_9c_1 - *(&v_168 + 4) * v_98_1;
                        int32_t v_88_1 = v_12c;
                        *(&v_12c + 4) = -((v_160_1 * v_a0 - v_168 * v_98_1));
                        float v_124 = *(&v_168 + 4) * v_a0 - v_168 * v_9c_1;
                        long double x87_r7_180 = v_168;
                        long double f14_1 = 0f;
                        x87_r7_180 - f14_1;

                        if (!(*(&((x87_r7_180 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_180, f14_1) ? 1 : 0) << 0xa
                            | (x87_r7_180 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47fddb:
                            long double x87_r7_183 = v_168;
                            long double x87_r6_136 = *(&v_168 + 4);
                            long double x87_r5_9 = v_160_1;
                            long double x87_r7_185 = 1.0 / sqrtl(x87_r5_9 * x87_r5_9
                                + x87_r6_136 * x87_r6_136 + x87_r7_183 * x87_r7_183);
                            float v_94_2 = v_168 * x87_r7_185;
                            float v_90_2 = *(&v_168 + 4) * x87_r7_185;
                            float v_8c_2 = v_160_1 * x87_r7_185;
                        }
                        else
                        {
                            long double x87_r7_181 = *(&v_168 + 4);
                            long double f17_1 = 0f;
                            x87_r7_181 - f17_1;

                            if (!(*(&((x87_r7_181 < f17_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_181, f17_1) ? 1 : 0) << 0xa
                                    | (x87_r7_181 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fddb;

                            long double x87_r7_182 = v_160_1;
                            long double f20_1 = 0f;
                            x87_r7_182 - f20_1;

                            if (!(*(&((x87_r7_182 < f20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_182, f20_1) ? 1 : 0) << 0xa
                                    | (x87_r7_182 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fddb;
                        }

                        long double x87_r7_187 = v_12c;
                        long double f19_1 = 0f;
                        x87_r7_187 - f19_1;

                        if (!(*(&((x87_r7_187 < f19_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_187, f19_1) ? 1 : 0) << 0xa
                            | (x87_r7_187 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47fe70:
                            long double x87_r7_190 = v_124;
                            long double x87_r6_144 = *(&v_12c + 4);
                            long double x87_r5_11 = v_12c;
                            long double x87_r7_192 = 1.0 / sqrtl(x87_r5_11 * x87_r5_11
                                + x87_r6_144 * x87_r6_144 + x87_r7_190 * x87_r7_190);
                            float v_88_2 = v_12c * x87_r7_192;
                            float v_84_2 = *(&v_12c + 4) * x87_r7_192;
                            float v_80_2 = v_124 * x87_r7_192;
                        }
                        else
                        {
                            long double x87_r7_188 = *(&v_12c + 4);
                            long double f21_1 = 0f;
                            x87_r7_188 - f21_1;

                            if (!(*(&((x87_r7_188 < f21_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_188, f21_1) ? 1 : 0) << 0xa
                                    | (x87_r7_188 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fe70;

                            long double x87_r7_189 = v_124;
                            long double f22_1 = 0f;
                            x87_r7_189 - f22_1;

                            if (!(*(&((x87_r7_189 < f22_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_189, f22_1) ? 1 : 0) << 0xa
                                    | (x87_r7_189 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fe70;
                        }

                        memcpy(&v_fc, &v_a0, 0x28);
                        int32_t v_d8_2 = 0;
                    }

                    v_110 = v_198 * v_1a4_3;
                    *(&v_110 + 4) = *(&v_190 + 4) * v_1a4_3;
                    float v_108_2 = v_180 * v_1a4_3;
                    Sys_AllocateMemory_14(Level_SetMission_5());
                    v_1b8 = 204.800003f;
                    int32_t v_1bc_5 = 0;
                    double* v_1c0_4 = &v_110;
                    double (* v_1c4_3)[0x3] = &v_20;
                    v_1c8 = a1;
                    Weapon_UpdateBarrel_9(v_1c8, v_1c4_3, v_1c0_4, v_1bc_5, v_1b8);
                    cond_5_1 = v_130_2 + 1 < a1[0x1a];
                    v_130_2 += 1;
                } while (cond_5_1);
            }

            char v_1b4_9 = 1;
            v_1b8 = a1[0x20];
            Physics_ApplyImpulse_2(v_1b8, v_1b4_9);
        }

        v_1b8 = Script_FormatString();
        valA = SoundSys_SetMasterVolume_7(v_1b8, &a1[0x1c]);

        if (valA)
        {
            double (* v_1b4_11)[0x3] = &v_20;
            v_1b8 = valA;
            valA = SoundSys_StopSoundSample_7(v_1b8, v_1b4_11);
        }

        long double x87_r7_202 = a1[0x14];
        long double f4_1 = 0f;
        x87_r7_202 - f4_1;
        valA = (x87_r7_202 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_202, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_202 == f4_1 ? 1 : 0) << 0xe;

        if (!(*(&valA + 1) & 0x40))
        {
            int32_t objC19 = a1[0x14];
            v_1a0 = v_50;
            int32_t tmpD26 = a1[0x15];
            *(&v_1a0 + 4) = &v_20;
            v_198 = objC19;
            *(&v_198 + 4) = tmpD26;
            v_190 = a1[0x16];
            *(&v_190 + 4) = 0x5a;
            int32_t v_188_1 = a1[0x21];
            int32_t i_1 = 0;
            valA = Level_InitTextures_4();

            if (valA->head[0] > 0)
            {
                int32_t srcS4 = 8;
                int32_t* valA48;

                do
                {
                    int32_t valA43 = 0;
                    valA43 = *(*(Level_InitTextures_4() + srcS4) + 0x1c);
                    double* v_1b4_12 = &v_1a0;
                    int32_t ctxB3 =
                        *(((valA43 + Level_InitTextures_3() * 0x180) << 2) + &g_a96ae0);
                    v_1b8 = *(Level_InitTextures_4() + srcS4);
                    ctxB3(v_1b8, v_1b4_12);
                    i_1 += 1;
                    srcS4 += 4;
                    valA48 = Level_InitTextures_4();
                } while (i_1 < *valA48);

                return valA48;
            }
        }
    }

    return valA;
}
