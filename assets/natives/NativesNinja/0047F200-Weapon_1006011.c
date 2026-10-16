#include "0047F200-Weapon_1006011.h"
/* 0x0047f200 Weapon_1006011 full linked: callers=1 callees=45 */
struct status_msg* sub_47f200(int32_t* a1)

{
    long double x87_r7 = a1[0x15];
    long double temp2 = 0.0;
    x87_r7 - temp2;
    double var_110 = x87_r7;
    bool c1 = /* bool c1 = unknown  {fst qword [esp+0xa0], st0} */;
    struct status_msg* eax;
    eax = (x87_r7 < temp2 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r7, temp2) ? 1 : 0) << 0xa | (x87_r7 == temp2 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&eax + 1) & 0x40))
    {
        int32_t eax_1 = a1[0x1b];
        double var_20[0x3];
        memcpy(&var_20, &a1[8], 0x18);
        int32_t* var_1c8;
        float var_1b8;
        struct status_msg* var_50;

        if (eax_1)
        {
            float var_1a4_1;

            var_1a4_1 = eax_1 <= 1 ? x87_r7 : x87_r7 * 0.75f;

            int32_t var_1b4_1 = 0;
            var_1b8 = 0f;
            int32_t var_1bc_1 = 0x4b;
            int32_t var_1c0_1 = 0;
            int32_t var_1c4_1 = 0x3c;
            var_1c8 = nullptr;
            struct status_msg* eax_3 = sub_480060(&var_20, "1006_01_1", var_1a4_1, 0x4b, var_1c8,
                var_1c0_1, var_1bc_1, var_1b8, var_1b4_1);
            x87_r7 = var_110;
            var_50 = eax_3;
        }

        int32_t i = 0;
        double var_1a0;
        double var_198;
        double var_190;
        int64_t var_178;
        double var_168;
        int64_t var_12c;
        double var_120;
        int32_t i_2;

        if (a1[0x1b] - 1 > 0)
        {
            float var_130_1 = x87_r7;

            do
            {
                float var_4c_1 = (sub_4b4770(Level_SetMission_5()) * 0.25f + 0.5f) * var_130_1;
                var_1b8 = Level_SetMission_5();
                sub_4b4770(var_1b8);
                var_120 = (sub_4b4770(Level_SetMission_5()) - 0.5) * var_110;
                var_168 = (sub_4b4770(Level_SetMission_5()) - 0.5) * var_110;
                double var_178_1 = (sub_4b4770(Level_SetMission_5()) - 0.5) * var_110;
                var_1c8 = Level_SetMission_5();
                i_2 = (sub_4b4770(var_1c8) + 1f) * var_50->sprite[0x44] * 0.5f;
                int32_t i_3 = i_2;
                i_2 = i + 1;
                long double x87_r7_22 = sub_4b4770(Level_SetMission_5()) * -15f;
                a1[0x1b];
                var_12c = x87_r7_22;
                int32_t eax_14 = 0x4b / a1[0x1b] * (i + 1) - var_12c;
                memcpy(&var_1a0, &var_50->head[8], 0x18);
                var_1a0 = var_1a0 + var_120;
                var_198 = var_198 + var_168;
                var_190 = var_190 + var_178_1;
                var_178 = i_3 * 0.899999976f;
                int32_t var_1e0_1 = var_178;
                sub_480060(&var_1a0, "1006_01_1", var_4c_1, i_3, 0, eax_14, i_3, 0, 0);
                i = i_2;
            } while (i < a1[0x1b] - 1);

            x87_r7 = var_110;
        }

        int32_t i_4 = a1[0x1b];
        i_2 = i_4;
        float ecx_3;

        if (i_4 <= 1)
            ecx_3 = 2.1019477e-43f;
        else
        {
            var_178 = 150f - 150f / i_2 - 1f + 150f;
            ecx_3 = var_178;
        }

        if (i_4)
        {
            var_1b8 = ecx_3;
            var_1b8 = x87_r7 * 0.89999997615814209;
            sub_47f1b0(&var_20, var_1b8, ecx_3);
        }

        int32_t eax_16 = a1[0x1a];

        if (eax_16)
        {
            int32_t var_130_2 = 0;

            if (eax_16 > 0)
            {
                bool cond:5_1;

                do
                {
                    i_2 = a1[0x11];
                    int32_t var_a8_1 = a1[0x12];
                    int32_t ecx_5 = a1[0x13];
                    var_110 = a1[0x11];
                    int32_t var_a4_1 = ecx_5;
                    *(&var_110 + 4) = a1[0x12];
                    int32_t var_108_1 = a1[0x13];
                    long double st0_8 = sub_4b4770(Level_SetMission_5());
                    long double x87_r6_7 = a1[0x19] - a1[0x18];
                    var_1b8 = &i_2;
                    float var_1a4_3 = st0_8 * x87_r6_7 + a1[0x18];
                    sub_4b4010(&var_1a0, var_1b8);
                    int32_t var_48 = var_1a0;
                    float var_188;
                    float var_40_1 = var_188;
                    int32_t var_44_1 = *(&var_198 + 4);
                    int32_t var_3c_1 = *(&var_1a0 + 4);
                    float var_184;
                    float var_34_1 = var_184;
                    int32_t var_38 = var_190;
                    int32_t var_30_1 = var_198;
                    float var_180;
                    float var_28_1 = var_180;
                    int32_t var_2c_1 = *(&var_190 + 4);
                    int32_t var_17c;
                    int32_t var_24_1 = var_17c;
                    memcpy(&var_1a0, &var_48, 0x28);
                    float var_1b4_5 = sub_4b4770(Level_SetMission_5()) * 3.14159274f;
                    float var_158;
                    var_1b8 = &var_158;
                    sub_4b3be0(var_1b8, var_1b4_5);
                    float var_14c;
                    float var_140;
                    float var_d4 =
                        var_140 * var_198 + var_14c * *(&var_1a0 + 4) + var_158 * var_1a0;
                    float var_154;
                    float var_148;
                    float var_13c;
                    float var_d0_1 =
                        var_13c * var_198 + var_148 * *(&var_1a0 + 4) + var_154 * var_1a0;
                    int32_t var_134;
                    int32_t var_b0_1 = var_134 + var_17c + 1;
                    float var_150;
                    float var_144;
                    float var_138;
                    float var_cc_1 =
                        var_138 * var_198 + var_144 * *(&var_1a0 + 4) + var_150 * var_1a0;
                    float var_c8 =
                        var_140 * *(&var_190 + 4) + var_14c * var_190 + var_158 * *(&var_198 + 4);
                    float var_c4_1 =
                        var_13c * *(&var_190 + 4) + var_148 * var_190 + var_154 * *(&var_198 + 4);
                    float var_c0_1 =
                        var_138 * *(&var_190 + 4) + var_144 * var_190 + var_150 * *(&var_198 + 4);
                    float var_bc_1 = var_140 * var_180 + var_14c * var_184 + var_158 * var_188;
                    float var_b8_1 = var_13c * var_180 + var_148 * var_184 + var_154 * var_188;
                    float var_b4_1 = var_138 * var_180 + var_144 * var_184 + var_150 * var_188;
                    memcpy(&var_1a0, &var_d4, 0x28);

                    if (var_134 + var_17c + 1 > 0x3e8)
                    {
                        long double x87_r7_74 = var_d4;
                        long double temp5_1 = 0f;
                        x87_r7_74 - temp5_1;
                        float var_78 = var_d4;
                        float var_74_1 = var_d0_1;
                        float var_70 = var_cc_1;

                        if (!(*(&((x87_r7_74 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_74, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_74 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47f77e:
                            long double x87_r7_77 = var_cc_1;
                            long double x87_r6_44 = var_d0_1;
                            long double x87_r5_1 = var_d4;
                            long double x87_r7_79 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1
                                + x87_r6_44 * x87_r6_44 + x87_r7_77 * x87_r7_77);
                            var_78 = var_d4 * x87_r7_79;
                            var_74_1 = var_74_1 * x87_r7_79;
                            var_70 = var_70 * x87_r7_79;
                        }
                        else
                        {
                            long double x87_r7_75 = var_d0_1;
                            long double temp6_1 = 0f;
                            x87_r7_75 - temp6_1;

                            if (!(*(&((x87_r7_75 < temp6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_75, temp6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_75 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f77e;

                            long double x87_r7_76 = var_cc_1;
                            long double temp8_1 = 0f;
                            x87_r7_76 - temp8_1;

                            if (!(*(&((x87_r7_76 < temp8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_76, temp8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_76 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f77e;
                        }

                        var_178 = var_b8_1 * var_cc_1 - var_b4_1 * var_d0_1;
                        int32_t var_6c_1 = var_178;
                        *(&var_178 + 4) = -((var_bc_1 * var_cc_1 - var_b4_1 * var_d4));
                        float var_170_1 = var_bc_1 * var_d0_1 - var_b8_1 * var_d4;
                        var_120 = var_170_1 * var_74_1 - *(&var_178 + 4) * var_70;
                        int32_t var_60_1 = var_120;
                        *(&var_120 + 4) = -((var_170_1 * var_78 - var_178 * var_70));
                        float var_118_1 = *(&var_178 + 4) * var_78 - var_178 * var_74_1;
                        long double x87_r7_101 = var_178;
                        long double temp7_1 = 0f;
                        x87_r7_101 - temp7_1;

                        if (!(*(&((x87_r7_101 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_101, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_101 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47f928:
                            long double x87_r7_104 = var_178;
                            long double x87_r6_64 = *(&var_178 + 4);
                            long double x87_r5_3 = var_170_1;
                            long double x87_r7_106 = 1.0 / sqrtl(x87_r5_3 * x87_r5_3
                                + x87_r6_64 * x87_r6_64 + x87_r7_104 * x87_r7_104);
                            float var_6c_2 = var_178 * x87_r7_106;
                            float var_68_2 = *(&var_178 + 4) * x87_r7_106;
                            float var_64_2 = var_170_1 * x87_r7_106;
                        }
                        else
                        {
                            long double x87_r7_102 = *(&var_178 + 4);
                            long double temp10_1 = 0f;
                            x87_r7_102 - temp10_1;

                            if (!(*(&((x87_r7_102 < temp10_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_102, temp10_1) ? 1 : 0) << 0xa
                                    | (x87_r7_102 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f928;

                            long double x87_r7_103 = var_170_1;
                            long double temp13_1 = 0f;
                            x87_r7_103 - temp13_1;

                            if (!(*(&((x87_r7_103 < temp13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_103, temp13_1) ? 1 : 0) << 0xa
                                    | (x87_r7_103 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f928;
                        }

                        long double x87_r7_108 = var_120;
                        long double temp12_1 = 0f;
                        x87_r7_108 - temp12_1;

                        if (!(*(&((x87_r7_108 < temp12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_108, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_108 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47f9bd:
                            long double x87_r7_111 = var_118_1;
                            long double x87_r6_72 = *(&var_120 + 4);
                            long double x87_r5_5 = var_120;
                            long double x87_r7_113 = 1.0 / sqrtl(x87_r5_5 * x87_r5_5
                                + x87_r6_72 * x87_r6_72 + x87_r7_111 * x87_r7_111);
                            float var_60_2 = var_120 * x87_r7_113;
                            float var_5c_2 = *(&var_120 + 4) * x87_r7_113;
                            float var_58_2 = var_118_1 * x87_r7_113;
                        }
                        else
                        {
                            long double x87_r7_109 = *(&var_120 + 4);
                            long double temp16_1 = 0f;
                            x87_r7_109 - temp16_1;

                            if (!(*(&((x87_r7_109 < temp16_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_109, temp16_1) ? 1 : 0) << 0xa
                                    | (x87_r7_109 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f9bd;

                            long double x87_r7_110 = var_118_1;
                            long double temp18_1 = 0f;
                            x87_r7_110 - temp18_1;

                            if (!(*(&((x87_r7_110 < temp18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_110, temp18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_110 == temp18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47f9bd;
                        }

                        memcpy(&var_d4, &var_78, 0x28);
                        int32_t var_b0_2 = 0;
                    }

                    float var_1b4_7 = sub_4b4770(Level_SetMission_5()) * a1[0x17];
                    var_1b8 = &var_158;
                    sub_4b3b60(var_1b8, var_1b4_7);
                    float var_fc =
                        var_140 * var_198 + var_14c * *(&var_1a0 + 4) + var_158 * var_1a0;
                    float var_f8_1 =
                        var_13c * var_198 + var_148 * *(&var_1a0 + 4) + var_154 * var_1a0;
                    float var_f4_1 =
                        var_138 * var_198 + var_144 * *(&var_1a0 + 4) + var_150 * var_1a0;
                    float var_f0_1 =
                        var_140 * *(&var_190 + 4) + var_14c * var_190 + var_158 * *(&var_198 + 4);
                    float var_ec_1 =
                        var_13c * *(&var_190 + 4) + var_148 * var_190 + var_154 * *(&var_198 + 4);
                    float var_e8_1 =
                        var_138 * *(&var_190 + 4) + var_144 * var_190 + var_150 * *(&var_198 + 4);
                    float var_e4_1 = var_140 * var_180 + var_14c * var_184 + var_158 * var_188;
                    int32_t var_d8_1 = var_134 + var_17c + 1;
                    float var_e0_1 = var_13c * var_180 + var_148 * var_184 + var_154 * var_188;
                    float var_dc_1 = var_138 * var_180 + var_144 * var_184 + var_150 * var_188;
                    memcpy(&var_1a0, &var_fc, 0x28);

                    if (var_134 + var_17c + 1 > 0x3e8)
                    {
                        long double x87_r7_153 = var_fc;
                        long double temp9_1 = 0f;
                        x87_r7_153 - temp9_1;
                        float var_a0 = var_fc;
                        float var_9c_1 = var_f8_1;
                        float var_98_1 = var_f4_1;

                        if (!(*(&((x87_r7_153 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_153, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_153 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47fc31:
                            long double x87_r7_156 = var_f4_1;
                            long double x87_r6_116 = var_f8_1;
                            long double x87_r5_7 = var_fc;
                            long double x87_r7_158 = 1.0 / sqrtl(x87_r5_7 * x87_r5_7
                                + x87_r6_116 * x87_r6_116 + x87_r7_156 * x87_r7_156);
                            var_a0 = var_fc * x87_r7_158;
                            var_9c_1 = var_9c_1 * x87_r7_158;
                            var_98_1 = var_98_1 * x87_r7_158;
                        }
                        else
                        {
                            long double x87_r7_154 = var_f8_1;
                            long double temp11_1 = 0f;
                            x87_r7_154 - temp11_1;

                            if (!(*(&((x87_r7_154 < temp11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_154, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_154 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fc31;

                            long double x87_r7_155 = var_f4_1;
                            long double temp15_1 = 0f;
                            x87_r7_155 - temp15_1;

                            if (!(*(&((x87_r7_155 < temp15_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_155, temp15_1) ? 1 : 0) << 0xa
                                    | (x87_r7_155 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fc31;
                        }

                        var_168 = var_e0_1 * var_f4_1 - var_dc_1 * var_f8_1;
                        int32_t var_94_1 = var_168;
                        *(&var_168 + 4) = -((var_e4_1 * var_f4_1 - var_dc_1 * var_fc));
                        float var_160_1 = var_e4_1 * var_f8_1 - var_e0_1 * var_fc;
                        var_12c = var_160_1 * var_9c_1 - *(&var_168 + 4) * var_98_1;
                        int32_t var_88_1 = var_12c;
                        *(&var_12c + 4) = -((var_160_1 * var_a0 - var_168 * var_98_1));
                        float var_124 = *(&var_168 + 4) * var_a0 - var_168 * var_9c_1;
                        long double x87_r7_180 = var_168;
                        long double temp14_1 = 0f;
                        x87_r7_180 - temp14_1;

                        if (!(*(&((x87_r7_180 < temp14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_180, temp14_1) ? 1 : 0) << 0xa
                            | (x87_r7_180 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47fddb:
                            long double x87_r7_183 = var_168;
                            long double x87_r6_136 = *(&var_168 + 4);
                            long double x87_r5_9 = var_160_1;
                            long double x87_r7_185 = 1.0 / sqrtl(x87_r5_9 * x87_r5_9
                                + x87_r6_136 * x87_r6_136 + x87_r7_183 * x87_r7_183);
                            float var_94_2 = var_168 * x87_r7_185;
                            float var_90_2 = *(&var_168 + 4) * x87_r7_185;
                            float var_8c_2 = var_160_1 * x87_r7_185;
                        }
                        else
                        {
                            long double x87_r7_181 = *(&var_168 + 4);
                            long double temp17_1 = 0f;
                            x87_r7_181 - temp17_1;

                            if (!(*(&((x87_r7_181 < temp17_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_181, temp17_1) ? 1 : 0) << 0xa
                                    | (x87_r7_181 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fddb;

                            long double x87_r7_182 = var_160_1;
                            long double temp20_1 = 0f;
                            x87_r7_182 - temp20_1;

                            if (!(*(&((x87_r7_182 < temp20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_182, temp20_1) ? 1 : 0) << 0xa
                                    | (x87_r7_182 == temp20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fddb;
                        }

                        long double x87_r7_187 = var_12c;
                        long double temp19_1 = 0f;
                        x87_r7_187 - temp19_1;

                        if (!(*(&((x87_r7_187 < temp19_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_187, temp19_1) ? 1 : 0) << 0xa
                            | (x87_r7_187 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_47fe70:
                            long double x87_r7_190 = var_124;
                            long double x87_r6_144 = *(&var_12c + 4);
                            long double x87_r5_11 = var_12c;
                            long double x87_r7_192 = 1.0 / sqrtl(x87_r5_11 * x87_r5_11
                                + x87_r6_144 * x87_r6_144 + x87_r7_190 * x87_r7_190);
                            float var_88_2 = var_12c * x87_r7_192;
                            float var_84_2 = *(&var_12c + 4) * x87_r7_192;
                            float var_80_2 = var_124 * x87_r7_192;
                        }
                        else
                        {
                            long double x87_r7_188 = *(&var_12c + 4);
                            long double temp21_1 = 0f;
                            x87_r7_188 - temp21_1;

                            if (!(*(&((x87_r7_188 < temp21_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_188, temp21_1) ? 1 : 0) << 0xa
                                    | (x87_r7_188 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fe70;

                            long double x87_r7_189 = var_124;
                            long double temp22_1 = 0f;
                            x87_r7_189 - temp22_1;

                            if (!(*(&((x87_r7_189 < temp22_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_189, temp22_1) ? 1 : 0) << 0xa
                                    | (x87_r7_189 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_47fe70;
                        }

                        memcpy(&var_fc, &var_a0, 0x28);
                        int32_t var_d8_2 = 0;
                    }

                    var_110 = var_198 * var_1a4_3;
                    *(&var_110 + 4) = *(&var_190 + 4) * var_1a4_3;
                    float var_108_2 = var_180 * var_1a4_3;
                    sub_4b4770(Level_SetMission_5());
                    var_1b8 = 204.800003f;
                    int32_t var_1bc_5 = 0;
                    double* var_1c0_4 = &var_110;
                    double (* var_1c4_3)[0x3] = &var_20;
                    var_1c8 = a1;
                    sub_47f0d0(var_1c8, var_1c4_3, var_1c0_4, var_1bc_5, var_1b8);
                    cond:5_1 = var_130_2 + 1 < a1[0x1a];
                    var_130_2 += 1;
                } while (cond:5_1);
            }

            char var_1b4_9 = 1;
            var_1b8 = a1[0x20];
            sub_503d50(var_1b8, var_1b4_9);
        }

        var_1b8 = sub_4f0ee0();
        eax = sub_4e6b00(var_1b8, &a1[0x1c]);

        if (eax)
        {
            double (* var_1b4_11)[0x3] = &var_20;
            var_1b8 = eax;
            eax = sub_4e6c30(var_1b8, var_1b4_11);
        }

        long double x87_r7_202 = a1[0x14];
        long double temp4_1 = 0f;
        x87_r7_202 - temp4_1;
        eax = (x87_r7_202 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_202, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_202 == temp4_1 ? 1 : 0) << 0xe;

        if (!(*(&eax + 1) & 0x40))
        {
            int32_t ecx_19 = a1[0x14];
            var_1a0 = var_50;
            int32_t edx_26 = a1[0x15];
            *(&var_1a0 + 4) = &var_20;
            var_198 = ecx_19;
            *(&var_198 + 4) = edx_26;
            var_190 = a1[0x16];
            *(&var_190 + 4) = 0x5a;
            int32_t var_188_1 = a1[0x21];
            int32_t i_1 = 0;
            eax = Level_InitTextures_4();

            if (eax->head[0] > 0)
            {
                int32_t esi_4 = 8;
                int32_t* eax_48;

                do
                {
                    int32_t eax_43 = 0;
                    eax_43 = *(*(Level_InitTextures_4() + esi_4) + 0x1c);
                    double* var_1b4_12 = &var_1a0;
                    int32_t ebx_3 =
                        *(((eax_43 + Level_InitTextures_3() * 0x180) << 2) + &g_a96ae0);
                    var_1b8 = *(Level_InitTextures_4() + esi_4);
                    ebx_3(var_1b8, var_1b4_12);
                    i_1 += 1;
                    esi_4 += 4;
                    eax_48 = Level_InitTextures_4();
                } while (i_1 < *eax_48);

                return eax_48;
            }
        }
    }

    return eax;
}
