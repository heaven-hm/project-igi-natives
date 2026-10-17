// IGI native provenance: Render_SetupLighting_13 - 0x004DAB50 - CFG score 73.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004DAB50-Render_SetupLighting_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SetupLighting_13.h"
int32_t Render_SetupLighting_13(int32_t context , int32_t param_2 , int32_t param_3 , void** param_4, float param_5)

{
    void arg_20;
    void* item_24 = &arg_20;
    void arg_3c;
    void* item_20 = &arg_3c;
    int32_t temp_val = context;
    g_a5e350 += 1;
    int32_t entity_2 = param_2;
    void arg_4;
    void* item_28 = &arg_4;
    int32_t data_val = param_3;
    char context_2 = temp_val | entity_2 | data_val;
    int32_t flagP2 = temp_val & entity_2 & data_val;

    if (!flagP2)
    {
        void item_9c;
        void item_80;
        void item_64;
        float item_1c;
        float item_10;
        float item_c;
        float item_8;

        if (context_2 & 0x10)
        {
            int32_t temp_1 = temp_val & 0x10;
            int32_t entity_3 = entity_2 & 0x10;
            int32_t data_3 = (data_val & 0x10) + temp_1 + entity_3;
            data_3 &= 0xf0;

            if (data_3 != 0x20)
            {
                float* item_30_1;
                float* data_21;
                float* temp_4;
                float* context_7;

                if (!temp_1)
                {
                    if (!entity_3)
                    {
                        data_21 = &arg_4;
                        item_30_1 = &arg_20;
                        temp_4 = &arg_3c;
                    }
                    else
                    {
                        data_21 = &arg_3c;
                        item_30_1 = &arg_4;
                        temp_4 = &arg_20;
                    }

                    context_7 = item_30_1;
                }
                else
                {
                    context_7 = &arg_3c;
                    data_21 = &arg_20;
                    item_30_1 = &arg_3c;
                    temp_4 = &arg_4;
                }

                long double fpu_val_7_37 = (param_5 - data_21[2]) / (temp_4[2] - data_21[2]);
                memcpy(&item_1c, temp_4, 0x1c);
                *temp_4 = (*temp_4 - *data_21) * fpu_val_7_37 + *data_21;
                temp_4[1] = (temp_4[1] - data_21[1]) * fpu_val_7_37 + data_21[1];
                long double fpu_val_7_39 = fpu_val_7_37 * (temp_4[2] - data_21[2]) + data_21[2];
                temp_4[2] = fpu_val_7_39;
                long double fpu_val_7_40 = 1.0f / fpu_val_7_39;
                temp_4[5] = fpu_val_7_40;
                temp_4[3] = fpu_val_7_40 * *temp_4 * g_bcab28 + g_bcab30;
                temp_4[4] = g_bcab2c * temp_4[1] * temp_4[5] + g_bcab34;
                long double fpu_val_7_48 = temp_4[3];
                long double f3_1 = g_bcabd0;
                fpu_val_7_48 - f3_1;
                int32_t dest_2;

                dest_2 = !(*(&((fpu_val_7_48 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_48, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_48 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_49 = temp_4[4];
                long double f9_1 = g_bcabd4;
                fpu_val_7_49 - f9_1;
                int32_t source_4;

                source_4 = !(*(&((fpu_val_7_49 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_49, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_49 == f9_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_50 = temp_4[3];
                long double f17_1 = g_bcabd8;
                fpu_val_7_50 - f17_1;
                int32_t entity_5;

                entity_5 = *(&((fpu_val_7_50 < f17_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_50, f17_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_50 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_51 = temp_4[4];
                long double f24_1 = g_bcabdc;
                fpu_val_7_51 - f24_1;
                int32_t data_23;

                data_23 = *(&((fpu_val_7_51 < f24_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_51, f24_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_51 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                temp_4[6] = (((data_23 * 2) | entity_5) << 1 | source_4) << 1 | dest_2;
                float item_14;
                long double fpu_val_7_53 = item_14 - context_7[2];
                long double fpu_val_6_39 = (param_5 - context_7[2]) / fpu_val_7_53;
                item_1c = (item_1c - *context_7) * fpu_val_6_39 + *context_7;
                long double fpu_val_7_57 = 1.0f / (fpu_val_7_53 * fpu_val_6_39 + context_7[2]);
                item_8 = fpu_val_7_57;
                long double fpu_val_7_60 = fpu_val_7_57 * item_1c * g_bcab28 + g_bcab30;
                item_10 = fpu_val_7_60;
                float item_18;
                long double fpu_val_6_46 =
                    item_8 * ((item_18 - context_7[1]) * fpu_val_6_39 + context_7[1]) * g_bcab2c
                    + g_bcab34;
                item_c = fpu_val_6_46;
                long double f30_1 = g_bcabd0;
                fpu_val_7_60 - f30_1;
                int32_t dest_3;

                dest_3 = !(*(&((fpu_val_7_60 < f30_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_60, f30_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_60 == f30_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                long double f36_1 = g_bcabd4;
                fpu_val_6_46 - f36_1;
                int32_t source_5;

                source_5 = !(*(&((fpu_val_6_46 < f36_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_46, f36_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_46 == f36_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                long double f39_1 = g_bcabd8;
                fpu_val_7_60 - f39_1;
                int32_t entity_6;

                entity_6 = *(&((fpu_val_7_60 < f39_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_60, f39_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_60 == f39_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_61 = item_c;
                long double f41_1 = g_bcabdc;
                fpu_val_7_61 - f41_1;
                int32_t data_31;

                data_31 = *(&((fpu_val_7_61 < f41_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_61, f41_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_61 == f41_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                int32_t item_4_1 = (((data_31 * 2) | entity_6) << 1 | source_5) << 1 | dest_3;
                flagP2 = context & param_2 & param_3;
                float item_44_1 = param_5;
                void** item_48_1 = param_4;
                context_2 = context | param_2 | param_3;
                memcpy(&item_64, temp_4, 0x1c);
                memcpy(&item_80, &item_1c, 0x1c);
                memcpy(&item_9c, item_30_1, 0x1c);
                Render_SetupLighting_13();
                data_val = param_3;
                entity_2 = param_2;
                temp_val = context;
            }
            else
            {
                float* data_4;
                float* entity_4;
                float* temp_2;
                float* source_1;

                if (!temp_1)
                {
                    data_4 = &arg_4;
                    temp_2 = &arg_4;
                    source_1 = &arg_20;
                    entity_4 = &arg_3c;
                }
                else if (entity_3)
                {
                    data_4 = &arg_3c;
                    temp_2 = &arg_3c;
                    source_1 = &arg_4;
                    entity_4 = &arg_20;
                }
                else
                {
                    data_4 = &arg_20;
                    temp_2 = &arg_20;
                    source_1 = &arg_3c;
                    entity_4 = &arg_4;
                }

                long double fpu_val_7_3 = (param_5 - data_4[2]) / (source_1[2] - data_4[2]);
                *source_1 = (*source_1 - *data_4) * fpu_val_7_3 + *data_4;
                source_1[1] = (source_1[1] - data_4[1]) * fpu_val_7_3 + data_4[1];
                long double fpu_val_7_5 = fpu_val_7_3 * (source_1[2] - data_4[2]) + data_4[2];
                source_1[2] = fpu_val_7_5;
                long double fpu_val_7_6 = 1.0f / fpu_val_7_5;
                source_1[5] = fpu_val_7_6;
                source_1[3] = fpu_val_7_6 * g_bcab28 * *source_1 + g_bcab30;
                source_1[4] = source_1[5] * source_1[1] * g_bcab2c + g_bcab34;
                long double fpu_val_7_14 = source_1[3];
                long double f1_1 = g_bcabd0;
                fpu_val_7_14 - f1_1;
                int32_t dest_1;

                dest_1 = !(*(&((fpu_val_7_14 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_14, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_14 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_15 = source_1[4];
                long double f4_1 = g_bcabd4;
                fpu_val_7_15 - f4_1;
                int32_t flagP3;

                flagP3 = !(*(&((fpu_val_7_15 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_15, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_15 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_16 = source_1[3];
                long double f10_1 = g_bcabd8;
                fpu_val_7_16 - f10_1;
                int32_t context_3;

                context_3 = *(&((fpu_val_7_16 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_16, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_16 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_17 = source_1[4];
                long double f18_1 = g_bcabdc;
                fpu_val_7_17 - f18_1;
                int32_t data_6;

                data_6 = *(&((fpu_val_7_17 < f18_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_17, f18_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_17 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                source_1[6] = (((data_6 * 2) | context_3) << 1 | flagP3) << 1 | dest_1;
                long double fpu_val_7_20 = (param_5 - temp_2[2]) / (entity_4[2] - temp_2[2]);
                *entity_4 = (*entity_4 - *temp_2) * fpu_val_7_20 + *temp_2;
                entity_4[1] = (entity_4[1] - temp_2[1]) * fpu_val_7_20 + temp_2[1];
                long double fpu_val_7_22 = fpu_val_7_20 * (entity_4[2] - temp_2[2]) + temp_2[2];
                entity_4[2] = fpu_val_7_22;
                long double fpu_val_7_23 = 1.0f / fpu_val_7_22;
                entity_4[5] = fpu_val_7_23;
                entity_4[3] = fpu_val_7_23 * *entity_4 * g_bcab28 + g_bcab30;
                entity_4[4] = g_bcab2c * entity_4[5] * entity_4[1] + g_bcab34;
                long double fpu_val_7_31 = entity_4[3];
                long double f25_1 = g_bcabd0;
                fpu_val_7_31 - f25_1;
                int32_t context_4;

                context_4 = !(*(&((fpu_val_7_31 < f25_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_31, f25_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_31 == f25_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_32 = entity_4[4];
                long double f31_1 = g_bcabd4;
                fpu_val_7_32 - f31_1;
                int32_t source_2;

                source_2 = !(*(&((fpu_val_7_32 < f31_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_32, f31_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_32 == f31_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_33 = entity_4[3];
                long double f37_1 = g_bcabd8;
                fpu_val_7_33 - f37_1;
                int32_t temp_3;

                temp_3 = *(&((fpu_val_7_33 < f37_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_33, f37_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_33 == f37_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_34 = entity_4[4];
                long double f40_1 = g_bcabdc;
                fpu_val_7_34 - f40_1;
                int32_t data_14;

                data_14 = *(&((fpu_val_7_34 < f40_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_34, f40_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_34 == f40_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                entity_4[6] = (((data_14 * 2) | temp_3) << 1 | source_2) << 1 | context_4;
                temp_val = context;
                entity_2 = param_2;
                data_val = param_3;
                context_2 = temp_val | entity_2 | data_val;
                flagP2 = temp_val & entity_2 & data_val;
            }
        }

        if (!flagP2)
        {
            if (!(context_2 & 1))
            {
            label_4db3f7:

                if (!(context_2 & 2))
                {
                label_4db72a:

                    if (!(context_2 & 4))
                    {
                    label_4db9f9:
                        int32_t flagP18;

                        if (context_2 & 8)
                        {
                            int32_t temp_17 = temp_val & 8;
                            int32_t entity_27 = entity_2 & 8;
                            int32_t data_130 = (data_val & 8) + temp_17 + entity_27;
                            data_130 &= 0xf8;

                            if (data_130 != 0x10)
                            {
                                void* data_132;
                                void* temp_19;
                                void* context_26;

                                if (temp_17)
                                {
                                    temp_19 = &arg_20;
                                    context_26 = &arg_3c;
                                    data_132 = &arg_4;
                                }
                                else if (!entity_27)
                                {
                                    temp_19 = &arg_4;
                                    context_26 = &arg_20;
                                    data_132 = &arg_3c;
                                }
                                else
                                {
                                    temp_19 = &arg_3c;
                                    context_26 = &arg_4;
                                    data_132 = &arg_20;
                                }

                                long double fpu_val_7_191 = (g_bcabdc - *(temp_19 + 0x10))
                                    / (*(data_132 + 0x10) - *(temp_19 + 0x10));
                                memcpy(&item_1c, data_132, 0x1c);
                                int32_t item_4_5 = 0;
                                *(data_132 + 0xc) = (*(data_132 + 0xc) - *(temp_19 + 0xc)) * fpu_val_7_191
                                    + *(temp_19 + 0xc);
                                *(data_132 + 0x10) =
                                    (*(data_132 + 0x10) - *(temp_19 + 0x10)) * fpu_val_7_191
                                    + *(temp_19 + 0x10);
                                long double fpu_val_6_174 =
                                    (*(data_132 + 0x14) - *(temp_19 + 0x14)) * fpu_val_7_191
                                    + *(temp_19 + 0x14);
                                *(data_132 + 0x18) = 0;
                                *(data_132 + 0x14) = fpu_val_6_174;
                                long double fpu_val_7_194 = item_c - *(context_26 + 0x10);
                                flagP18 = context & param_2 & param_3;
                                long double fpu_val_6_177 =
                                    (g_bcabdc - *(context_26 + 0x10)) / fpu_val_7_194;
                                float item_44_5 = param_5;
                                void** item_48_5 = param_4;
                                memcpy(&item_64, data_132, 0x1c);
                                float item_30_11 = fpu_val_6_177;
                                float item_10_1 =
                                    (item_10 - *(context_26 + 0xc)) * item_30_11 + *(context_26 + 0xc);
                                float item_c_1 = fpu_val_7_194 * item_30_11 + *(context_26 + 0x10);
                                float item_8_1 =
                                    (item_8 - *(context_26 + 0x14)) * item_30_11 + *(context_26 + 0x14);
                                memcpy(&item_80, &item_1c, 0x1c);
                                memcpy(&item_9c, context_26, 0x1c);
                                Render_SetupLighting_13();
                            }
                            else
                            {
                                void* data_131;
                                void* entity_28;
                                void* temp_18;
                                void* source_27;

                                if (!temp_17)
                                {
                                    data_131 = &arg_4;
                                    entity_28 = &arg_4;
                                    temp_18 = &arg_20;
                                    source_27 = &arg_3c;
                                }
                                else if (entity_27)
                                {
                                    data_131 = &arg_3c;
                                    entity_28 = &arg_3c;
                                    temp_18 = &arg_4;
                                    source_27 = &arg_20;
                                }
                                else
                                {
                                    data_131 = &arg_20;
                                    entity_28 = &arg_20;
                                    temp_18 = &arg_3c;
                                    source_27 = &arg_4;
                                }

                                long double fpu_val_7_183 = (g_bcabdc - *(data_131 + 0x10))
                                    / (*(temp_18 + 0x10) - *(data_131 + 0x10));
                                *(temp_18 + 0xc) = (*(temp_18 + 0xc) - *(data_131 + 0xc)) * fpu_val_7_183
                                    + *(data_131 + 0xc);
                                *(temp_18 + 0x10) =
                                    (*(temp_18 + 0x10) - *(data_131 + 0x10)) * fpu_val_7_183
                                    + *(data_131 + 0x10);
                                long double fpu_val_6_146 =
                                    (*(temp_18 + 0x14) - *(data_131 + 0x14)) * fpu_val_7_183
                                    + *(data_131 + 0x14);
                                *(temp_18 + 0x18) = 0;
                                *(temp_18 + 0x14) = fpu_val_6_146;
                                long double fpu_val_7_187 = (g_bcabdc - *(entity_28 + 0x10))
                                    / (*(source_27 + 0x10) - *(entity_28 + 0x10));
                                *(source_27 + 0xc) = (*(source_27 + 0xc) - *(entity_28 + 0xc)) * fpu_val_7_187
                                    + *(entity_28 + 0xc);
                                *(source_27 + 0x10) =
                                    (*(source_27 + 0x10) - *(entity_28 + 0x10)) * fpu_val_7_187
                                    + *(entity_28 + 0x10);
                                long double fpu_val_6_160 =
                                    (*(source_27 + 0x14) - *(entity_28 + 0x14)) * fpu_val_7_187
                                    + *(entity_28 + 0x14);
                                *(source_27 + 0x18) = 0;
                                *(source_27 + 0x14) = fpu_val_6_160;
                                flagP18 = context & param_2 & param_3;
                            }
                        }

                        if (!(context_2 & 8) || !flagP18)
                        {
                            void** dest_4 = &item_28;
                            int32_t i_1 = 3;
                            int32_t i;

                            do
                            {
                                float* temp_22 = param_4[1];
                                void* entity_31 = *dest_4;
                                long double fpu_val_7_201 = *temp_22;
                                long double fpu_val_6_182 = *(entity_31 + 0xc);
                                fpu_val_6_182 - fpu_val_7_201;
                                long double fpu_val_7_202;

                                if (!(*(&((fpu_val_6_182 < fpu_val_7_201 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_182, fpu_val_7_201) ? 1 : 0) << 0xa
                                        | (fpu_val_6_182 == fpu_val_7_201 ? 1 : 0) << 0xe) + 1) & 1))
                                    fpu_val_7_202 = *(entity_31 + 0xc);
                                else
                                    fpu_val_7_202 = *temp_22;

                                *temp_22 = fpu_val_7_202;
                                void* temp_23 = param_4[1];
                                long double fpu_val_7_203 = *(temp_23 + 4);
                                long double fpu_val_6_183 = *(entity_31 + 0x10);
                                fpu_val_6_183 - fpu_val_7_203;
                                long double fpu_val_7_204;

                                if (!(*(&((fpu_val_6_183 < fpu_val_7_203 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_183, fpu_val_7_203) ? 1 : 0) << 0xa
                                        | (fpu_val_6_183 == fpu_val_7_203 ? 1 : 0) << 0xe) + 1) & 1))
                                    fpu_val_7_204 = *(entity_31 + 0x10);
                                else
                                    fpu_val_7_204 = *(temp_23 + 4);

                                *(temp_23 + 4) = fpu_val_7_204;
                                float* temp_24 = *param_4;
                                long double fpu_val_7_205 = *temp_24;
                                long double fpu_val_6_184 = *(entity_31 + 0xc);
                                fpu_val_6_184 - fpu_val_7_205;
                                long double fpu_val_7_206;

                                if (*(&((fpu_val_6_184 < fpu_val_7_205 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_184, fpu_val_7_205) ? 1 : 0) << 0xa
                                        | (fpu_val_6_184 == fpu_val_7_205 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    fpu_val_7_206 = *(entity_31 + 0xc);
                                else
                                    fpu_val_7_206 = *temp_24;

                                *temp_24 = fpu_val_7_206;
                                void* temp_25 = *param_4;
                                long double fpu_val_7_207 = *(temp_25 + 4);
                                long double fpu_val_6_185 = *(entity_31 + 0x10);
                                fpu_val_6_185 - fpu_val_7_207;
                                long double fpu_val_7_208;

                                if (*(&((fpu_val_6_185 < fpu_val_7_207 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_185, fpu_val_7_207) ? 1 : 0) << 0xa
                                        | (fpu_val_6_185 == fpu_val_7_207 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    fpu_val_7_208 = *(entity_31 + 0x10);
                                else
                                    fpu_val_7_208 = *(temp_25 + 4);

                                dest_4 = &dest_4[1];
                                i = i_1;
                                i_1 -= 1;
                                *(temp_25 + 4) = fpu_val_7_208;
                            } while (i != 1);
                        }
                    }
                    else
                    {
                        int32_t temp_13 = temp_val & 4;
                        int32_t entity_22 = entity_2 & 4;
                        int32_t data_110 = (data_val & 4) + temp_13 + entity_22;
                        data_110 &= 0xfc;
                        int32_t flagP15;

                        if (data_110 != 8)
                        {
                            void* item_2c_3;
                            void* data_117;
                            void* temp_16;

                            if (temp_13)
                            {
                                data_117 = &arg_20;
                                item_2c_3 = &arg_3c;
                                temp_16 = &arg_4;
                            }
                            else if (!entity_22)
                            {
                                data_117 = &arg_4;
                                item_2c_3 = &arg_20;
                                temp_16 = &arg_3c;
                            }
                            else
                            {
                                data_117 = &arg_3c;
                                item_2c_3 = &arg_4;
                                temp_16 = &arg_20;
                            }

                            long double fpu_val_7_161 = *(temp_16 + 0xc) - *(data_117 + 0xc);
                            long double fpu_val_6_125 = (g_bcabd8 - *(data_117 + 0xc)) / fpu_val_7_161;
                            memcpy(&item_1c, temp_16, 0x1c);
                            float item_30_9 = fpu_val_6_125;
                            *(temp_16 + 0xc) = fpu_val_7_161 * item_30_9 + *(data_117 + 0xc);
                            *(temp_16 + 0x10) = (*(temp_16 + 0x10) - *(data_117 + 0x10)) * item_30_9
                                + *(data_117 + 0x10);
                            *(temp_16 + 0x14) = (*(temp_16 + 0x14) - *(data_117 + 0x14)) * item_30_9
                                + *(data_117 + 0x14);
                            long double fpu_val_7_172 = *(temp_16 + 0x10);
                            long double f13_1 = g_bcabdc;
                            fpu_val_7_172 - f13_1;
                            int32_t data_119;

                            data_119 = *(&((fpu_val_7_172 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_172, f13_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_172 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(temp_16 + 0x18) = data_119 << 3;
                            long double fpu_val_7_174 = item_10 - *(item_2c_3 + 0xc);
                            float item_30_10 = (g_bcabd8 - *(item_2c_3 + 0xc)) / fpu_val_7_174;
                            item_10 = fpu_val_7_174 * item_30_10 + *(item_2c_3 + 0xc);
                            long double fpu_val_7_180 =
                                (item_c - *(item_2c_3 + 0x10)) * item_30_10 + *(item_2c_3 + 0x10);
                            item_c = fpu_val_7_180;
                            item_8 = (item_8 - *(item_2c_3 + 0x14)) * item_30_10 + *(item_2c_3 + 0x14);
                            long double f21_1 = g_bcabdc;
                            fpu_val_7_180 - f21_1;
                            int32_t data_123;

                            data_123 = *(&((fpu_val_7_180 < f21_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_180, f21_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_180 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            int32_t item_4_4 = data_123 << 3;
                            flagP15 = context & param_2 & param_3;
                            float item_44_4 = param_5;
                            void** item_48_4 = param_4;
                            context_2 = context | param_2 | param_3;
                            memcpy(&item_64, temp_16, 0x1c);
                            memcpy(&item_80, &item_1c, 0x1c);
                            memcpy(&item_9c, item_2c_3, 0x1c);
                            Render_SetupLighting_13();
                            data_val = param_3;
                            entity_2 = param_2;
                            temp_val = context;
                        }
                        else
                        {
                            void* data_111;
                            void* entity_23;
                            void* temp_14;
                            void* source_22;

                            if (!temp_13)
                            {
                                data_111 = &arg_4;
                                temp_14 = &arg_4;
                                source_22 = &arg_20;
                                entity_23 = &arg_3c;
                            }
                            else if (entity_22)
                            {
                                data_111 = &arg_3c;
                                temp_14 = &arg_3c;
                                source_22 = &arg_4;
                                entity_23 = &arg_20;
                            }
                            else
                            {
                                data_111 = &arg_20;
                                temp_14 = &arg_20;
                                source_22 = &arg_3c;
                                entity_23 = &arg_4;
                            }

                            long double fpu_val_7_135 = *(source_22 + 0xc) - *(data_111 + 0xc);
                            float item_30_7 = (g_bcabd8 - *(data_111 + 0xc)) / fpu_val_7_135;
                            *(source_22 + 0xc) = fpu_val_7_135 * item_30_7 + *(data_111 + 0xc);
                            *(source_22 + 0x10) = (*(source_22 + 0x10) - *(data_111 + 0x10)) * item_30_7
                                + *(data_111 + 0x10);
                            *(source_22 + 0x14) = (*(source_22 + 0x14) - *(data_111 + 0x14)) * item_30_7
                                + *(data_111 + 0x14);
                            long double fpu_val_7_146 = *(source_22 + 0x10);
                            long double f6_1 = g_bcabdc;
                            fpu_val_7_146 - f6_1;
                            int32_t data_113;

                            data_113 = *(&((fpu_val_7_146 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_146, f6_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_146 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(source_22 + 0x18) = data_113 << 3;
                            long double fpu_val_7_148 = *(entity_23 + 0xc) - *(temp_14 + 0xc);
                            float item_30_8 = (g_bcabd8 - *(temp_14 + 0xc)) / fpu_val_7_148;
                            *(entity_23 + 0xc) = fpu_val_7_148 * item_30_8 + *(temp_14 + 0xc);
                            *(entity_23 + 0x10) =
                                (*(entity_23 + 0x10) - *(temp_14 + 0x10)) * item_30_8 + *(temp_14 + 0x10);
                            *(entity_23 + 0x14) =
                                (*(entity_23 + 0x14) - *(temp_14 + 0x14)) * item_30_8 + *(temp_14 + 0x14);
                            long double fpu_val_7_159 = *(entity_23 + 0x10);
                            long double f14_1 = g_bcabdc;
                            fpu_val_7_159 - f14_1;
                            int32_t data_116;

                            data_116 = *(&((fpu_val_7_159 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_159, f14_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_159 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(entity_23 + 0x18) = data_116 << 3;
                            temp_val = context;
                            entity_2 = param_2;
                            data_val = param_3;
                            context_2 = temp_val | entity_2 | data_val;
                            flagP15 = temp_val & entity_2 & data_val;
                        }

                        if (!flagP15)
                            goto label_4db9f9;
                    }
                }
                else
                {
                    int32_t temp_9 = temp_val & 2;
                    int32_t entity_16 = entity_2 & 2;
                    int32_t data_81 = (data_val & 2) + temp_9 + entity_16;
                    data_81 &= 0xfe;
                    int32_t flagP12;

                    if (data_81 != 4)
                    {
                        void* item_2c_2;
                        void* data_93;
                        void* temp_12;
                        void* context_19;

                        if (!temp_9)
                        {
                            if (!entity_16)
                            {
                                data_93 = &arg_4;
                                item_2c_2 = &arg_20;
                                temp_12 = &arg_3c;
                            }
                            else
                            {
                                data_93 = &arg_3c;
                                item_2c_2 = &arg_4;
                                temp_12 = &arg_20;
                            }

                            context_19 = item_2c_2;
                        }
                        else
                        {
                            context_19 = &arg_3c;
                            data_93 = &arg_20;
                            item_2c_2 = &arg_3c;
                            temp_12 = &arg_4;
                        }

                        long double fpu_val_7_126 = (g_bcabd4 - *(data_93 + 0x10))
                            / (*(temp_12 + 0x10) - *(data_93 + 0x10));
                        memcpy(&item_1c, temp_12, 0x1c);
                        *(temp_12 + 0xc) =
                            (*(temp_12 + 0xc) - *(data_93 + 0xc)) * fpu_val_7_126 + *(data_93 + 0xc);
                        *(temp_12 + 0x10) =
                            (*(temp_12 + 0x10) - *(data_93 + 0x10)) * fpu_val_7_126 + *(data_93 + 0x10);
                        *(temp_12 + 0x14) =
                            (*(temp_12 + 0x14) - *(data_93 + 0x14)) * fpu_val_7_126 + *(data_93 + 0x14);
                        long double fpu_val_7_128 = *(temp_12 + 0xc);
                        long double f11_1 = g_bcabd8;
                        fpu_val_7_128 - f11_1;
                        int32_t entity_18;

                        entity_18 = *(&((fpu_val_7_128 < f11_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_128, f11_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_128 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double fpu_val_7_129 = *(temp_12 + 0x10);
                        long double f19_1 = g_bcabdc;
                        fpu_val_7_129 - f19_1;
                        int32_t data_95;

                        data_95 = *(&((fpu_val_7_129 < f19_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_129, f19_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_129 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(temp_12 + 0x18) = ((data_95 * 2) | entity_18) << 2;
                        long double fpu_val_7_131 = item_c - *(context_19 + 0x10);
                        float item_30_6 = (g_bcabd4 - *(context_19 + 0x10)) / fpu_val_7_131;
                        item_10 = (item_10 - *(context_19 + 0xc)) * item_30_6 + *(context_19 + 0xc);
                        long double fpu_val_7_133 = fpu_val_7_131 * item_30_6 + *(context_19 + 0x10);
                        item_c = fpu_val_7_133;
                        item_8 = (item_8 - *(context_19 + 0x14)) * item_30_6 + *(context_19 + 0x14);
                        long double fpu_val_6_116 = item_10;
                        long double f26_1 = g_bcabd8;
                        fpu_val_6_116 - f26_1;
                        int32_t entity_19;

                        entity_19 = *(&((fpu_val_6_116 < f26_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_116, f26_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_116 == f26_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

                        long double f33_1 = g_bcabdc;
                        fpu_val_7_133 - f33_1;
                        int32_t data_100;

                        data_100 = *(&((fpu_val_7_133 < f33_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_133, f33_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_133 == f33_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        int32_t item_4_3 = ((data_100 * 2) | entity_19) << 2;
                        flagP12 = context & param_2 & param_3;
                        float item_44_3 = param_5;
                        void** item_48_3 = param_4;
                        context_2 = context | param_2 | param_3;
                        memcpy(&item_64, temp_12, 0x1c);
                        memcpy(&item_80, &item_1c, 0x1c);
                        memcpy(&item_9c, item_2c_2, 0x1c);
                        Render_SetupLighting_13();
                        data_val = param_3;
                        entity_2 = param_2;
                        temp_val = context;
                    }
                    else
                    {
                        void* data_82;
                        void* entity_17;
                        void* temp_10;
                        void* source_17;

                        if (!temp_9)
                        {
                            data_82 = &arg_4;
                            temp_10 = &arg_4;
                            source_17 = &arg_20;
                            entity_17 = &arg_3c;
                        }
                        else if (entity_16)
                        {
                            data_82 = &arg_3c;
                            temp_10 = &arg_3c;
                            source_17 = &arg_4;
                            entity_17 = &arg_20;
                        }
                        else
                        {
                            data_82 = &arg_20;
                            temp_10 = &arg_20;
                            source_17 = &arg_3c;
                            entity_17 = &arg_4;
                        }

                        long double fpu_val_7_114 = (g_bcabd4 - *(data_82 + 0x10))
                            / (*(source_17 + 0x10) - *(data_82 + 0x10));
                        *(source_17 + 0xc) =
                            (*(source_17 + 0xc) - *(data_82 + 0xc)) * fpu_val_7_114 + *(data_82 + 0xc);
                        *(source_17 + 0x10) =
                            (*(source_17 + 0x10) - *(data_82 + 0x10)) * fpu_val_7_114 + *(data_82 + 0x10);
                        *(source_17 + 0x14) =
                            (*(source_17 + 0x14) - *(data_82 + 0x14)) * fpu_val_7_114 + *(data_82 + 0x14);
                        long double fpu_val_7_116 = *(source_17 + 0xc);
                        long double f5_1 = g_bcabd8;
                        fpu_val_7_116 - f5_1;
                        int32_t context_16;

                        context_16 = *(&((fpu_val_7_116 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_116, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_116 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double fpu_val_7_117 = *(source_17 + 0x10);
                        long double f12_1 = g_bcabdc;
                        fpu_val_7_117 - f12_1;
                        int32_t data_84;

                        data_84 = *(&((fpu_val_7_117 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_117, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_117 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(source_17 + 0x18) = ((data_84 * 2) | context_16) << 2;
                        long double fpu_val_7_120 = (g_bcabd4 - *(temp_10 + 0x10))
                            / (*(entity_17 + 0x10) - *(temp_10 + 0x10));
                        *(entity_17 + 0xc) =
                            (*(entity_17 + 0xc) - *(temp_10 + 0xc)) * fpu_val_7_120 + *(temp_10 + 0xc);
                        *(entity_17 + 0x10) =
                            (*(entity_17 + 0x10) - *(temp_10 + 0x10)) * fpu_val_7_120 + *(temp_10 + 0x10);
                        *(entity_17 + 0x14) =
                            (*(entity_17 + 0x14) - *(temp_10 + 0x14)) * fpu_val_7_120 + *(temp_10 + 0x14);
                        long double fpu_val_7_122 = *(entity_17 + 0xc);
                        long double f20_1 = g_bcabd8;
                        fpu_val_7_122 - f20_1;
                        int32_t temp_11;

                        temp_11 = *(&((fpu_val_7_122 < f20_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_122, f20_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_122 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double fpu_val_7_123 = *(entity_17 + 0x10);
                        long double f27_1 = g_bcabdc;
                        fpu_val_7_123 - f27_1;
                        int32_t data_89;

                        data_89 = *(&((fpu_val_7_123 < f27_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_123, f27_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_123 == f27_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(entity_17 + 0x18) = ((data_89 * 2) | temp_11) << 2;
                        temp_val = context;
                        entity_2 = param_2;
                        data_val = param_3;
                        context_2 = temp_val | entity_2 | data_val;
                        flagP12 = temp_val & entity_2 & data_val;
                    }

                    if (!flagP12)
                        goto label_4db72a;
                }
            }
            else
            {
                int32_t temp_5 = temp_val & 1;
                int32_t entity_9 = entity_2 & 1;
                int32_t flagP9;

                if ((data_val & 1) + temp_5 + entity_9 != 2)
                {
                    void* item_2c_1;
                    void* data_60;
                    void* temp_8;
                    void* context_13;

                    if (!temp_5)
                    {
                        void* entity_11;

                        if (!entity_9)
                        {
                            data_60 = &arg_4;
                            temp_8 = &arg_20;
                            entity_11 = &arg_3c;
                        }
                        else
                        {
                            data_60 = &arg_3c;
                            temp_8 = &arg_4;
                            entity_11 = &arg_20;
                        }

                        item_2c_1 = entity_11;
                        context_13 = entity_11;
                    }
                    else
                    {
                        context_13 = &arg_4;
                        data_60 = &arg_20;
                        temp_8 = &arg_3c;
                        item_2c_1 = &arg_4;
                    }

                    long double fpu_val_7_93 = *(context_13 + 0xc) - *(data_60 + 0xc);
                    long double fpu_val_6_55 = (g_bcabd0 - *(data_60 + 0xc)) / fpu_val_7_93;
                    memcpy(&item_1c, context_13, 0x1c);
                    float item_30_4 = fpu_val_6_55;
                    *(context_13 + 0xc) = fpu_val_7_93 * item_30_4 + *(data_60 + 0xc);
                    *(context_13 + 0x10) =
                        (*(context_13 + 0x10) - *(data_60 + 0x10)) * item_30_4 + *(data_60 + 0x10);
                    *(context_13 + 0x14) =
                        (*(context_13 + 0x14) - *(data_60 + 0x14)) * item_30_4 + *(data_60 + 0x14);
                    long double fpu_val_7_104 = *(context_13 + 0x10);
                    long double f7_1 = g_bcabd4;
                    fpu_val_7_104 - f7_1;
                    int32_t source_12;

                    source_12 = !(*(&((fpu_val_7_104 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_104, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_104 == f7_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_105 = *(context_13 + 0xc);
                    long double f15_1 = g_bcabd8;
                    fpu_val_7_105 - f15_1;
                    int32_t entity_12;

                    entity_12 = *(&((fpu_val_7_105 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_105, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_105 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_106 = *(context_13 + 0x10);
                    long double f22_1 = g_bcabdc;
                    fpu_val_7_106 - f22_1;
                    int32_t data_62;

                    data_62 = *(&((fpu_val_7_106 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_106, f22_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_106 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(context_13 + 0x18) = (((data_62 * 2) | entity_12) << 1 | source_12) << 1;
                    long double fpu_val_7_108 = item_10 - *(temp_8 + 0xc);
                    float item_30_5 = (g_bcabd0 - *(temp_8 + 0xc)) / fpu_val_7_108;
                    long double fpu_val_7_110 = fpu_val_7_108 * item_30_5 + *(temp_8 + 0xc);
                    item_10 = fpu_val_7_110;
                    long double fpu_val_6_62 = (item_c - *(temp_8 + 0x10)) * item_30_5 + *(temp_8 + 0x10);
                    item_c = fpu_val_6_62;
                    item_8 = (item_8 - *(temp_8 + 0x14)) * item_30_5 + *(temp_8 + 0x14);
                    long double f28_1 = g_bcabd4;
                    fpu_val_6_62 - f28_1;
                    int32_t source_13;

                    source_13 = !(*(&((fpu_val_6_62 < f28_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_62, f28_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_62 == f28_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                    long double f34_1 = g_bcabd8;
                    fpu_val_7_110 - f34_1;
                    int32_t entity_13;

                    entity_13 = *(&((fpu_val_7_110 < f34_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_110, f34_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_110 == f34_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_111 = item_c;
                    long double f38_1 = g_bcabdc;
                    fpu_val_7_111 - f38_1;
                    int32_t data_69;

                    data_69 = *(&((fpu_val_7_111 < f38_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_111, f38_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_111 == f38_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    int32_t item_4_2 = (((data_69 * 2) | entity_13) << 1 | source_13) << 1;
                    flagP9 = context & param_2 & param_3;
                    float item_44_2 = param_5;
                    void** item_48_2 = param_4;
                    context_2 = context | param_2 | param_3;
                    memcpy(&item_64, item_2c_1, 0x1c);
                    memcpy(&item_80, &item_1c, 0x1c);
                    memcpy(&item_9c, temp_8, 0x1c);
                    Render_SetupLighting_13();
                    data_val = param_3;
                    entity_2 = param_2;
                    temp_val = context;
                }
                else
                {
                    void* data_45;
                    void* entity_10;
                    void* temp_6;
                    void* source_9;

                    if (!temp_5)
                    {
                        data_45 = &arg_4;
                        temp_6 = &arg_4;
                        source_9 = &arg_20;
                        entity_10 = &arg_3c;
                    }
                    else if (entity_9)
                    {
                        data_45 = &arg_3c;
                        temp_6 = &arg_3c;
