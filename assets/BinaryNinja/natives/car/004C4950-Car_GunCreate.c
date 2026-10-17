// Original IGI.EXE function: Car_GunCreate (VA 0x004C4950; static CFG gate FAIL, CFG score 0.833).
#include "Car_GunCreate.h"
int32_t* Car_GunCreate(void* context, void* param_2, int32_t param_3)

{
    int32_t* result = *(param_2 + 0x6c);

    if (result)
    {
        result = Render_DrawSplineMesh_2(*result);
        int32_t* result_2 = result;
        int32_t* result_1 = nullptr;

        if (result > 0)
        {
            while (true)
            {
                char* context_1 = nullptr;
                int32_t item_174_1 = 0;
                char* data_2 = Render_DrawBoneMesh_2(**(param_2 + 0x6c), result_1);
                double item_118_1 = *(data_2 + 0x10);
                double item_110_1 = *(data_2 + 0x14);
                double item_108_1 = *(data_2 + 0x18);
                long double fpu_val_7_4 = *(data_2 + 0x10);
                double item_130 = fpu_val_7_4;
                long double fpu_val_6_1 = *(data_2 + 0x14);
                double item_128 = fpu_val_6_1;
                long double fpu_val_5_1 = *(data_2 + 0x18);
                double item_120_1 = fpu_val_5_1;
                double item_a8 = *(param_2 + 0x74) * fpu_val_6_1 + *(param_2 + 0x78) * fpu_val_5_1
                    + *(param_2 + 0x70) * fpu_val_7_4;
                double item_a0_1 = *(param_2 + 0x80) * fpu_val_6_1 + *(param_2 + 0x84) * fpu_val_5_1
                    + *(param_2 + 0x7c) * fpu_val_7_4;
                double item_98_1 = *(param_2 + 0x90) * fpu_val_5_1 + *(param_2 + 0x88) * fpu_val_7_4
                    + *(param_2 + 0x8c) * fpu_val_6_1;
                memcpy(&item_130, &item_a8, 0x18);
                item_130 = item_a8 + *(param_2 + 0x20);
                item_128 = item_128 + *(param_2 + 0x28);
                double item_120_2 = item_120_1 + *(param_2 + 0x30);
                long double fpu_val_7_12 = *(data_2 + 0x20);
                long double fpu_val_6_3 = *(data_2 + 0x2c);
                long double fpu_val_5_3 = *(data_2 + 0x38);
                float data_3 = *(data_2 + 0x28);
                float entity_2 = *(data_2 + 0x1c);
                float entity_3 = *(data_2 + 0x34);
                float item_148 = fpu_val_5_3 * data_3 - fpu_val_6_3 * entity_3;
                float item_1f0 = entity_2;
                float item_1e8_1 = entity_3;
                float item_1ec_1 = data_3;
                float item_144_1 = -((fpu_val_5_3 * entity_2 - fpu_val_7_12 * entity_3));
                long double fpu_val_7_14 = fpu_val_6_3 * entity_2 - fpu_val_7_12 * data_3;
                long double fpu_val_6_7 = entity_2;
                long double f1_1 = 0.0f;
                fpu_val_6_7 - f1_1;

                if (!(*(&((fpu_val_6_7 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_7, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_7 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
                label_4c4b68:
                    long double fpu_val_6_10 = entity_3;
                    long double fpu_val_5_7 = data_3;
                    long double fpu_val_4_18 = entity_2;
                    long double fpu_val_6_12 = 1.0 /
                        sqrtl(fpu_val_4_18 * fpu_val_4_18 + fpu_val_5_7 * fpu_val_5_7 + fpu_val_6_10 * fpu_val_6_10);
                    item_1f0 = entity_2 * fpu_val_6_12;
                    item_1ec_1 = item_1ec_1 * fpu_val_6_12;
                    item_1e8_1 = item_1e8_1 * fpu_val_6_12;
                }
                else
                {
                    long double fpu_val_6_8 = data_3;
                    long double f2_1 = 0.0f;
                    fpu_val_6_8 - f2_1;

                    if (!(*(&((fpu_val_6_8 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_8, f2_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4c4b68;

                    long double fpu_val_6_9 = entity_3;
                    long double f4_1 = 0.0f;
                    fpu_val_6_9 - f4_1;

                    if (!(*(&((fpu_val_6_9 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_9, f4_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_9 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4c4b68;
                }

                float item_264_1 = item_144_1 * entity_3 - fpu_val_7_14 * data_3;
                float item_1e4_1 = item_264_1;
                float item_260_1 = -((item_148 * entity_3 - fpu_val_7_14 * entity_2));
                float item_25c_1 = item_148 * data_3 - item_144_1 * entity_2;
                float item_228_1 = item_25c_1 * item_1ec_1 - item_260_1 * item_1e8_1;
                float item_1d8_1 = item_228_1;
                float item_224_1 = -((item_25c_1 * item_1f0 - item_264_1 * item_1e8_1));
                float item_220_1 = item_260_1 * item_1f0 - item_264_1 * item_1ec_1;
                long double fpu_val_7_31 = item_264_1;
                long double f3_1 = 0.0f;
                fpu_val_7_31 - f3_1;

                if (!(*(&((fpu_val_7_31 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_31, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_31 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c4cf6:
                    long double fpu_val_7_34 = item_264_1;
                    long double fpu_val_6_29 = item_260_1;
                    long double fpu_val_5_17 = item_25c_1;
                    long double fpu_val_7_40 = 1.0 / sqrtl(fpu_val_7_34 * fpu_val_7_34
                        + fpu_val_5_17 * fpu_val_5_17 + fpu_val_6_29 * fpu_val_6_29);
                    float item_1e4_2 = item_264_1 * fpu_val_7_40;
                    float item_1e0_2 = item_260_1 * fpu_val_7_40;
                    float item_1dc_2 = item_25c_1 * fpu_val_7_40;
                }
                else
                {
                    long double fpu_val_7_32 = item_260_1;
                    long double f5_1 = 0.0f;
                    fpu_val_7_32 - f5_1;

                    if (!(*(&((fpu_val_7_32 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_32, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_32 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4cf6;

                    long double fpu_val_7_33 = item_25c_1;
                    long double f7_1 = 0.0f;
                    fpu_val_7_33 - f7_1;

                    if (!(*(&((fpu_val_7_33 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_33, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_33 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4cf6;
                }

                long double fpu_val_7_42 = item_228_1;
                long double f6_1 = 0.0f;
                fpu_val_7_42 - f6_1;

                if (!(*(&((fpu_val_7_42 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_42, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_42 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c4d84:
                    long double fpu_val_7_45 = item_220_1;
                    long double fpu_val_6_37 = item_224_1;
                    long double fpu_val_5_22 = item_228_1;
                    long double fpu_val_7_47 = 1.0 / sqrtl(fpu_val_5_22 * fpu_val_5_22
                        + fpu_val_6_37 * fpu_val_6_37 + fpu_val_7_45 * fpu_val_7_45);
                    float item_1d8_2 = item_228_1 * fpu_val_7_47;
                    float item_1d4_2 = item_224_1 * fpu_val_7_47;
                    float item_1d0_2 = item_220_1 * fpu_val_7_47;
                }
                else
                {
                    long double fpu_val_7_43 = item_224_1;
                    long double f8_1 = 0.0f;
                    fpu_val_7_43 - f8_1;

                    if (!(*(&((fpu_val_7_43 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_43, f8_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_43 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4d84;

                    long double fpu_val_7_44 = item_220_1;
                    long double f9_1 = 0.0f;
                    fpu_val_7_44 - f9_1;

                    if (!(*(&((fpu_val_7_44 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_44, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_44 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4d84;
                }

                float item_d8;
                memcpy(&item_d8, &item_1f0, 0x28);
                int32_t item_b4_1 = 0;
                float item_cc;
                float item_c0;
                float item_218 =
                    item_cc * *(param_2 + 0x74) + item_c0 * *(param_2 + 0x78) + item_d8 * *(param_2 + 0x70);
                float item_d4;
                float item_c8;
                float item_bc;
                float item_214_1 =
                    item_c8 * *(param_2 + 0x74) + item_bc * *(param_2 + 0x78) + item_d4 * *(param_2 + 0x70);
                float item_d0;
                float item_c4;
                float item_b8;
                float item_210_1 =
                    item_c4 * *(param_2 + 0x74) + item_b8 * *(param_2 + 0x78) + item_d0 * *(param_2 + 0x70);
                float item_20c_1 =
                    item_cc * *(param_2 + 0x80) + item_c0 * *(param_2 + 0x84) + item_d8 * *(param_2 + 0x7c);
                float item_208_1 =
                    item_c8 * *(param_2 + 0x80) + item_bc * *(param_2 + 0x84) + item_d4 * *(param_2 + 0x7c);
                float item_204_1 =
                    item_c4 * *(param_2 + 0x80) + item_b8 * *(param_2 + 0x84) + item_d0 * *(param_2 + 0x7c);
                float item_200_1 =
                    item_c0 * *(param_2 + 0x90) + item_d8 * *(param_2 + 0x88) + item_cc * *(param_2 + 0x8c);
                int32_t data_12 = *(param_2 + 0x94) + 1;
                int32_t item_1f4_1 = data_12;
                float item_1fc_1 =
                    item_bc * *(param_2 + 0x90) + item_d4 * *(param_2 + 0x88) + item_c8 * *(param_2 + 0x8c);
                float item_1f8_1 =
                    item_b8 * *(param_2 + 0x90) + item_d0 * *(param_2 + 0x88) + item_c4 * *(param_2 + 0x8c);
                float item_100;
                memcpy(&item_100, &item_218, 0x28);

                if (data_12 > 0x3e8)
                {
                    long double fpu_val_7_85 = item_218;
                    long double f11_1 = 0.0f;
                    fpu_val_7_85 - f11_1;
                    float item_19c_1 = item_214_1;
                    float item_1a0 = item_218;
                    float item_198_1 = item_210_1;

                    if (!(*(&((fpu_val_7_85 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_85, f11_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_85 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4c4fff:
                        long double fpu_val_7_88 = item_210_1;
                        long double fpu_val_6_81 = item_214_1;
                        long double fpu_val_5_24 = item_218;
                        long double fpu_val_7_90 = 1.0 / sqrtl(fpu_val_5_24 * fpu_val_5_24
                            + fpu_val_6_81 * fpu_val_6_81 + fpu_val_7_88 * fpu_val_7_88);
                        item_1a0 = item_218 * fpu_val_7_90;
                        item_19c_1 = item_19c_1 * fpu_val_7_90;
                        item_198_1 = item_198_1 * fpu_val_7_90;
                    }
                    else
                    {
                        long double fpu_val_7_86 = item_214_1;
                        long double f13_1 = 0.0f;
                        fpu_val_7_86 - f13_1;

                        if (!(*(&((fpu_val_7_86 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_86, f13_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_86 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c4fff;

                        long double fpu_val_7_87 = item_210_1;
                        long double f17_1 = 0.0f;
                        fpu_val_7_87 - f17_1;

                        if (!(*(&((fpu_val_7_87 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_87, f17_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_87 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c4fff;
                    }

                    float item_24c_1 = item_1fc_1 * item_210_1 - item_1f8_1 * item_214_1;
                    float item_194_1 = item_24c_1;
                    float item_248_1 = -((item_200_1 * item_210_1 - item_1f8_1 * item_218));
                    float item_244_1 = item_200_1 * item_214_1 - item_1fc_1 * item_218;
                    float item_234_1 = item_244_1 * item_19c_1 - item_248_1 * item_198_1;
                    float item_188_1 = item_234_1;
                    float item_230_1 = -((item_244_1 * item_1a0 - item_24c_1 * item_198_1));
                    float item_22c_1 = item_248_1 * item_1a0 - item_24c_1 * item_19c_1;
                    long double fpu_val_7_112 = item_24c_1;
                    long double f16_1 = 0.0f;
                    fpu_val_7_112 - f16_1;

                    if (!(*(&((fpu_val_7_112 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_112, f16_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_112 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4c5167:
                        long double fpu_val_7_115 = item_24c_1;
                        long double fpu_val_6_101 = item_248_1;
                        long double fpu_val_5_26 = item_244_1;
                        long double fpu_val_7_117 = 1.0 / sqrtl(fpu_val_5_26 * fpu_val_5_26
                            + fpu_val_6_101 * fpu_val_6_101 + fpu_val_7_115 * fpu_val_7_115);
                        float item_194_2 = item_24c_1 * fpu_val_7_117;
                        float item_190_2 = item_248_1 * fpu_val_7_117;
                        float item_18c_2 = item_244_1 * fpu_val_7_117;
                    }
                    else
                    {
                        long double fpu_val_7_113 = item_248_1;
                        long double f19_1 = 0.0f;
                        fpu_val_7_113 - f19_1;

                        if (!(*(&((fpu_val_7_113 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_113, f19_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_113 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c5167;

                        long double fpu_val_7_114 = item_244_1;
                        long double f23_1 = 0.0f;
                        fpu_val_7_114 - f23_1;

                        if (!(*(&((fpu_val_7_114 < f23_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_114, f23_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_114 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c5167;
                    }

                    long double fpu_val_7_119 = item_234_1;
                    long double f22_1 = 0.0f;
                    fpu_val_7_119 - f22_1;

                    if (!(*(&((fpu_val_7_119 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_119, f22_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_119 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4c51f3:
                        long double fpu_val_7_122 = item_22c_1;
                        long double fpu_val_6_109 = item_230_1;
                        long double fpu_val_5_28 = item_234_1;
                        long double fpu_val_7_124 = 1.0 / sqrtl(fpu_val_5_28 * fpu_val_5_28
                            + fpu_val_6_109 * fpu_val_6_109 + fpu_val_7_122 * fpu_val_7_122);
                        float item_188_2 = item_234_1 * fpu_val_7_124;
                        float item_184_2 = item_230_1 * fpu_val_7_124;
                        float item_180_2 = item_22c_1 * fpu_val_7_124;
                    }
                    else
                    {
                        long double fpu_val_7_120 = item_230_1;
                        long double f25_1 = 0.0f;
                        fpu_val_7_120 - f25_1;

                        if (!(*(&((fpu_val_7_120 < f25_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_120, f25_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_120 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c51f3;

                        long double fpu_val_7_121 = item_22c_1;
                        long double f27_1 = 0.0f;
                        fpu_val_7_121 - f27_1;

                        if (!(*(&((fpu_val_7_121 < f27_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_121, f27_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_121 == f27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c51f3;
                    }

                    memcpy(&item_218, &item_1a0, 0x28);
                    int32_t item_1f4_2 = 0;
                }

                long double fpu_val_7_126 = item_100;
                long double f10_1 = 0.0f;
                fpu_val_7_126 - f10_1;
                float item_1c8 = item_100;
                float item_f8;
                float item_1c0_1 = item_f8;
                float item_fc;
                float item_1c4_1 = item_fc;

                if (!(*(&((fpu_val_7_126 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_126, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_126 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c52cf:
                    long double fpu_val_7_129 = item_f8;
                    long double fpu_val_6_117 = item_fc;
                    long double fpu_val_5_30 = item_100;
                    long double fpu_val_7_131 = 1.0 / sqrtl(fpu_val_5_30 * fpu_val_5_30
                        + fpu_val_6_117 * fpu_val_6_117 + fpu_val_7_129 * fpu_val_7_129);
                    item_1c8 = item_100 * fpu_val_7_131;
                    item_1c4_1 = item_1c4_1 * fpu_val_7_131;
                    item_1c0_1 = item_1c0_1 * fpu_val_7_131;
                }
                else
                {
                    long double fpu_val_7_127 = item_fc;
                    long double f12_1 = 0.0f;
                    fpu_val_7_127 - f12_1;

                    if (!(*(&((fpu_val_7_127 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_127, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_127 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c52cf;

                    long double fpu_val_7_128 = item_f8;
                    long double f15_1 = 0.0f;
                    fpu_val_7_128 - f15_1;

                    if (!(*(&((fpu_val_7_128 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_128, f15_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_128 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c52cf;
                }

                float item_e4;
                float item_e0;
                float item_258_1 = item_f8 * item_e4 - item_fc * item_e0;
                float item_1bc_1 = item_258_1;
                float item_e8;
                float item_254_1 = -((item_e8 * item_f8 - item_100 * item_e0));
                float item_250_1 = item_e8 * item_fc - item_100 * item_e4;
                float item_240 = item_250_1 * item_1c4_1 - item_254_1 * item_1c0_1;
                float item_1b0_1 = item_240;
                float item_23c_1 = -((item_250_1 * item_1c8 - item_258_1 * item_1c0_1));
                float item_238_1 = item_254_1 * item_1c8 - item_258_1 * item_1c4_1;
                long double fpu_val_7_153 = item_258_1;
                long double f14_1 = 0.0f;
                fpu_val_7_153 - f14_1;

                if (!(*(&((fpu_val_7_153 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_153, f14_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_153 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c5467:
                    long double fpu_val_7_156 = item_258_1;
                    long double fpu_val_6_137 = item_254_1;
                    long double fpu_val_5_32 = item_250_1;
                    long double fpu_val_7_158 = 1.0 / sqrtl(fpu_val_5_32 * fpu_val_5_32
                        + fpu_val_6_137 * fpu_val_6_137 + fpu_val_7_156 * fpu_val_7_156);
                    float item_1bc_2 = item_258_1 * fpu_val_7_158;
                    float item_1b8_2 = item_254_1 * fpu_val_7_158;
                    float item_1b4_2 = item_250_1 * fpu_val_7_158;
                }
                else
                {
                    long double fpu_val_7_154 = item_254_1;
                    long double f18_1 = 0.0f;
                    fpu_val_7_154 - f18_1;

                    if (!(*(&((fpu_val_7_154 < f18_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_154, f18_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_154 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c5467;

                    long double fpu_val_7_155 = item_250_1;
                    long double f21_1 = 0.0f;
                    fpu_val_7_155 - f21_1;

                    if (!(*(&((fpu_val_7_155 < f21_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_155, f21_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_155 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c5467;
                }

                long double fpu_val_7_160 = item_240;
                long double f20_1 = 0.0f;
                fpu_val_7_160 - f20_1;

                if (!(*(&((fpu_val_7_160 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_160, f20_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_160 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4c54f3:
                    long double fpu_val_7_163 = item_238_1;
                    long double fpu_val_6_145 = item_23c_1;
                    long double fpu_val_5_34 = item_240;
                    long double fpu_val_7_165 = 1.0 / sqrtl(fpu_val_5_34 * fpu_val_5_34
                        + fpu_val_6_145 * fpu_val_6_145 + fpu_val_7_163 * fpu_val_7_163);
                    float item_1b0_2 = item_240 * fpu_val_7_165;
                    float item_1ac_2 = item_23c_1 * fpu_val_7_165;
                    float item_1a8_2 = item_238_1 * fpu_val_7_165;
                }
                else
                {
                    long double fpu_val_7_161 = item_23c_1;
                    long double f24_1 = 0.0f;
                    fpu_val_7_161 - f24_1;

                    if (!(*(&((fpu_val_7_161 < f24_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_161, f24_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_161 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c54f3;

                    long double fpu_val_7_162 = item_238_1;
                    long double f26_1 = 0.0f;
                    fpu_val_7_162 - f26_1;

                    if (!(*(&((fpu_val_7_162 < f26_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_162, f26_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_162 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c54f3;
                }

                memcpy(&item_100, &item_1c8, 0x28);
                int32_t item_dc_1 = 0;
                int32_t item_178_1 = 0;

                if (g_a4433c > 0)
                {
                    char* dest_1 = &g_b97e00;

                    while (true)
                    {
                        if (context_1)
                            goto label_4c55f2;

                        char* source_1 = dest_1;
                        char* data_26 = data_2;
                        int32_t data_28;

                        while (true)
                        {
                            char context_2 = *data_26;
                            char f28_1 = *source_1;
                            bool c_1 = context_2 < f28_1;

                            if (context_2 == f28_1)
                            {
                                if (!context_2)
                                {
                                    data_28 = 0;
                                    break;
                                }

                                context_2 = data_26[1];
                                char f31_1 = source_1[1];
                                c_1 = context_2 < f31_1;

                                if (context_2 == f31_1)
                                {
                                    data_26 = &data_26[2];
                                    source_1 = &source_1[2];

                                    if (context_2)
                                        continue;

                                    data_28 = 0;
                                    break;
                                }
                            }

                            data_28 = data_26 - data_26 + 1;
                            break;
                        }

                        if (data_28)
                            context_1 = &g_b97e00;
                        else
                        {
                            context_1 = dest_1;
                            char* item_174_2 = context_1;
                        }

                        dest_1 = &dest_1[0x28];
                        bool flag_4_1 = item_178_1 + 1 < g_a4433c;
                        item_178_1 += 1;

                        if (!flag_4_1)
                            break;
                    }

                    if (context_1)
                    {
                    label_4c55f2:
                        int32_t kind = *(param_2 + 0x68);
                        int32_t item_ac_1 = *(context_1 + 0x24);
                        int32_t kind_1 = kind;
                        kind = *(context_1 + 0x20);
                        int32_t item_b0_1 = param_3;
                        void* flags = &context_1[0x10];
                        struct status_msg* data_33 = QTask_HandleInput(context, kind, &flags);
                        int32_t temp_3 = *(param_2 + 0x68);
                        int32_t item_4_1 = *(context_1 + 0x24);
                        void* item_90 = &context_1[0x10];
                        int32_t item_8c_1 = temp_3;
                        int32_t item_8_1 = param_3;
                        uint32_t data_36 = DynObj_InsertHashItem_6();
                        int32_t temp_4 = 0;
                        temp_4 = data_33->head[7];
                        int32_t data_37 = *(((data_36 * 0x180 + temp_4) << 2) + &g_a96ae0);

                        if (data_37)
                            data_37(data_33, &item_90);

                        result = result_1 + 1;
                        result_1 = result;

                        if (result >= result_2)
                            break;

                        continue;
                    }
                }

                int32_t item_278_5 = *(param_2 + 0x6c) + 0x14;
                char* item_27c_4 = data_2;
                Error_Show("Magic object type "%s" not defined (Created from model "%s")");

                while (true)
                    /* nop */
            }
        }
    }

    return result;
}
