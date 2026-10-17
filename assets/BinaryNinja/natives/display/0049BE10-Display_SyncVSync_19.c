// IGI native provenance: Display_SyncVSync_19 - 0x0049BE10 - CFG score 80.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0049BE10-Display_SyncVSync_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_19.h"
int32_t* Display_SyncVSync_19(void* context, void* param_2)

{
    float data_val = g_bcadc0;
    int32_t* data_1 = *(context + 0x6c);

    if (data_1)
    {
        float* data_2 = *(context + 0x5a0);
        long double fpu_val_7_2 = *(context + 0x20) - g_bcab08;
        void* dest_1 = *(*(*data_1 + 0xc) + 0xc);
        float item_70_1;
        float item_58;
        float item_50_2;

        if (!data_2)
        {
            long double fpu_val_6_14 = *(context + 0x28) - g_bcab10;
            long double fpu_val_5_14 = *(context + 0x30) - g_bcab18;
            long double fpu_val_4_6 = g_bcaaf4 * fpu_val_5_14;
            long double fpu_val_3_6 = g_bcaaf0 * fpu_val_6_14;
            item_58 = g_bcaae8 * fpu_val_5_14 + g_bcaae4 * fpu_val_6_14 + g_bcaae0 * fpu_val_7_2;
            item_70_1 = *(context + 0x44);
            float item_54_4 = fpu_val_4_6 + fpu_val_3_6 + g_bcaaec * fpu_val_7_2;
            item_50_2 = g_bcab00 * fpu_val_5_14 + g_bcaafc * fpu_val_6_14 + g_bcaaf8 * fpu_val_7_2;
        }
        else
        {
            item_58 = fpu_val_7_2;
            float item_54_1 = *(context + 0x28) - g_bcab10;
            float item_50_1 = *(context + 0x30) - g_bcab18;
            item_58 = item_58 + *data_2;
            float item_54_2 = item_54_1 + data_2[1];
            long double fpu_val_7_12 = item_50_1 + data_2[2];
            float item_54_3 =
                g_bcaaf4 * fpu_val_7_12 + g_bcaaf0 * item_54_2 + g_bcaaec * item_58;
            long double fpu_val_6_11 = g_bcab00 * fpu_val_7_12 + g_bcaafc * item_54_2;
            long double fpu_val_5_12 = g_bcaaf8 * item_58;
            item_58 = g_bcaae8 * fpu_val_7_12 + g_bcaae4 * item_54_2 + g_bcaae0 * item_58;
            item_50_2 = fpu_val_6_11 + fpu_val_5_12;
            item_70_1 = data_2[3];
        }

        data_1 = Render_DrawBoneMesh(&item_58, item_70_1, 0);

        if (!data_1)
        {
            long double fpu_val_7_16 = item_50_2 - item_70_1;
            long double f1_1 = *(param_2 + 8);
            fpu_val_7_16 - f1_1;
            data_1 = (fpu_val_7_16 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_16, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_16 == f1_1 ? 1 : 0) << 0xe | 0x3800;

            if (*(&data_1 + 1) & 0x41)
            {
                data_1 = *(dest_1 + 0x20);

                if (!data_1)
                {
                    void* temp_5 = *(dest_1 + 0x24);
                    char context_val = *(context + 0x5b4);
                    float item_74 = *(param_2 + 8);
                    float* entity_7 = *(temp_5 + 0x10);
                    void* item_5c = temp_5;
                    long double fpu_val_6_17 = *(context + 0x100);
                    int32_t* data_6 = &g_723518;
                    float item_48;
                    float item_44;

                    if (!context_val)
                    {
                        char data_7 = *(context + 0x5b5);
                        int32_t item_70_2 = 1.0f / (fpu_val_6_17 - *(context + 0xfc));
                        long double fpu_val_6_27;

                        if (!data_7)
                            fpu_val_6_27 = *(context + 0xfc);
                        else
                            fpu_val_6_27 = *(context + 0x100);

                        long double fpu_val_5_19 = *(context + 0x59c) * item_70_2;

                        if (data_7)
                            fpu_val_5_19 = -(fpu_val_5_19);

                        int32_t i_4 = 0;

                        if (*(temp_5 + 0xc) > 0)
                        {
                            void* context_4 = &g_723520;
                            int32_t i;

                            do
                            {
                                long double fpu_val_4_19 = (-(fpu_val_6_27) + *entity_7) * fpu_val_5_19;
                                item_70_2 = fpu_val_4_19;
                                int32_t temp_6 = item_70_2;
                                item_70_2 = temp_6;

                                if (temp_6 == *(context + 0x59c))
                                {
                                    temp_6 -= 1;
                                    item_70_2 = temp_6;
                                }

                                long double fpu_val_4_20 = fpu_val_4_19 - item_70_2;
                                long double fpu_val_3_22 = 0.0f;
                                fpu_val_3_22 - fpu_val_4_20;

                                if (*(&((fpu_val_3_22 < fpu_val_4_20 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_3_22, fpu_val_4_20) ? 1 : 0) << 0xa
                                    | (fpu_val_3_22 == fpu_val_4_20 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x41)
                                {
                                    long double fpu_val_3_23 = 1.0f;
                                    fpu_val_3_23 - fpu_val_4_20;

                                    if (*(&((fpu_val_3_23 < fpu_val_4_20 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_3_23, fpu_val_4_20) ? 1 : 0) << 0xa
                                            | (fpu_val_3_23 == fpu_val_4_20 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
                                        fpu_val_4_20 = 1.0f;
                                }
                                else
                                    fpu_val_4_20 = 0.0f;

                                int32_t data_11 = temp_6 * 5;
                                long double fpu_val_3_25 = *(context + (data_11 << 3) + 0x208) * entity_7[2];
                                void* data_12 = context + (data_11 << 3);
                                void* dest_3 = context + temp_6 * 0xc;
                                long double fpu_val_2_10 = *(context + (data_11 << 3) + 0x204) * entity_7[1];
                                entity_7 = &entity_7[8];
                                context_4 += 0x1c;
                                long double fpu_val_3_27 = fpu_val_3_25 + fpu_val_2_10 + *(dest_3 + 0x104);
                                long double fpu_val_2_18 = *(data_12 + 0x214) * entity_7[-6]
                                    + *(data_12 + 0x210) * entity_7[-7]
                                    + *(context + ((temp_6 * 3 + 0x42) << 2));
                                item_48 = fpu_val_2_18;
                                item_44 = *(data_12 + 0x220) * entity_7[-6]
                                    + *(data_12 + 0x21c) * entity_7[-7] + *(dest_3 + 0x10c);
                                i = i_4 + 1;
                                i_4 = i;
                                long double fpu_val_1_14 = *(data_12 + 0x23c) * entity_7[-6]
                                    + *(data_12 + 0x238) * entity_7[-7]
                                    + *(context + ((temp_6 * 3 + 0x45) << 2));
                                temp_5 = item_5c;
                                float item_3c_5 = fpu_val_1_14;
                                float item_38_5 = *(data_12 + 0x248) * entity_7[-6]
                                    + *(data_12 + 0x244) * entity_7[-7] + *(dest_3 + 0x118);
                                *(context_4 - 0x24) = (*(data_12 + 0x230) * entity_7[-6]
                                    + *(data_12 + 0x22c) * entity_7[-7] + *(dest_3 + 0x110) - fpu_val_3_27)
                                    * fpu_val_4_20 + fpu_val_3_27;
                                *(context_4 - 0x20) = (item_3c_5 - item_48) * fpu_val_4_20 + item_48;
                                *(context_4 - 0x1c) = (item_38_5 - item_44) * fpu_val_4_20 + item_44;
                            } while (i < *(temp_5 + 0xc));
                        }
                    }
                    else
                    {
                        int32_t i_1 = 0;
                        float item_34_1 = (fpu_val_6_17 + *(context + 0xfc)) * 0.5f;

                        if (*(temp_5 + 0xc) > 0)
                        {
                            do
                            {
                                long double fpu_val_6_21 = *entity_7 - item_34_1;
                                long double fpu_val_5_16 = entity_7[1];
                                long double fpu_val_4_13 = entity_7[2];
                                int32_t* context_2 = data_6;
                                i_1 += 1;
                                entity_7 = &entity_7[8];
                                data_6 = &data_6[7];
                                float item_3c_3 = fpu_val_4_13 * *(context + 0x84)
                                    + fpu_val_6_21 * *(context + 0x7c) + fpu_val_5_16 * *(context + 0x80);
                                long double fpu_val_6_23 =
                                    fpu_val_4_13 * *(context + 0x90) + fpu_val_6_21 * *(context + 0x88);
                                long double fpu_val_5_17 = fpu_val_5_16 * *(context + 0x8c);
                                *context_2 = fpu_val_4_13 * *(context + 0x78) + fpu_val_6_21 * *(context + 0x70)
                                    + fpu_val_5_16 * *(context + 0x74);
                                context_2[1] = item_3c_3;
                                context_2[2] = fpu_val_6_23 + fpu_val_5_17;
                            } while (i_1 < *(temp_5 + 0xc));
                        }
                    }

                    long double fpu_val_6_31 = *(context + 0x20) - g_bcab08;
                    long double fpu_val_5_22 = *(context + 0x28) - g_bcab10;
                    long double fpu_val_4_25 = *(context + 0x30) - g_bcab18;
                    float item_34_2 =
                        fpu_val_4_25 * g_bcaae8 + fpu_val_5_22 * g_bcaae4 + fpu_val_6_31 * g_bcaae0;
                    float item_30 =
                        fpu_val_4_25 * g_bcaaf4 + fpu_val_5_22 * g_bcaaf0 + fpu_val_6_31 * g_bcaaec;
                    float item_2c =
                        fpu_val_4_25 * g_bcab00 + fpu_val_5_22 * g_bcaafc + fpu_val_6_31 * g_bcaaf8;
                    float item_28 = g_bcaae8 * *(context + 0x88) + g_bcaae0 * *(context + 0x70)
                        + g_bcaae4 * *(context + 0x7c);
                    float item_24 = g_bcaae8 * *(context + 0x8c) + g_bcaae0 * *(context + 0x74)
                        + g_bcaae4 * *(context + 0x80);
                    float item_20 = g_bcaae8 * *(context + 0x90) + g_bcaae0 * *(context + 0x78)
                        + g_bcaae4 * *(context + 0x84);
                    float item_1c = g_bcaaf4 * *(context + 0x88) + g_bcaaec * *(context + 0x70)
                        + g_bcaaf0 * *(context + 0x7c);
                    int32_t i_2 = 0;
                    int32_t item_4 = *(context + 0x94) + g_bcab04 + 1;
                    float item_18 = g_bcaaf4 * *(context + 0x8c) + g_bcaaec * *(context + 0x74)
                        + g_bcaaf0 * *(context + 0x80);
                    float item_14 = g_bcaaf4 * *(context + 0x90) + g_bcaaec * *(context + 0x78)
                        + g_bcaaf0 * *(context + 0x84);
                    float item_10 = g_bcab00 * *(context + 0x88) + g_bcaaf8 * *(context + 0x70)
                        + g_bcaafc * *(context + 0x7c);
                    float item_c = g_bcab00 * *(context + 0x8c) + g_bcaaf8 * *(context + 0x74)
                        + g_bcaafc * *(context + 0x80);
                    float item_8 = g_bcab00 * *(context + 0x90) + g_bcaaf8 * *(context + 0x78)
                        + g_bcaafc * *(context + 0x84);

                    if (*(temp_5 + 0xc) > 0)
                    {
                        float* entity_9 = &g_72351c;

                        do
                        {
                            float item_40_4 =
                                item_20 * entity_9[1] + item_24 * *entity_9 + item_28 * entity_9[-1];
                            float item_70_3 = item_40_4;
                            float item_70_4 = item_40_4 + item_34_2;
                            float item_6c_2 =
                                item_14 * entity_9[1] + item_18 * *entity_9 + item_1c * entity_9[-1] + item_30;
                            long double fpu_val_6_87 =
                                item_8 * entity_9[1] + item_c * *entity_9 + item_10 * entity_9[-1] + item_2c;
                            float item_68_2 = fpu_val_6_87;
                            long double f3_1 = data_val;
                            fpu_val_6_87 - f3_1;
                            float item_4c;
                            int32_t data_25;

                            if (*(&((fpu_val_6_87 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_87, f3_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_87 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                data_25 = 0x10;
                            else
                            {
                                long double fpu_val_6_89 = 1.0f / item_68_2;
                                item_44 = fpu_val_6_89;
                                long double fpu_val_6_92 =
                                    fpu_val_6_89 * item_70_4 * g_bcab28 + g_bcab30;
                                item_4c = fpu_val_6_92;
                                long double fpu_val_5_78 =
                                    g_bcab2c * item_44 * item_6c_2 + g_bcab34;
                                item_48 = fpu_val_5_78;
                                long double f4_1 = g_bcabd0;
                                fpu_val_6_92 - f4_1;
                                int32_t context_5;

                                context_5 = !(*(&((fpu_val_6_92 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_92, f4_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_92 == f4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1) ? 0
                                    : 1;

                                long double f6_1 = g_bcabd4;
                                fpu_val_5_78 - f6_1;
                                int32_t dest_5;

                                dest_5 = !(*(&((fpu_val_5_78 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_5_78, f6_1) ? 1 : 0) << 0xa
                                    | (fpu_val_5_78 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0
                                    : 1;

                                long double f9_1 = g_bcabd8;
                                fpu_val_6_92 - f9_1;
                                int32_t source_1;

                                source_1 = *(&((fpu_val_6_92 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_92, f9_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_92 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0
                                    : 1;

                                long double fpu_val_6_93 = item_48;
                                long double f11_1 = g_bcabdc;
                                fpu_val_6_93 - f11_1;

                                data_25 = *(&((fpu_val_6_93 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_93, f11_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_93 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                    ? (source_1 << 1 | dest_5) << 1 | context_5
                                    : ((2 | source_1) << 1 | dest_5) << 1 | context_5;
                            }

                            entity_9[-1] = item_70_4;
                            *entity_9 = item_6c_2;
                            entity_9[1] = item_68_2;
                            entity_9[2] = item_4c;
                            entity_9[5] = data_25;
                            entity_9[3] = item_48;
                            entity_9[4] = item_44;

                            if (!data_25)
                            {
                                long double fpu_val_6_94 = item_68_2;
                                long double f5_1 = item_74;
                                fpu_val_6_94 - f5_1;

                                if (*(&((fpu_val_6_94 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_94, f5_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_94 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    item_74 = item_68_2;
                            }

                            i_2 += 1;
                            entity_9 = &entity_9[7];
                        } while (i_2 < *(temp_5 + 0xc));
                    }

                    long double f2 = data_val;
                    fpu_val_7_16 - f2;

                    if (*(&((fpu_val_7_16 < f2 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_16, f2) ? 1 : 0) << 0xa
                        | (fpu_val_7_16 == f2 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        void* source_6 = *(temp_5 + 0x14);
                        void* item_70_5 = source_6;

                        if (source_6)
                        {
                            while (true)
                            {
                                int32_t entity_10 = 0;
                                entity_10 = *(source_6 + 0xc);
                                int16_t* context_6 = source_6 + 0x1c;
                                int32_t i_5 = 0;

                                if (entity_10 / 3 > 0)
                                {
                                    int32_t entity_22;
                                    int32_t i_3;

                                    do
                                    {
                                        int32_t data_34 = 0;
                                        int32_t entity_13 = 0;
                                        data_34 = *(source_6 + 0x12);
                                        entity_13 = *context_6;
                                        int32_t entity_14 = entity_13 + data_34;
                                        int32_t entity_15 = 0;
                                        entity_15 = context_6[1];
                                        int32_t entity_16 = entity_15 + data_34;
                                        int32_t entity_17 = 0;
                                        entity_17 = context_6[2];
                                        int32_t entity_18 = entity_17 + data_34;
                                        int32_t data_37 = *(entity_14 * 0x1c + 0x723530);
                                        int32_t entity_20 = *(entity_18 * 0x1c + 0x723530);

                                        if (data_37 | *(entity_16 * 0x1c + 0x723530) | entity_20
                                            && !(entity_20 & data_37 & *(entity_16 * 0x1c + 0x723530)))
                                        {
                                            long double fpu_val_7_17 = *(entity_14 * 0x1c + &g_723520);
                                            long double f7_1 = item_74;
                                            fpu_val_7_17 - f7_1;

                                            if (*(&((fpu_val_7_17 < f7_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_17, f7_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_17 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            {
                                            label_49c730:
                                                float item_88_2 = data_val;
                                                float* item_8c_2 = &item_74;
                                                void item_a8;
                                                memcpy(&item_a8,
                                                    entity_18 * 0x1c + &g_723518, 0x1c);
                                                void item_c4;
                                                memcpy(&item_c4,
                                                    entity_16 * 0x1c + &g_723518, 0x1c);
                                                void item_e0;
                                                memcpy(&item_e0,
                                                    entity_14 * 0x1c + &g_723518, 0x1c);
                                                Camera_SetFieldOfView();
                                            }
                                            else
                                            {
                                                long double fpu_val_7_18 =
                                                    *(entity_16 * 0x1c + &g_723520);
                                                long double f8_1 = item_74;
                                                fpu_val_7_18 - f8_1;

                                                if (*(&((fpu_val_7_18 < f8_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_18, f8_1) ? 1 : 0)
                                                        << 0xa | (fpu_val_7_18 == f8_1 ? 1 : 0) << 0xe)
                                                        + 1) & 1)
                                                    goto label_49c730;

                                                long double fpu_val_7_19 =
                                                    *(entity_18 * 0x1c + &g_723520);
                                                long double f10_1 = item_74;
                                                fpu_val_7_19 - f10_1;

                                                if (*(&((fpu_val_7_19 < f10_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_19, f10_1) ? 1 : 0)
                                                        << 0xa | (fpu_val_7_19 == f10_1 ? 1 : 0) << 0xe)
                                                        + 1) & 1)
                                                    goto label_49c730;
                                            }
                                        }

                                        source_6 = item_70_5;
                                        entity_22 = 0;
                                        entity_22 = *(source_6 + 0xc);
                                        i_3 = i_5 + 1;
                                        context_6 = &context_6[3];
                                        i_5 = i_3;
                                    } while (i_3 < entity_22 / 3);
                                }

                                int16_t data_40 = *(source_6 + 0xe);

                                if (data_40 == 0xffff)
                                    break;

                                item_70_5 = source_6 + data_40 + 0x1c;
                                source_6 = source_6 + data_40 + 0x1c;
                            }
                        }
                    }

                    float data_42 = item_74;
                    *(param_2 + 8) = data_42;
                    return data_42;
                }
            }
        }
    }

    return data_1;
}
