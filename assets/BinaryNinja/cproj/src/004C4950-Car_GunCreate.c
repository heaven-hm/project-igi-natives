#include "gi_platform.h"
#include "004C4950-Car_GunCreate.h"
int32_t* Car_GunCreate(void* a1, void* a2, int32_t a3)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a2 + 0x6c));

    if (result)
    {
        result = Render_DrawSplineMesh_2(*result);
        int32_t* result_2 = result;
        int32_t* result_1 = nullptr;

        if (result > 0)
        {
            while (true)
            {
                char* ctxB1 = nullptr;
                int32_t v_174_1 = 0;
                char* valA2 = Render_DrawBoneMesh_2(*(*(int32_t*)(uintptr_t)(a2 + 0x6c)), result_1);
                double v_118_1 = *(valA2 + 0x10);
                double v_110_1 = *(valA2 + 0x14);
                double v_108_1 = *(valA2 + 0x18);
                long double x87_r7_4 = *(valA2 + 0x10);
                double v_130 = x87_r7_4;
                long double x87_r6_1 = *(valA2 + 0x14);
                double v_128 = x87_r6_1;
                long double x87_r5_1 = *(valA2 + 0x18);
                double v_120_1 = x87_r5_1;
                double v_a8 = (*(int32_t*)(uintptr_t)(a2 + 0x74)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a2 + 0x78)) * x87_r5_1
                    + (*(int32_t*)(uintptr_t)(a2 + 0x70)) * x87_r7_4;
                double v_a0_1 = (*(int32_t*)(uintptr_t)(a2 + 0x80)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a2 + 0x84)) * x87_r5_1
                    + (*(int32_t*)(uintptr_t)(a2 + 0x7c)) * x87_r7_4;
                double v_98_1 = (*(int32_t*)(uintptr_t)(a2 + 0x90)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a2 + 0x88)) * x87_r7_4
                    + (*(int32_t*)(uintptr_t)(a2 + 0x8c)) * x87_r6_1;
                memcpy(&v_130, &v_a8, 0x18);
                v_130 = v_a8 + (*(int32_t*)(uintptr_t)(a2 + 0x20));
                v_128 = v_128 + (*(int32_t*)(uintptr_t)(a2 + 0x28));
                double v_120_2 = v_120_1 + (*(int32_t*)(uintptr_t)(a2 + 0x30));
                long double x87_r7_12 = *(valA2 + 0x20);
                long double x87_r6_3 = *(valA2 + 0x2c);
                long double x87_r5_3 = *(valA2 + 0x38);
                float valA3 = *(valA2 + 0x28);
                float objC2 = *(valA2 + 0x1c);
                float objC3 = *(valA2 + 0x34);
                float v_148 = x87_r5_3 * valA3 - x87_r6_3 * objC3;
                float v_1f0 = objC2;
                float v_1e8_1 = objC3;
                float v_1ec_1 = valA3;
                float v_144_1 = -((x87_r5_3 * objC2 - x87_r7_12 * objC3));
                long double x87_r7_14 = x87_r6_3 * objC2 - x87_r7_12 * valA3;
                long double x87_r6_7 = objC2;
                long double f1_1 = 0.0f;
                x87_r6_7 - f1_1;

                if (!(*(&((x87_r6_7 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_7, f1_1) ? 1 : 0) << 0xa
                    | (x87_r6_7 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
    label_4c4b68: ;
                    long double x87_r6_10 = objC3;
                    long double x87_r5_7 = valA3;
                    long double x87_r4_18 = objC2;
                    long double x87_r6_12 = 1.0 /
                        sqrtl(x87_r4_18 * x87_r4_18 + x87_r5_7 * x87_r5_7 + x87_r6_10 * x87_r6_10);
                    v_1f0 = objC2 * x87_r6_12;
                    v_1ec_1 = v_1ec_1 * x87_r6_12;
                    v_1e8_1 = v_1e8_1 * x87_r6_12;
                }
                else
                {
                    long double x87_r6_8 = valA3;
                    long double f2_1 = 0.0f;
                    x87_r6_8 - f2_1;

                    if (!(*(&((x87_r6_8 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_8, f2_1) ? 1 : 0) << 0xa
                            | (x87_r6_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4c4b68;

                    long double x87_r6_9 = objC3;
                    long double f4_1 = 0.0f;
                    x87_r6_9 - f4_1;

                    if (!(*(&((x87_r6_9 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_9, f4_1) ? 1 : 0) << 0xa
                            | (x87_r6_9 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4c4b68;
                }

                float v_264_1 = v_144_1 * objC3 - x87_r7_14 * valA3;
                float v_1e4_1 = v_264_1;
                float v_260_1 = -((v_148 * objC3 - x87_r7_14 * objC2));
                float v_25c_1 = v_148 * valA3 - v_144_1 * objC2;
                float v_228_1 = v_25c_1 * v_1ec_1 - v_260_1 * v_1e8_1;
                float v_1d8_1 = v_228_1;
                float v_224_1 = -((v_25c_1 * v_1f0 - v_264_1 * v_1e8_1));
                float v_220_1 = v_260_1 * v_1f0 - v_264_1 * v_1ec_1;
                long double x87_r7_31 = v_264_1;
                long double f3_1 = 0.0f;
                x87_r7_31 - f3_1;

                if (!(*(&((x87_r7_31 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
    label_4c4cf6: ;
                    long double x87_r7_34 = v_264_1;
                    long double x87_r6_29 = v_260_1;
                    long double x87_r5_17 = v_25c_1;
                    long double x87_r7_40 = 1.0 / sqrtl(x87_r7_34 * x87_r7_34
                        + x87_r5_17 * x87_r5_17 + x87_r6_29 * x87_r6_29);
                    float v_1e4_2 = v_264_1 * x87_r7_40;
                    float v_1e0_2 = v_260_1 * x87_r7_40;
                    float v_1dc_2 = v_25c_1 * x87_r7_40;
                }
                else
                {
                    long double x87_r7_32 = v_260_1;
                    long double f5_1 = 0.0f;
                    x87_r7_32 - f5_1;

                    if (!(*(&((x87_r7_32 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_32, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_32 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4cf6;

                    long double x87_r7_33 = v_25c_1;
                    long double f7_1 = 0.0f;
                    x87_r7_33 - f7_1;

                    if (!(*(&((x87_r7_33 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_33, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_33 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4cf6;
                }

                long double x87_r7_42 = v_228_1;
                long double f6_1 = 0.0f;
                x87_r7_42 - f6_1;

                if (!(*(&((x87_r7_42 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_42, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_42 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
    label_4c4d84: ;
                    long double x87_r7_45 = v_220_1;
                    long double x87_r6_37 = v_224_1;
                    long double x87_r5_22 = v_228_1;
                    long double x87_r7_47 = 1.0 / sqrtl(x87_r5_22 * x87_r5_22
                        + x87_r6_37 * x87_r6_37 + x87_r7_45 * x87_r7_45);
                    float v_1d8_2 = v_228_1 * x87_r7_47;
                    float v_1d4_2 = v_224_1 * x87_r7_47;
                    float v_1d0_2 = v_220_1 * x87_r7_47;
                }
                else
                {
                    long double x87_r7_43 = v_224_1;
                    long double f8_1 = 0.0f;
                    x87_r7_43 - f8_1;

                    if (!(*(&((x87_r7_43 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_43, f8_1) ? 1 : 0) << 0xa
                            | (x87_r7_43 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4d84;

                    long double x87_r7_44 = v_220_1;
                    long double f9_1 = 0.0f;
                    x87_r7_44 - f9_1;

                    if (!(*(&((x87_r7_44 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_44, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_44 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c4d84;
                }

                float v_d8;
                memcpy(&v_d8, &v_1f0, 0x28);
                int32_t v_b4_1 = 0;
                float v_cc;
                float v_c0;
                float v_218 =
                    v_cc * (*(int32_t*)(uintptr_t)(a2 + 0x74)) + v_c0 * (*(int32_t*)(uintptr_t)(a2 + 0x78)) + v_d8 * (*(int32_t*)(uintptr_t)(a2 + 0x70));
                float v_d4;
                float v_c8;
                float v_bc;
                float v_214_1 =
                    v_c8 * (*(int32_t*)(uintptr_t)(a2 + 0x74)) + v_bc * (*(int32_t*)(uintptr_t)(a2 + 0x78)) + v_d4 * (*(int32_t*)(uintptr_t)(a2 + 0x70));
                float v_d0;
                float v_c4;
                float v_b8;
                float v_210_1 =
                    v_c4 * (*(int32_t*)(uintptr_t)(a2 + 0x74)) + v_b8 * (*(int32_t*)(uintptr_t)(a2 + 0x78)) + v_d0 * (*(int32_t*)(uintptr_t)(a2 + 0x70));
                float v_20c_1 =
                    v_cc * (*(int32_t*)(uintptr_t)(a2 + 0x80)) + v_c0 * (*(int32_t*)(uintptr_t)(a2 + 0x84)) + v_d8 * (*(int32_t*)(uintptr_t)(a2 + 0x7c));
                float v_208_1 =
                    v_c8 * (*(int32_t*)(uintptr_t)(a2 + 0x80)) + v_bc * (*(int32_t*)(uintptr_t)(a2 + 0x84)) + v_d4 * (*(int32_t*)(uintptr_t)(a2 + 0x7c));
                float v_204_1 =
                    v_c4 * (*(int32_t*)(uintptr_t)(a2 + 0x80)) + v_b8 * (*(int32_t*)(uintptr_t)(a2 + 0x84)) + v_d0 * (*(int32_t*)(uintptr_t)(a2 + 0x7c));
                float v_200_1 =
                    v_c0 * (*(int32_t*)(uintptr_t)(a2 + 0x90)) + v_d8 * (*(int32_t*)(uintptr_t)(a2 + 0x88)) + v_cc * (*(int32_t*)(uintptr_t)(a2 + 0x8c));
                int32_t valA12 = (*(int32_t*)(uintptr_t)(a2 + 0x94)) + 1;
                int32_t v_1f4_1 = valA12;
                float v_1fc_1 =
                    v_bc * (*(int32_t*)(uintptr_t)(a2 + 0x90)) + v_d4 * (*(int32_t*)(uintptr_t)(a2 + 0x88)) + v_c8 * (*(int32_t*)(uintptr_t)(a2 + 0x8c));
                float v_1f8_1 =
                    v_b8 * (*(int32_t*)(uintptr_t)(a2 + 0x90)) + v_d0 * (*(int32_t*)(uintptr_t)(a2 + 0x88)) + v_c4 * (*(int32_t*)(uintptr_t)(a2 + 0x8c));
                float v_100;
                memcpy(&v_100, &v_218, 0x28);

                if (valA12 > 0x3e8)
                {
                    long double x87_r7_85 = v_218;
                    long double f11_1 = 0.0f;
                    x87_r7_85 - f11_1;
                    float v_19c_1 = v_214_1;
                    float v_1a0 = v_218;
                    float v_198_1 = v_210_1;

                    if (!(*(&((x87_r7_85 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_85, f11_1) ? 1 : 0) << 0xa
                        | (x87_r7_85 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
    label_4c4fff: ;
                        long double x87_r7_88 = v_210_1;
                        long double x87_r6_81 = v_214_1;
                        long double x87_r5_24 = v_218;
                        long double x87_r7_90 = 1.0 / sqrtl(x87_r5_24 * x87_r5_24
                            + x87_r6_81 * x87_r6_81 + x87_r7_88 * x87_r7_88);
                        v_1a0 = v_218 * x87_r7_90;
                        v_19c_1 = v_19c_1 * x87_r7_90;
                        v_198_1 = v_198_1 * x87_r7_90;
                    }
                    else
                    {
                        long double x87_r7_86 = v_214_1;
                        long double f13_1 = 0.0f;
                        x87_r7_86 - f13_1;

                        if (!(*(&((x87_r7_86 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_86, f13_1) ? 1 : 0) << 0xa
                                | (x87_r7_86 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c4fff;

                        long double x87_r7_87 = v_210_1;
                        long double f17_1 = 0.0f;
                        x87_r7_87 - f17_1;

                        if (!(*(&((x87_r7_87 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_87, f17_1) ? 1 : 0) << 0xa
                                | (x87_r7_87 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c4fff;
                    }

                    float v_24c_1 = v_1fc_1 * v_210_1 - v_1f8_1 * v_214_1;
                    float v_194_1 = v_24c_1;
                    float v_248_1 = -((v_200_1 * v_210_1 - v_1f8_1 * v_218));
                    float v_244_1 = v_200_1 * v_214_1 - v_1fc_1 * v_218;
                    float v_234_1 = v_244_1 * v_19c_1 - v_248_1 * v_198_1;
                    float v_188_1 = v_234_1;
                    float v_230_1 = -((v_244_1 * v_1a0 - v_24c_1 * v_198_1));
                    float v_22c_1 = v_248_1 * v_1a0 - v_24c_1 * v_19c_1;
                    long double x87_r7_112 = v_24c_1;
                    long double f16_1 = 0.0f;
                    x87_r7_112 - f16_1;

                    if (!(*(&((x87_r7_112 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_112, f16_1) ? 1 : 0) << 0xa
                        | (x87_r7_112 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
    label_4c5167: ;
                        long double x87_r7_115 = v_24c_1;
                        long double x87_r6_101 = v_248_1;
                        long double x87_r5_26 = v_244_1;
                        long double x87_r7_117 = 1.0 / sqrtl(x87_r5_26 * x87_r5_26
                            + x87_r6_101 * x87_r6_101 + x87_r7_115 * x87_r7_115);
                        float v_194_2 = v_24c_1 * x87_r7_117;
                        float v_190_2 = v_248_1 * x87_r7_117;
                        float v_18c_2 = v_244_1 * x87_r7_117;
                    }
                    else
                    {
                        long double x87_r7_113 = v_248_1;
                        long double f19_1 = 0.0f;
                        x87_r7_113 - f19_1;

                        if (!(*(&((x87_r7_113 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_113, f19_1) ? 1 : 0) << 0xa
                                | (x87_r7_113 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c5167;

                        long double x87_r7_114 = v_244_1;
                        long double f23_1 = 0.0f;
                        x87_r7_114 - f23_1;

                        if (!(*(&((x87_r7_114 < f23_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_114, f23_1) ? 1 : 0) << 0xa
                                | (x87_r7_114 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c5167;
                    }

                    long double x87_r7_119 = v_234_1;
                    long double f22_1 = 0.0f;
                    x87_r7_119 - f22_1;

                    if (!(*(&((x87_r7_119 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_119, f22_1) ? 1 : 0) << 0xa
                        | (x87_r7_119 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
    label_4c51f3: ;
                        long double x87_r7_122 = v_22c_1;
                        long double x87_r6_109 = v_230_1;
                        long double x87_r5_28 = v_234_1;
                        long double x87_r7_124 = 1.0 / sqrtl(x87_r5_28 * x87_r5_28
                            + x87_r6_109 * x87_r6_109 + x87_r7_122 * x87_r7_122);
                        float v_188_2 = v_234_1 * x87_r7_124;
                        float v_184_2 = v_230_1 * x87_r7_124;
                        float v_180_2 = v_22c_1 * x87_r7_124;
                    }
                    else
                    {
                        long double x87_r7_120 = v_230_1;
                        long double f25_1 = 0.0f;
                        x87_r7_120 - f25_1;

                        if (!(*(&((x87_r7_120 < f25_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_120, f25_1) ? 1 : 0) << 0xa
                                | (x87_r7_120 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c51f3;

                        long double x87_r7_121 = v_22c_1;
                        long double f27_1 = 0.0f;
                        x87_r7_121 - f27_1;

                        if (!(*(&((x87_r7_121 < f27_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_121, f27_1) ? 1 : 0) << 0xa
                                | (x87_r7_121 == f27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4c51f3;
                    }

                    memcpy(&v_218, &v_1a0, 0x28);
                    int32_t v_1f4_2 = 0;
                }

                long double x87_r7_126 = v_100;
                long double f10_1 = 0.0f;
                x87_r7_126 - f10_1;
                float v_1c8 = v_100;
                float v_f8;
                float v_1c0_1 = v_f8;
                float v_fc;
                float v_1c4_1 = v_fc;

                if (!(*(&((x87_r7_126 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_126, f10_1) ? 1 : 0) << 0xa
                    | (x87_r7_126 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
    label_4c52cf: ;
                    long double x87_r7_129 = v_f8;
                    long double x87_r6_117 = v_fc;
                    long double x87_r5_30 = v_100;
                    long double x87_r7_131 = 1.0 / sqrtl(x87_r5_30 * x87_r5_30
                        + x87_r6_117 * x87_r6_117 + x87_r7_129 * x87_r7_129);
                    v_1c8 = v_100 * x87_r7_131;
                    v_1c4_1 = v_1c4_1 * x87_r7_131;
                    v_1c0_1 = v_1c0_1 * x87_r7_131;
                }
                else
                {
                    long double x87_r7_127 = v_fc;
                    long double f12_1 = 0.0f;
                    x87_r7_127 - f12_1;

                    if (!(*(&((x87_r7_127 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_127, f12_1) ? 1 : 0) << 0xa
                            | (x87_r7_127 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c52cf;

                    long double x87_r7_128 = v_f8;
                    long double f15_1 = 0.0f;
                    x87_r7_128 - f15_1;

                    if (!(*(&((x87_r7_128 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_128, f15_1) ? 1 : 0) << 0xa
                            | (x87_r7_128 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c52cf;
                }

                float v_e4;
                float v_e0;
                float v_258_1 = v_f8 * v_e4 - v_fc * v_e0;
                float v_1bc_1 = v_258_1;
                float v_e8;
                float v_254_1 = -((v_e8 * v_f8 - v_100 * v_e0));
                float v_250_1 = v_e8 * v_fc - v_100 * v_e4;
                float v_240 = v_250_1 * v_1c4_1 - v_254_1 * v_1c0_1;
                float v_1b0_1 = v_240;
                float v_23c_1 = -((v_250_1 * v_1c8 - v_258_1 * v_1c0_1));
                float v_238_1 = v_254_1 * v_1c8 - v_258_1 * v_1c4_1;
                long double x87_r7_153 = v_258_1;
                long double f14_1 = 0.0f;
                x87_r7_153 - f14_1;

                if (!(*(&((x87_r7_153 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_153, f14_1) ? 1 : 0) << 0xa
                    | (x87_r7_153 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
    label_4c5467: ;
                    long double x87_r7_156 = v_258_1;
                    long double x87_r6_137 = v_254_1;
                    long double x87_r5_32 = v_250_1;
                    long double x87_r7_158 = 1.0 / sqrtl(x87_r5_32 * x87_r5_32
                        + x87_r6_137 * x87_r6_137 + x87_r7_156 * x87_r7_156);
                    float v_1bc_2 = v_258_1 * x87_r7_158;
                    float v_1b8_2 = v_254_1 * x87_r7_158;
                    float v_1b4_2 = v_250_1 * x87_r7_158;
                }
                else
                {
                    long double x87_r7_154 = v_254_1;
                    long double f18_1 = 0.0f;
                    x87_r7_154 - f18_1;

                    if (!(*(&((x87_r7_154 < f18_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_154, f18_1) ? 1 : 0) << 0xa
                            | (x87_r7_154 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c5467;

                    long double x87_r7_155 = v_250_1;
                    long double f21_1 = 0.0f;
                    x87_r7_155 - f21_1;

                    if (!(*(&((x87_r7_155 < f21_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_155, f21_1) ? 1 : 0) << 0xa
                            | (x87_r7_155 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c5467;
                }

                long double x87_r7_160 = v_240;
                long double f20_1 = 0.0f;
                x87_r7_160 - f20_1;

                if (!(*(&((x87_r7_160 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_160, f20_1) ? 1 : 0) << 0xa
                    | (x87_r7_160 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
    label_4c54f3: ;
                    long double x87_r7_163 = v_238_1;
                    long double x87_r6_145 = v_23c_1;
                    long double x87_r5_34 = v_240;
                    long double x87_r7_165 = 1.0 / sqrtl(x87_r5_34 * x87_r5_34
                        + x87_r6_145 * x87_r6_145 + x87_r7_163 * x87_r7_163);
                    float v_1b0_2 = v_240 * x87_r7_165;
                    float v_1ac_2 = v_23c_1 * x87_r7_165;
                    float v_1a8_2 = v_238_1 * x87_r7_165;
                }
                else
                {
                    long double x87_r7_161 = v_23c_1;
                    long double f24_1 = 0.0f;
                    x87_r7_161 - f24_1;

                    if (!(*(&((x87_r7_161 < f24_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_161, f24_1) ? 1 : 0) << 0xa
                            | (x87_r7_161 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c54f3;

                    long double x87_r7_162 = v_238_1;
                    long double f26_1 = 0.0f;
                    x87_r7_162 - f26_1;

                    if (!(*(&((x87_r7_162 < f26_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_162, f26_1) ? 1 : 0) << 0xa
                            | (x87_r7_162 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4c54f3;
                }

                memcpy(&v_100, &v_1c8, 0x28);
                int32_t v_dc_1 = 0;
                int32_t v_178_1 = 0;

                if (g_a4433c > 0)
                {
                    char* dstD1 = &g_b97e00;

                    while (true)
                    {
                        if (ctxB1)
                            goto label_4c55f2;

                        char* srcS1 = dstD1;
                        char* valA26 = valA2;
                        int32_t valA28;

                        while (true)
                        {
                            char ctxB2 = *valA26;
                            char f28_1 = *srcS1;
                            bool c_1 = ctxB2 < f28_1;

                            if (ctxB2 == f28_1)
                            {
                                if (!ctxB2)
                                {
                                    valA28 = 0;
                                    break;
                                }

                                ctxB2 = valA26[1];
                                char f31_1 = srcS1[1];
                                c_1 = ctxB2 < f31_1;

                                if (ctxB2 == f31_1)
                                {
                                    valA26 = &valA26[2];
                                    srcS1 = &srcS1[2];

                                    if (ctxB2)
                                        continue;

                                    valA28 = 0;
                                    break;
                                }
                            }

                            valA28 = valA26 - valA26 + 1;
                            break;
                        }

                        if (valA28)
                            ctxB1 = &g_b97e00;
                        else
                        {
                            ctxB1 = dstD1;
                            char* v_174_2 = ctxB1;
                        }

                        dstD1 = &dstD1[0x28];
                        bool cond_4_1 = v_178_1 + 1 < g_a4433c;
                        v_178_1 += 1;

                        if (!cond_4_1)
                            break;
                    }

                    if (ctxB1)
                    {
    label_4c55f2: ;
                        int32_t kind = (*(int32_t*)(uintptr_t)(a2 + 0x68));
                        int32_t v_ac_1 = *(ctxB1 + 0x24);
                        int32_t kind_1 = kind;
                        kind = *(ctxB1 + 0x20);
                        int32_t v_b0_1 = a3;
                        void* flags = &ctxB1[0x10];
                        struct status_msg* valA33 = QTask_HandleInput(a1, kind, &flags);
                        int32_t tmpD3 = (*(int32_t*)(uintptr_t)(a2 + 0x68));
                        int32_t v_4_1 = *(ctxB1 + 0x24);
                        void* v_90 = &ctxB1[0x10];
                        int32_t v_8c_1 = tmpD3;
                        int32_t v_8_1 = a3;
                        uint32_t valA36 = DynObj_InsertHashItem_6();
                        int32_t tmpD4 = 0;
                        tmpD4 = valA33->head[7];
                        int32_t valA37 = *(((valA36 * 0x180 + tmpD4) << 2) + &g_a96ae0);

                        if (valA37)
                            valA37(valA33, &v_90);

                        result = result_1 + 1;
                        result_1 = result;

                        if (result >= result_2)
                            break;

                        continue;
                    }
                }

                int32_t v_278_5 = (*(int32_t*)(uintptr_t)(a2 + 0x6c)) + 0x14;
                char* v_27c_4 = valA2;
                Error_Show("Magic object type "%s" not defined (Created from model "%s")");

                while (true)
                    /* nop */
            }
        }
    }

    return result;
}
