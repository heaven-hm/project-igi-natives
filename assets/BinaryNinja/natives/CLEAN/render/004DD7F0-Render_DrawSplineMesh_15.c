// IGI native provenance: Render_DrawSplineMesh_15 - 0x004DD7F0 - CFG score 80.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004DD7F0-Render_DrawSplineMesh_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawSplineMesh_15.h"
int32_t Render_DrawSplineMesh_15(void* context, int32_t param_2, int32_t param_3, float* param_4, float* param_5, float* param_6, float* param_7)

{
    float item_b24 = 3.40282347e+38.0f;
    float item_b20 = 3.40282347e+38.0f;
    float item_b1c = -3.40282347e+38.0f;
    float item_b18 = -3.40282347e+38.0f;
    int32_t item_b10 = 0;
    void* flagP = *(*(*(*(context + 0x6c) + (param_2 << 2)) + 0xc) + 0xc);
    int32_t temp_1 = *(flagP + 0x98);
    int32_t entity_1 = param_3 * 5;
    int32_t* context_val = temp_1 + (entity_1 << 2);
    int32_t* item_b14 = context_val;

    if (*(*(temp_1 + (entity_1 << 2) + 0x10) + g_a5e354 + 0x14c))
    {
        int32_t temp_3 = context_val[2] * 3;
        int32_t data_5 = *(flagP + 0x90);
        int32_t temp_4 = *(flagP + 0x94);
        int32_t dest_2 = *(data_5 + (temp_3 << 2) + 4) * 3;
        int32_t entity_4 = *(data_5 + (temp_3 << 2)) * 3;
        long double fpu_val_7_2 = *(temp_4 + (dest_2 << 2)) - *(temp_4 + (entity_4 << 2));
        float* entity_5 = temp_4 + (entity_4 << 2);
        int32_t data_8 = *(data_5 + (temp_3 << 2) + 8) * 3;
        long double fpu_val_6_2 = *(temp_4 + (dest_2 << 2) + 4) - entity_5[1];
        long double fpu_val_5_2 = *(temp_4 + (dest_2 << 2) + 8) - entity_5[2];
        void* data_9 = temp_4 + (data_8 << 2);
        float item_b60 = *(temp_4 + (data_8 << 2)) - *entity_5;
        float item_b5c_1 = *(data_9 + 4) - entity_5[1];
        long double fpu_val_4_6 = *(data_9 + 8) - entity_5[2];
        float item_b70 = fpu_val_4_6 * fpu_val_6_2 - item_b5c_1 * fpu_val_5_2;
        float item_b6c_1 = -((fpu_val_4_6 * fpu_val_7_2 - item_b60 * fpu_val_5_2));
        long double fpu_val_7_4 = fpu_val_7_2 * item_b5c_1 - item_b60 * fpu_val_6_2;
        float item_b4c =
            item_b70 * *(context + 0x70) + fpu_val_7_4 * *(context + 0x78) + item_b6c_1 * *(context + 0x74);
        long double fpu_val_6_9 = item_b70 * *(context + 0x7c);
        long double fpu_val_5_12 = fpu_val_7_4 * *(context + 0x84);
        float item_b40 = item_b4c;
        float item_b48_1 = fpu_val_6_9 + fpu_val_5_12 + item_b6c_1 * *(context + 0x80);
        float item_b3c_1 = item_b48_1;
        float item_b44_1 =
            item_b70 * *(context + 0x88) + fpu_val_7_4 * *(context + 0x90) + item_b6c_1 * *(context + 0x8c);
        long double fpu_val_7_8 = item_b4c;
        long double f1_1 = 0.0f;
        fpu_val_7_8 - f1_1;
        float item_b38_1 = item_b44_1;

        if (!(*(&((fpu_val_7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_4dd9aa:
            long double fpu_val_7_11 = item_b44_1;
            long double fpu_val_6_18 = item_b48_1;
            long double fpu_val_5_15 = item_b4c;
            long double fpu_val_7_13 =
                1.0 / sqrtl(fpu_val_5_15 * fpu_val_5_15 + fpu_val_6_18 * fpu_val_6_18 + fpu_val_7_11 * fpu_val_7_11);
            item_b40 = item_b4c * fpu_val_7_13;
            item_b3c_1 = item_b3c_1 * fpu_val_7_13;
            item_b38_1 = item_b38_1 * fpu_val_7_13;
        }
        else
        {
            long double fpu_val_7_9 = item_b48_1;
            long double f2_1 = 0.0f;
            fpu_val_7_9 - f2_1;

            if (!(*(&((fpu_val_7_9 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_9, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_9 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4dd9aa;

            long double fpu_val_7_10 = item_b44_1;
            long double f4_1 = 0.0f;
            fpu_val_7_10 - f4_1;

            if (!(*(&((fpu_val_7_10 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_10, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_10 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4dd9aa;
        }

        float item_b30_1 =
            entity_5[1] * *(context + 0x80) + entity_5[2] * *(context + 0x84) + *entity_5 * *(context + 0x7c);
        float item_b2c_1 =
            *(context + 0x88) * *entity_5 + *(context + 0x90) * entity_5[2] + *(context + 0x8c) * entity_5[1];
        double item_b00_1 = item_b30_1 + *(context + 0x28);
        long double fpu_val_7_20 = *(context + 0x70) * *entity_5 + *(context + 0x78) * entity_5[2]
            + *(context + 0x74) * entity_5[1] + *(context + 0x20) - g_bcab08;
        float item_b64_1 = fpu_val_7_20;
        long double fpu_val_6_43 = item_b00_1 - g_bcab10;
        float item_b50_1 = fpu_val_6_43;
        long double fpu_val_5_26 = item_b2c_1 + *(context + 0x30) - g_bcab18;
        float item_b54_1 = fpu_val_5_26;
        long double f3_1 = 0.0f;
        fpu_val_7_20 - f3_1;

        if (!(*(&((fpu_val_7_20 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_20, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_20 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
        {
        label_4ddae6:
            long double fpu_val_4_20 =
                1.0 / sqrtl(fpu_val_7_20 * fpu_val_7_20 + fpu_val_6_43 * fpu_val_6_43 + fpu_val_5_26 * fpu_val_5_26);
            fpu_val_7_20 = fpu_val_7_20 * fpu_val_4_20;
            fpu_val_6_43 = fpu_val_6_43 * fpu_val_4_20;
            fpu_val_5_26 = fpu_val_5_26 * fpu_val_4_20;
        }
        else
        {
            long double f5_1 = 0.0f;
            fpu_val_6_43 - f5_1;

            if (!(*(&((fpu_val_6_43 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_43, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_43 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                goto label_4ddae6;

            long double f7_1 = 0.0f;
            fpu_val_5_26 - f7_1;

            if (!(*(&((fpu_val_5_26 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_26, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_26 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                goto label_4ddae6;
        }

        long double fpu_val_7_23 = fpu_val_5_26 * item_b38_1 + fpu_val_6_43 * item_b3c_1 + fpu_val_7_20 * item_b40;
        long double f6_1 = 0.0f;
        fpu_val_7_23 - f6_1;
        float item_b34;
        long double fpu_val_4_34;
        long double f8_1;

        if (*(&((fpu_val_7_23 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_23, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_7_23 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double fpu_val_7_24 = item_b40;
            item_b70 = item_b40;
            item_b60 = item_b64_1;
            item_b70 = -(fpu_val_7_24);
            float item_b6c_3 = -(item_b3c_1);
            float item_b68_2 = -(item_b38_1);
            Sys_PopStack_10(&item_b34, &item_b60, &item_b70, &item_b40);
            long double fpu_val_7_31 = item_b54_1 - item_b2c_1;
            long double fpu_val_6_50 = item_b50_1 - item_b30_1;
            long double fpu_val_5_32 = item_b60 - item_b34;
            fpu_val_4_34 = fpu_val_5_32 * fpu_val_5_32 + fpu_val_6_50 * fpu_val_6_50 + fpu_val_7_31 * fpu_val_7_31;
            f8_1 = 167772.172f;
            fpu_val_4_34 - f8_1;
        }

        if (!(*(&((fpu_val_7_23 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_23, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_7_23 == f6_1 ? 1 : 0) << 0xe) + 1) & 1) || *(&(
            (fpu_val_4_34 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_34, f8_1) ? 1 : 0) << 0xa
            | (fpu_val_4_34 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            float item_b08_1 = *(context + 0x20) - g_bcab08;
            float item_b04_1 = *(context + 0x28) - g_bcab10;
            int32_t dest_4 = context_val[1];
            item_b00_1 = *(context + 0x30) - g_bcab18;

            if (dest_4 > 0)
            {
                void item_ae0;
                float* temp_9 = &item_ae0;
                int32_t item_b50_2 = dest_4;
                float* entity_9 = *(flagP + 0x94) + *context_val * 0xc;
                bool flag_0_1;

                do
                {
                    item_b60 = entity_9[1] * *(context + 0x74) + *(context + 0x78) * entity_9[2]
                        + *(context + 0x70) * *entity_9;
                    long double fpu_val_7_44 = entity_9[1] * *(context + 0x80);
                    long double fpu_val_6_57 = *(context + 0x7c) * *entity_9;
                    item_b34 = item_b60;
                    long double fpu_val_7_52 = item_b60 + item_b08_1;
                    long double fpu_val_6_65 =
                        fpu_val_7_44 + fpu_val_6_57 + entity_9[2] * *(context + 0x84) + item_b04_1;
                    long double fpu_val_5_35 = entity_9[1] * *(context + 0x8c) + *(context + 0x90) * entity_9[2]
                        + *(context + 0x88) * *entity_9 + item_b00_1;
                    item_b70 =
                        fpu_val_5_35 * g_bcaae8 + fpu_val_6_65 * g_bcaae4 + fpu_val_7_52 * g_bcaae0;
                    long double fpu_val_4_40 = fpu_val_5_35 * g_bcaaf4;
                    long double fpu_val_3_21 = fpu_val_6_65 * g_bcaaf0;
                    temp_9[-4] = item_b70;
                    float item_b6c_4 = fpu_val_4_40 + fpu_val_3_21 + fpu_val_7_52 * g_bcaaec;
                    long double fpu_val_5_36 = fpu_val_5_35 * g_bcab00;
                    long double fpu_val_5_38 = fpu_val_6_65 * g_bcaafc;
                    temp_9[-3] = item_b6c_4;
                    float item_b68_3 = fpu_val_5_36 + fpu_val_5_38 + fpu_val_7_52 * g_bcaaf8;
                    long double fpu_val_7_55 = item_b68_3;
                    long double f9_1 = 0.040959999f;
                    fpu_val_7_55 - f9_1;
                    temp_9[-2] = item_b68_3;

                    if (*(&((fpu_val_7_55 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_55, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_55 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                        temp_9[2] = 0x10;
                    else
                    {
                        int32_t flagP1 = 1;
                        item_b10 = 1;
                        int32_t item_b54_2 = 1;
                        float item_b64_2 = 1.0f / item_b68_3;
                        long double fpu_val_7_59 = item_b64_2 * item_b70;
                        temp_9[1] = item_b64_2;
                        long double fpu_val_7_61 = fpu_val_7_59 * g_bcab28 + g_bcab30;
                        temp_9[-1] = fpu_val_7_61;
                        long double fpu_val_6_73 = item_b64_2 * item_b6c_4 * g_bcab2c + g_bcab34;
                        float item_b28_2 = fpu_val_6_73;
                        *temp_9 = fpu_val_6_73;
                        long double f10_1 = g_bcabd0;
                        fpu_val_7_61 - f10_1;

                        if (!(*(&((fpu_val_7_61 < f10_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_61, f10_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_61 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            item_b54_2 = 0;

                        long double f12_1 = g_bcabd4;
                        fpu_val_6_73 - f12_1;
                        int32_t dest_8;

                        dest_8 = !(*(&((fpu_val_6_73 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_73, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_73 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                        long double f13_1 = g_bcabd8;
                        fpu_val_7_61 - f13_1;

                        if (*(&((fpu_val_7_61 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_61, f13_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_61 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            flagP1 = 0;

                        long double fpu_val_7_62 = item_b28_2;
                        long double f15_1 = g_bcabdc;
                        fpu_val_7_62 - f15_1;
                        int32_t data_25;

                        data_25 = *(&((fpu_val_7_62 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_62, f15_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_62 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        temp_9[2] = (((data_25 * 2) | flagP1) << 1 | dest_8) << 1 | item_b54_2;
                    }

                    entity_9 = &entity_9[3];
                    temp_9 = &temp_9[7];
                    flag_0_1 = item_b50_2 != 1;
                    item_b50_2 -= 1;
                } while (flag_0_1);

                if (item_b10)
                {
                    item_b4c = &item_b24;
                    int32_t* item_b48_2 = &item_b1c;
                    int32_t flagP2 = 0;

                    if (context_val[3] > 0)
                    {
                        while (true)
                        {
                            int32_t context_1 = *context_val;
                            int32_t item_b84_2 = 0x3d27c5ac;
                            int32_t* temp_11 = *(flagP + 0x90) + (context_val[2] + flagP2) * 0xc;
                            float* item_b88_2 = &item_b4c;
                            int32_t data_42 = temp_11[1] - context_1;
                            void item_bc0;
                            void item_ba4;
                            memcpy(&item_ba4,
                                &item_bc0 + (temp_11[2] - context_1) * 0x1c + 0xd0, 0x1c);
                            int32_t data_44 = *temp_11 - context_1;
                            void item_bdc;
                            memcpy(&item_bc0, &item_bdc + data_42 * 0x1c + 0xec, 0x1c);
                            memcpy(&item_bdc, &item_bdc + data_44 * 0x1c + 0xec, 0x1c);
                            Render_SetupLighting_13();
                            flagP2 += 1;

                            if (flagP2 >= item_b14[3])
                                break;

                            context_val = item_b14;
                        }
                    }

                    long double fpu_val_7_63 = item_b24;
                    long double f14_1 = *param_5;
                    fpu_val_7_63 - f14_1;

                    if (*(&((fpu_val_7_63 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_63, f14_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_63 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_64 = item_b20;
                        long double f16_1 = param_5[1];
                        fpu_val_7_64 - f16_1;

                        if (*(&((fpu_val_7_64 < f16_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_64, f16_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_64 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double fpu_val_7_65 = item_b1c;
                            long double f17_1 = *param_4;
                            fpu_val_7_65 - f17_1;

                            if (!(*(&((fpu_val_7_65 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_65, f17_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_65 == f17_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double fpu_val_7_66 = item_b18;
                                long double f18_1 = param_4[1];
                                fpu_val_7_66 - f18_1;

                                if (!(*(&((fpu_val_7_66 < f18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_66, f18_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_66 == f18_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    *param_6 = item_b24;
                                    float entity_18 = item_b1c;
                                    param_6[1] = item_b20;
                                    *param_7 = entity_18;
                                    param_7[1] = item_b18;
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
