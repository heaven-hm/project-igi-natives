#include "004C4950-Car_GunCreate.h"
/* 0x004c4950 Car_GunCreate full linked: callers=23 callees=10 */
int32_t* sub_4c4950(void* a1, void* a2, int32_t a3)

{
    int32_t* result = *(a2 + 0x6c);

    if (result)
    {
        result = sub_4d0d10(*result);
        int32_t* result_2 = result;
        int32_t* result_1 = nullptr;

        if (result > 0)
        {
            while (true)
            {
                char* ebx_1 = nullptr;
                int32_t var_174_1 = 0;
                char* eax_2 = sub_4d0cf0(**(a2 + 0x6c), result_1);
                double var_118_1 = *(eax_2 + 0x10);
                double var_110_1 = *(eax_2 + 0x14);
                double var_108_1 = *(eax_2 + 0x18);
                long double x87_r7_4 = *(eax_2 + 0x10);
                double var_130 = x87_r7_4;
                long double x87_r6_1 = *(eax_2 + 0x14);
                double var_128 = x87_r6_1;
                long double x87_r5_1 = *(eax_2 + 0x18);
                double var_120_1 = x87_r5_1;
                double var_a8 = *(a2 + 0x74) * x87_r6_1 + *(a2 + 0x78) * x87_r5_1
                    + *(a2 + 0x70) * x87_r7_4;
                double var_a0_1 = *(a2 + 0x80) * x87_r6_1 + *(a2 + 0x84) * x87_r5_1
                    + *(a2 + 0x7c) * x87_r7_4;
                double var_98_1 = *(a2 + 0x90) * x87_r5_1 + *(a2 + 0x88) * x87_r7_4
                    + *(a2 + 0x8c) * x87_r6_1;
                memcpy(&var_130, &var_a8, 0x18);
                var_130 = var_a8 + *(a2 + 0x20);
                var_128 = var_128 + *(a2 + 0x28);
                double var_120_2 = var_120_1 + *(a2 + 0x30);
                long double x87_r7_12 = *(eax_2 + 0x20);
                long double x87_r6_3 = *(eax_2 + 0x2c);
                long double x87_r5_3 = *(eax_2 + 0x38);
                float eax_3 = *(eax_2 + 0x28);
                float ecx_2 = *(eax_2 + 0x1c);
                float ecx_3 = *(eax_2 + 0x34);
                float var_148 = x87_r5_3 * eax_3 - x87_r6_3 * ecx_3;
                float var_1f0 = ecx_2;
                float var_1e8_1 = ecx_3;
                float var_1ec_1 = eax_3;
                float var_144_1 = -((x87_r5_3 * ecx_2 - x87_r7_12 * ecx_3));
                long double x87_r7_14 = x87_r6_3 * ecx_2 - x87_r7_12 * eax_3;
                long double x87_r6_7 = ecx_2;
                long double temp1_1 = 0f;
                x87_r6_7 - temp1_1;

                if (!(*(&((x87_r6_7 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_7, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r6_7 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
                label_4c4b68:
                    long double x87_r6_10 = ecx_3;
                    long double x87_r5_7 = eax_3;
                    long double x87_r4_18 = ecx_2;
                    long double x87_r6_12 = 1.0 /
                        sqrtl(x87_r4_18 * x87_r4_18 + x87_r5_7 * x87_r5_7 + x87_r6_10 * x87_r6_10);
                    var_1f0 = ecx_2 * x87_r6_12;
                    var_1ec_1 = var_1ec_1 * x87_r6_12;
                    var_1e8_1 = var_1e8_1 * x87_r6_12;
                }
                else
                {
                    long double x87_r6_8 = eax_3;
                    long double temp2_1 = 0f;
                    x87_r6_8 - temp2_1;

                    if (!(*(&((x87_r6_8 < temp2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_8, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r6_8 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4c4b68;

                    long double x87_r6_9 = ecx_3;
                    long double temp4_1 = 0f;
                    x87_r6_9 - temp4_1;

                    if (!(*(&((x87_r6_9 < temp4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_9, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r6_9 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4c4b68;
                }

                float var_264_1 = var_144_1 * ecx_3 - x87_r7_14 * eax_3;
                float var_1e4_1 = var_264_1;
                float var_260_1 = -((var_148 * ecx_3 - x87_r7_14 * ecx_2));
                float var_25c_1 = var_148 * eax_3 - var_144_1 * ecx_2;
                float var_228_1 = var_25c_1 * var_1ec_1 - var_260_1 * var_1e8_1;
                float var_1d8_1 = var_228_1;
                float var_224_1 = -((var_25c_1 * var_1f0 - var_264_1 * var_1e8_1));
                float var_220_1 = var_260_1 * var_1f0 - var_264_1 * var_1ec_1;
                long double x87_r7_31 = var_264_1;
                long double temp3_1 = 0f;
                x87_r7_31 - temp3_1;

                if (!(*(&((x87_r7_31 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c4cf6:
                    long double x87_r7_34 = var_264_1;
                    long double x87_r6_29 = var_260_1;
                    long double x87_r5_17 = var_25c_1;
                    long double x87_r7_40 = 1.0 / sqrtl(x87_r7_34 * x87_r7_34
                        + x87_r5_17 * x87_r5_17 + x87_r6_29 * x87_r6_29);
                    float var_1e4_2 = var_264_1 * x87_r7_40;
                    float var_1e0_2 = var_260_1 * x87_r7_40;
                    float var_1dc_2 = var_25c_1 * x87_r7_40;
                }
                else
                {
                    long double x87_r7_32 = var_260_1;
                    long double temp5_1 = 0f;
                    x87_r7_32 - temp5_1;

                    if (!(*(&((x87_r7_32 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_32, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_32 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4cf6;

                    long double x87_r7_33 = var_25c_1;
                    long double temp7_1 = 0f;
                    x87_r7_33 - temp7_1;

                    if (!(*(&((x87_r7_33 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_33, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_33 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4cf6;
                }

                long double x87_r7_42 = var_228_1;
                long double temp6_1 = 0f;
                x87_r7_42 - temp6_1;

                if (!(*(&((x87_r7_42 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_42, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_42 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c4d84:
                    long double x87_r7_45 = var_220_1;
                    long double x87_r6_37 = var_224_1;
                    long double x87_r5_22 = var_228_1;
                    long double x87_r7_47 = 1.0 / sqrtl(x87_r5_22 * x87_r5_22
                        + x87_r6_37 * x87_r6_37 + x87_r7_45 * x87_r7_45);
                    float var_1d8_2 = var_228_1 * x87_r7_47;
                    float var_1d4_2 = var_224_1 * x87_r7_47;
                    float var_1d0_2 = var_220_1 * x87_r7_47;
                }
                else
                {
                    long double x87_r7_43 = var_224_1;
                    long double temp8_1 = 0f;
                    x87_r7_43 - temp8_1;

                    if (!(*(&((x87_r7_43 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_43, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r7_43 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4d84;

                    long double x87_r7_44 = var_220_1;
                    long double temp9_1 = 0f;
                    x87_r7_44 - temp9_1;

                    if (!(*(&((x87_r7_44 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_44, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_44 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4d84;
                }

                float var_d8;
                memcpy(&var_d8, &var_1f0, 0x28);
                int32_t var_b4_1 = 0;
                float var_cc;
                float var_c0;
                float var_218 =
                    var_cc * *(a2 + 0x74) + var_c0 * *(a2 + 0x78) + var_d8 * *(a2 + 0x70);
                float var_d4;
                float var_c8;
                float var_bc;
                float var_214_1 =
                    var_c8 * *(a2 + 0x74) + var_bc * *(a2 + 0x78) + var_d4 * *(a2 + 0x70);
                float var_d0;
                float var_c4;
                float var_b8;
                float var_210_1 =
                    var_c4 * *(a2 + 0x74) + var_b8 * *(a2 + 0x78) + var_d0 * *(a2 + 0x70);
                float var_20c_1 =
                    var_cc * *(a2 + 0x80) + var_c0 * *(a2 + 0x84) + var_d8 * *(a2 + 0x7c);
                float var_208_1 =
                    var_c8 * *(a2 + 0x80) + var_bc * *(a2 + 0x84) + var_d4 * *(a2 + 0x7c);
                float var_204_1 =
                    var_c4 * *(a2 + 0x80) + var_b8 * *(a2 + 0x84) + var_d0 * *(a2 + 0x7c);
                float var_200_1 =
                    var_c0 * *(a2 + 0x90) + var_d8 * *(a2 + 0x88) + var_cc * *(a2 + 0x8c);
                int32_t eax_12 = *(a2 + 0x94) + 1;
                int32_t var_1f4_1 = eax_12;
                float var_1fc_1 =
                    var_bc * *(a2 + 0x90) + var_d4 * *(a2 + 0x88) + var_c8 * *(a2 + 0x8c);
                float var_1f8_1 =
                    var_b8 * *(a2 + 0x90) + var_d0 * *(a2 + 0x88) + var_c4 * *(a2 + 0x8c);
                float var_100;
                memcpy(&var_100, &var_218, 0x28);

                if (eax_12 > 0x3e8)
                {
                    long double x87_r7_85 = var_218;
                    long double temp11_1 = 0f;
                    x87_r7_85 - temp11_1;
                    float var_19c_1 = var_214_1;
                    float var_1a0 = var_218;
                    float var_198_1 = var_210_1;

                    if (!(*(&((x87_r7_85 < temp11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_85, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r7_85 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4c4fff:
                        long double x87_r7_88 = var_210_1;
                        long double x87_r6_81 = var_214_1;
                        long double x87_r5_24 = var_218;
                        long double x87_r7_90 = 1.0 / sqrtl(x87_r5_24 * x87_r5_24
                            + x87_r6_81 * x87_r6_81 + x87_r7_88 * x87_r7_88);
                        var_1a0 = var_218 * x87_r7_90;
                        var_19c_1 = var_19c_1 * x87_r7_90;
                        var_198_1 = var_198_1 * x87_r7_90;
                    }
                    else
                    {
                        long double x87_r7_86 = var_214_1;
                        long double temp13_1 = 0f;
                        x87_r7_86 - temp13_1;

                        if (!(*(&((x87_r7_86 < temp13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_86, temp13_1) ? 1 : 0) << 0xa
                                | (x87_r7_86 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c4fff;

                        long double x87_r7_87 = var_210_1;
                        long double temp17_1 = 0f;
                        x87_r7_87 - temp17_1;

                        if (!(*(&((x87_r7_87 < temp17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_87, temp17_1) ? 1 : 0) << 0xa
                                | (x87_r7_87 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c4fff;
                    }

                    float var_24c_1 = var_1fc_1 * var_210_1 - var_1f8_1 * var_214_1;
                    float var_194_1 = var_24c_1;
                    float var_248_1 = -((var_200_1 * var_210_1 - var_1f8_1 * var_218));
                    float var_244_1 = var_200_1 * var_214_1 - var_1fc_1 * var_218;
                    float var_234_1 = var_244_1 * var_19c_1 - var_248_1 * var_198_1;
                    float var_188_1 = var_234_1;
                    float var_230_1 = -((var_244_1 * var_1a0 - var_24c_1 * var_198_1));
                    float var_22c_1 = var_248_1 * var_1a0 - var_24c_1 * var_19c_1;
                    long double x87_r7_112 = var_24c_1;
                    long double temp16_1 = 0f;
                    x87_r7_112 - temp16_1;

                    if (!(*(&((x87_r7_112 < temp16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_112, temp16_1) ? 1 : 0) << 0xa
                        | (x87_r7_112 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4c5167:
                        long double x87_r7_115 = var_24c_1;
                        long double x87_r6_101 = var_248_1;
                        long double x87_r5_26 = var_244_1;
                        long double x87_r7_117 = 1.0 / sqrtl(x87_r5_26 * x87_r5_26
                            + x87_r6_101 * x87_r6_101 + x87_r7_115 * x87_r7_115);
                        float var_194_2 = var_24c_1 * x87_r7_117;
                        float var_190_2 = var_248_1 * x87_r7_117;
                        float var_18c_2 = var_244_1 * x87_r7_117;
                    }
                    else
                    {
                        long double x87_r7_113 = var_248_1;
                        long double temp19_1 = 0f;
                        x87_r7_113 - temp19_1;

                        if (!(*(&((x87_r7_113 < temp19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_113, temp19_1) ? 1 : 0) << 0xa
                                | (x87_r7_113 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c5167;

                        long double x87_r7_114 = var_244_1;
                        long double temp23_1 = 0f;
                        x87_r7_114 - temp23_1;

                        if (!(*(&((x87_r7_114 < temp23_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_114, temp23_1) ? 1 : 0) << 0xa
                                | (x87_r7_114 == temp23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c5167;
                    }

                    long double x87_r7_119 = var_234_1;
                    long double temp22_1 = 0f;
                    x87_r7_119 - temp22_1;

                    if (!(*(&((x87_r7_119 < temp22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_119, temp22_1) ? 1 : 0) << 0xa
                        | (x87_r7_119 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4c51f3:
                        long double x87_r7_122 = var_22c_1;
                        long double x87_r6_109 = var_230_1;
                        long double x87_r5_28 = var_234_1;
                        long double x87_r7_124 = 1.0 / sqrtl(x87_r5_28 * x87_r5_28
                            + x87_r6_109 * x87_r6_109 + x87_r7_122 * x87_r7_122);
                        float var_188_2 = var_234_1 * x87_r7_124;
                        float var_184_2 = var_230_1 * x87_r7_124;
                        float var_180_2 = var_22c_1 * x87_r7_124;
                    }
                    else
                    {
                        long double x87_r7_120 = var_230_1;
                        long double temp25_1 = 0f;
                        x87_r7_120 - temp25_1;

                        if (!(*(&((x87_r7_120 < temp25_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_120, temp25_1) ? 1 : 0) << 0xa
                                | (x87_r7_120 == temp25_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c51f3;

                        long double x87_r7_121 = var_22c_1;
                        long double temp27_1 = 0f;
                        x87_r7_121 - temp27_1;

                        if (!(*(&((x87_r7_121 < temp27_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_121, temp27_1) ? 1 : 0) << 0xa
                                | (x87_r7_121 == temp27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c51f3;
                    }

                    memcpy(&var_218, &var_1a0, 0x28);
                    int32_t var_1f4_2 = 0;
                }

                long double x87_r7_126 = var_100;
                long double temp10_1 = 0f;
                x87_r7_126 - temp10_1;
                float var_1c8 = var_100;
                float var_f8;
                float var_1c0_1 = var_f8;
                float var_fc;
                float var_1c4_1 = var_fc;

                if (!(*(&((x87_r7_126 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_126, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r7_126 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c52cf:
                    long double x87_r7_129 = var_f8;
                    long double x87_r6_117 = var_fc;
                    long double x87_r5_30 = var_100;
                    long double x87_r7_131 = 1.0 / sqrtl(x87_r5_30 * x87_r5_30
                        + x87_r6_117 * x87_r6_117 + x87_r7_129 * x87_r7_129);
                    var_1c8 = var_100 * x87_r7_131;
                    var_1c4_1 = var_1c4_1 * x87_r7_131;
                    var_1c0_1 = var_1c0_1 * x87_r7_131;
                }
                else
                {
                    long double x87_r7_127 = var_fc;
                    long double temp12_1 = 0f;
                    x87_r7_127 - temp12_1;

                    if (!(*(&((x87_r7_127 < temp12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_127, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_127 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c52cf;

                    long double x87_r7_128 = var_f8;
                    long double temp15_1 = 0f;
                    x87_r7_128 - temp15_1;

                    if (!(*(&((x87_r7_128 < temp15_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_128, temp15_1) ? 1 : 0) << 0xa
                            | (x87_r7_128 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c52cf;
                }

                float var_e4;
                float var_e0;
                float var_258_1 = var_f8 * var_e4 - var_fc * var_e0;
                float var_1bc_1 = var_258_1;
                float var_e8;
                float var_254_1 = -((var_e8 * var_f8 - var_100 * var_e0));
                float var_250_1 = var_e8 * var_fc - var_100 * var_e4;
                float var_240 = var_250_1 * var_1c4_1 - var_254_1 * var_1c0_1;
                float var_1b0_1 = var_240;
                float var_23c_1 = -((var_250_1 * var_1c8 - var_258_1 * var_1c0_1));
                float var_238_1 = var_254_1 * var_1c8 - var_258_1 * var_1c4_1;
                long double x87_r7_153 = var_258_1;
                long double temp14_1 = 0f;
                x87_r7_153 - temp14_1;

                if (!(*(&((x87_r7_153 < temp14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_153, temp14_1) ? 1 : 0) << 0xa
                    | (x87_r7_153 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c5467:
                    long double x87_r7_156 = var_258_1;
                    long double x87_r6_137 = var_254_1;
                    long double x87_r5_32 = var_250_1;
                    long double x87_r7_158 = 1.0 / sqrtl(x87_r5_32 * x87_r5_32
                        + x87_r6_137 * x87_r6_137 + x87_r7_156 * x87_r7_156);
                    float var_1bc_2 = var_258_1 * x87_r7_158;
                    float var_1b8_2 = var_254_1 * x87_r7_158;
                    float var_1b4_2 = var_250_1 * x87_r7_158;
                }
                else
                {
                    long double x87_r7_154 = var_254_1;
                    long double temp18_1 = 0f;
                    x87_r7_154 - temp18_1;

                    if (!(*(&((x87_r7_154 < temp18_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_154, temp18_1) ? 1 : 0) << 0xa
                            | (x87_r7_154 == temp18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c5467;

                    long double x87_r7_155 = var_250_1;
                    long double temp21_1 = 0f;
                    x87_r7_155 - temp21_1;

                    if (!(*(&((x87_r7_155 < temp21_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_155, temp21_1) ? 1 : 0) << 0xa
                            | (x87_r7_155 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c5467;
                }

                long double x87_r7_160 = var_240;
                long double temp20_1 = 0f;
                x87_r7_160 - temp20_1;

                if (!(*(&((x87_r7_160 < temp20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_160, temp20_1) ? 1 : 0) << 0xa
                    | (x87_r7_160 == temp20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c54f3:
                    long double x87_r7_163 = var_238_1;
                    long double x87_r6_145 = var_23c_1;
                    long double x87_r5_34 = var_240;
                    long double x87_r7_165 = 1.0 / sqrtl(x87_r5_34 * x87_r5_34
                        + x87_r6_145 * x87_r6_145 + x87_r7_163 * x87_r7_163);
                    float var_1b0_2 = var_240 * x87_r7_165;
                    float var_1ac_2 = var_23c_1 * x87_r7_165;
                    float var_1a8_2 = var_238_1 * x87_r7_165;
                }
                else
                {
                    long double x87_r7_161 = var_23c_1;
                    long double temp24_1 = 0f;
                    x87_r7_161 - temp24_1;

                    if (!(*(&((x87_r7_161 < temp24_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_161, temp24_1) ? 1 : 0) << 0xa
                            | (x87_r7_161 == temp24_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c54f3;

                    long double x87_r7_162 = var_238_1;
                    long double temp26_1 = 0f;
                    x87_r7_162 - temp26_1;

                    if (!(*(&((x87_r7_162 < temp26_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_162, temp26_1) ? 1 : 0) << 0xa
                            | (x87_r7_162 == temp26_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c54f3;
                }

                memcpy(&var_100, &var_1c8, 0x28);
                int32_t var_dc_1 = 0;
                int32_t var_178_1 = 0;

                if (g_a4433c > 0)
                {
                    char* edi_1 = &g_b97e00;

                    while (true)
                    {
                        if (ebx_1)
                            goto label_4c55f2;

                        char* esi_1 = edi_1;
                        char* eax_26 = eax_2;
                        int32_t eax_28;

                        while (true)
                        {
                            char ebx_2 = *eax_26;
                            char temp28_1 = *esi_1;
                            bool c_1 = ebx_2 < temp28_1;

                            if (ebx_2 == temp28_1)
                            {
                                if (!ebx_2)
                                {
                                    eax_28 = 0;
                                    break;
                                }

                                ebx_2 = eax_26[1];
                                char temp31_1 = esi_1[1];
                                c_1 = ebx_2 < temp31_1;

                                if (ebx_2 == temp31_1)
                                {
                                    eax_26 = &eax_26[2];
                                    esi_1 = &esi_1[2];

                                    if (ebx_2)
                                        continue;

                                    eax_28 = 0;
                                    break;
                                }
                            }

                            eax_28 = eax_26 - eax_26 + 1;
                            break;
                        }

                        if (eax_28)
                            ebx_1 = &g_b97e00;
                        else
                        {
                            ebx_1 = edi_1;
                            char* var_174_2 = ebx_1;
                        }

                        edi_1 = &edi_1[0x28];
                        bool cond:4_1 = var_178_1 + 1 < g_a4433c;
                        var_178_1 += 1;

                        if (!cond:4_1)
                            break;
                    }

                    if (ebx_1)
                    {
                    label_4c55f2:
                        int32_t kind = *(a2 + 0x68);
                        int32_t var_ac_1 = *(ebx_1 + 0x24);
                        int32_t kind_1 = kind;
                        kind = *(ebx_1 + 0x20);
                        int32_t var_b0_1 = a3;
                        void* flags = &ebx_1[0x10];
                        struct status_msg* eax_33 = QTask_HandleInput(a1, kind, &flags);
                        int32_t edx_3 = *(a2 + 0x68);
                        int32_t var_4_1 = *(ebx_1 + 0x24);
                        void* var_90 = &ebx_1[0x10];
                        int32_t var_8c_1 = edx_3;
                        int32_t var_8_1 = a3;
                        uint32_t eax_36 = sub_4c5700();
                        int32_t edx_4 = 0;
                        edx_4 = eax_33->head[7];
                        int32_t eax_37 = *(((eax_36 * 0x180 + edx_4) << 2) + &g_a96ae0);

                        if (eax_37)
                            eax_37(eax_33, &var_90);

                        result = result_1 + 1;
                        result_1 = result;

                        if (result >= result_2)
                            break;

                        continue;
                    }
                }

                int32_t var_278_5 = *(a2 + 0x6c) + 0x14;
                char* var_27c_4 = eax_2;
                Error_Show("Magic object type "%s" not defined (Created from model "%s")");

                while (true)
                    /* nop */
            }
        }
    }

    return result;
}
