// IGI native provenance: Camera_SetFieldOfView - 0x004A0340 - CFG score 73.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004A0340-Camera_SetFieldOfView.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView.h"
int32_t Camera_SetFieldOfView(float context , int32_t param_2, float param_3 , int32_t param_4, float param_5 , int32_t param_6, float* param_7, float param_8)

{
    int32_t temp_val = param_4;
    int32_t data_val = param_6;
    g_7af1e0 += 1;
    int32_t entity_1 = param_2;
    char context_2 = entity_1 | temp_val | data_val;
    int32_t flagP2 = entity_1 & temp_val & data_val;

    if (!flagP2)
    {
        void item_90;
        void item_74;
        void item_58;
        float item_38;
        float item_1c;
        float item_10;
        float item_c;
        float item_8;
        void arg_4;
        void arg_20;
        void arg_3c;

        if (context_2 & 0x10)
        {
            int32_t entity_2 = entity_1 & 0x10;
            int32_t temp_1 = temp_val & 0x10;
            int32_t data_3 = (data_val & 0x10) + entity_2 + temp_1;
            data_3 &= 0xf0;

            if (data_3 != 0x20)
            {
                float* item_24_1;
                float* data_21;
                float* temp_4;
                float* context_6;

                if (!entity_2)
                {
                    if (!temp_1)
                    {
                        data_21 = &arg_4;
                        item_24_1 = &arg_20;
                        temp_4 = &arg_3c;
                    }
                    else
                    {
                        data_21 = &arg_3c;
                        item_24_1 = &arg_4;
                        temp_4 = &arg_20;
                    }

                    context_6 = item_24_1;
                }
                else
                {
                    context_6 = &arg_3c;
                    data_21 = &arg_20;
                    item_24_1 = &arg_3c;
                    temp_4 = &arg_4;
                }

                long double fpu_val_7_37 = (param_8 - data_21[2]) / (temp_4[2] - data_21[2]);
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
                int32_t dest_3;

                dest_3 = !(*(&((fpu_val_7_48 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_48, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_48 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_49 = temp_4[4];
                long double f8_1 = g_bcabd4;
                fpu_val_7_49 - f8_1;
                int32_t source_4;

                source_4 = !(*(&((fpu_val_7_49 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_49, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_49 == f8_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_50 = temp_4[3];
                long double f16_1 = g_bcabd8;
                fpu_val_7_50 - f16_1;
                int32_t entity_4;

                entity_4 = *(&((fpu_val_7_50 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_50, f16_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_50 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_51 = temp_4[4];
                long double f25_1 = g_bcabdc;
                fpu_val_7_51 - f25_1;
                int32_t data_23;

                data_23 = *(&((fpu_val_7_51 < f25_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_51, f25_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_51 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                temp_4[6] = (((data_23 * 2) | entity_4) << 1 | source_4) << 1 | dest_3;
                float item_14;
                long double fpu_val_7_53 = item_14 - context_6[2];
                long double fpu_val_6_39 = (param_8 - context_6[2]) / fpu_val_7_53;
                item_1c = (item_1c - *context_6) * fpu_val_6_39 + *context_6;
                long double fpu_val_7_57 = 1.0f / (fpu_val_7_53 * fpu_val_6_39 + context_6[2]);
                item_8 = fpu_val_7_57;
                long double fpu_val_7_60 = fpu_val_7_57 * item_1c * g_bcab28 + g_bcab30;
                item_10 = fpu_val_7_60;
                float item_18;
                long double fpu_val_6_46 =
                    item_8 * ((item_18 - context_6[1]) * fpu_val_6_39 + context_6[1]) * g_bcab2c
                    + g_bcab34;
                item_c = fpu_val_6_46;
                long double f33_1 = g_bcabd0;
                fpu_val_7_60 - f33_1;
                int32_t dest_4;

                dest_4 = !(*(&((fpu_val_7_60 < f33_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_60, f33_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_60 == f33_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                long double f38_1 = g_bcabd4;
                fpu_val_6_46 - f38_1;
                int32_t source_5;

                source_5 = !(*(&((fpu_val_6_46 < f38_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_46, f38_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_46 == f38_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                long double f41_1 = g_bcabd8;
                fpu_val_7_60 - f41_1;
                int32_t entity_5;

                entity_5 = *(&((fpu_val_7_60 < f41_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_60, f41_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_60 == f41_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_61 = item_c;
                long double f43_1 = g_bcabdc;
                fpu_val_7_61 - f43_1;
                int32_t data_31;

                data_31 = *(&((fpu_val_7_61 < f43_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_61, f43_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_61 == f43_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                int32_t item_4_1 = (((data_31 * 2) | entity_5) << 1 | source_5) << 1 | dest_4;
                context_2 = param_2 | param_4 | param_6;
                flagP2 = param_2 & param_4 & param_6;
                item_38 = param_8;
                float* item_3c_1 = param_7;
                memcpy(&item_58, temp_4, 0x1c);
                memcpy(&item_74, &item_1c, 0x1c);
                memcpy(&item_90, item_24_1, 0x1c);
                Camera_SetFieldOfView();
                entity_1 = param_2;
                temp_val = param_4;
                data_val = param_6;
            }
            else
            {
                float* data_4;
                float* entity_3;
                float* temp_2;
                float* source_1;

                if (!entity_2)
                {
                    data_4 = &arg_4;
                    temp_2 = &arg_4;
                    source_1 = &arg_20;
                    entity_3 = &arg_3c;
                }
                else if (temp_1)
                {
                    data_4 = &arg_3c;
                    temp_2 = &arg_3c;
                    source_1 = &arg_4;
                    entity_3 = &arg_20;
                }
                else
                {
                    data_4 = &arg_20;
                    temp_2 = &arg_20;
                    source_1 = &arg_3c;
                    entity_3 = &arg_4;
                }

                long double fpu_val_7_3 = (param_8 - data_4[2]) / (source_1[2] - data_4[2]);
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
                int32_t flagP3;

                flagP3 = !(*(&((fpu_val_7_14 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_14, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_14 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_15 = source_1[4];
                long double f4_1 = g_bcabd4;
                fpu_val_7_15 - f4_1;
                int32_t context_3;

                context_3 = !(*(&((fpu_val_7_15 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_15, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_15 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_16 = source_1[3];
                long double f9_1 = g_bcabd8;
                fpu_val_7_16 - f9_1;
                int32_t dest_1;

                dest_1 = *(&((fpu_val_7_16 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_16, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_16 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_17 = source_1[4];
                long double f17_1 = g_bcabdc;
                fpu_val_7_17 - f17_1;
                int32_t data_6;

                data_6 = *(&((fpu_val_7_17 < f17_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_17, f17_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_17 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                source_1[6] = (((data_6 * 2) | dest_1) << 1 | context_3) << 1 | flagP3;
                long double fpu_val_7_20 = (param_8 - temp_2[2]) / (entity_3[2] - temp_2[2]);
                *entity_3 = (*entity_3 - *temp_2) * fpu_val_7_20 + *temp_2;
                entity_3[1] = (entity_3[1] - temp_2[1]) * fpu_val_7_20 + temp_2[1];
                long double fpu_val_7_22 = fpu_val_7_20 * (entity_3[2] - temp_2[2]) + temp_2[2];
                entity_3[2] = fpu_val_7_22;
                long double fpu_val_7_23 = 1.0f / fpu_val_7_22;
                entity_3[5] = fpu_val_7_23;
                entity_3[3] = fpu_val_7_23 * *entity_3 * g_bcab28 + g_bcab30;
                entity_3[4] = g_bcab2c * entity_3[5] * entity_3[1] + g_bcab34;
                long double fpu_val_7_31 = entity_3[3];
                long double f26_1 = g_bcabd0;
                fpu_val_7_31 - f26_1;
                int32_t dest_2;

                dest_2 = !(*(&((fpu_val_7_31 < f26_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_31, f26_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_31 == f26_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_32 = entity_3[4];
                long double f34_1 = g_bcabd4;
                fpu_val_7_32 - f34_1;
                int32_t source_2;

                source_2 = !(*(&((fpu_val_7_32 < f34_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_32, f34_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_32 == f34_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_33 = entity_3[3];
                long double f39_1 = g_bcabd8;
                fpu_val_7_33 - f39_1;
                int32_t temp_3;

                temp_3 = *(&((fpu_val_7_33 < f39_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_33, f39_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_33 == f39_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_34 = entity_3[4];
                long double f42_1 = g_bcabdc;
                fpu_val_7_34 - f42_1;
                int32_t data_14;

                data_14 = *(&((fpu_val_7_34 < f42_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_34, f42_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_34 == f42_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                entity_3[6] = (((data_14 * 2) | temp_3) << 1 | source_2) << 1 | dest_2;
                entity_1 = param_2;
                temp_val = param_4;
                data_val = param_6;
                context_2 = entity_1 | temp_val | data_val;
                flagP2 = entity_1 & temp_val & data_val;
            }
        }

        if (!flagP2)
        {
            if (context_2 & 1)
            {
                int32_t entity_8 = entity_1 & 1;
                int32_t temp_5 = temp_val & 1;

                if ((data_val & 1) + entity_8 + temp_5 != 2)
                {
                    void* item_20_1;
                    void* data_58;
                    void* temp_8;
                    void* context_12;

                    if (!entity_8)
                    {
                        void* entity_10;

                        if (!temp_5)
                        {
                            data_58 = &arg_4;
                            temp_8 = &arg_20;
                            entity_10 = &arg_3c;
                        }
                        else
                        {
                            data_58 = &arg_3c;
                            temp_8 = &arg_4;
                            entity_10 = &arg_20;
                        }

                        item_20_1 = entity_10;
                        context_12 = entity_10;
                    }
                    else
                    {
                        context_12 = &arg_4;
                        data_58 = &arg_20;
                        temp_8 = &arg_3c;
                        item_20_1 = &arg_4;
                    }

                    long double fpu_val_7_93 = *(context_12 + 0xc) - *(data_58 + 0xc);
                    long double fpu_val_6_55 = (g_bcabd0 - *(data_58 + 0xc)) / fpu_val_7_93;
                    memcpy(&item_1c, context_12, 0x1c);
                    float item_24_4 = fpu_val_6_55;
                    *(context_12 + 0xc) = fpu_val_7_93 * item_24_4 + *(data_58 + 0xc);
                    *(context_12 + 0x10) =
                        (*(context_12 + 0x10) - *(data_58 + 0x10)) * item_24_4 + *(data_58 + 0x10);
                    *(context_12 + 0x14) =
                        (*(context_12 + 0x14) - *(data_58 + 0x14)) * item_24_4 + *(data_58 + 0x14);
                    long double fpu_val_7_104 = *(context_12 + 0x10);
                    long double f6_1 = g_bcabd4;
                    fpu_val_7_104 - f6_1;
                    int32_t source_11;

                    source_11 = !(*(&((fpu_val_7_104 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_104, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_104 == f6_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_105 = *(context_12 + 0xc);
                    long double f14_1 = g_bcabd8;
                    fpu_val_7_105 - f14_1;
                    int32_t entity_11;

                    entity_11 = *(&((fpu_val_7_105 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_105, f14_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_105 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_106 = *(context_12 + 0x10);
                    long double f23_1 = g_bcabdc;
                    fpu_val_7_106 - f23_1;
                    int32_t data_60;

                    data_60 = *(&((fpu_val_7_106 < f23_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_106, f23_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_106 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(context_12 + 0x18) = (((data_60 * 2) | entity_11) << 1 | source_11) << 1;
                    long double fpu_val_7_108 = item_10 - *(temp_8 + 0xc);
                    float item_24_5 = (g_bcabd0 - *(temp_8 + 0xc)) / fpu_val_7_108;
                    long double fpu_val_7_110 = fpu_val_7_108 * item_24_5 + *(temp_8 + 0xc);
                    item_10 = fpu_val_7_110;
                    long double fpu_val_6_62 = (item_c - *(temp_8 + 0x10)) * item_24_5 + *(temp_8 + 0x10);
                    item_c = fpu_val_6_62;
                    item_8 = (item_8 - *(temp_8 + 0x14)) * item_24_5 + *(temp_8 + 0x14);
                    long double f31_1 = g_bcabd4;
                    fpu_val_6_62 - f31_1;
                    int32_t source_12;

                    source_12 = !(*(&((fpu_val_6_62 < f31_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_62, f31_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_62 == f31_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                    long double f36_1 = g_bcabd8;
                    fpu_val_7_110 - f36_1;
                    int32_t entity_12;

                    entity_12 = *(&((fpu_val_7_110 < f36_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_110, f36_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_110 == f36_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_111 = item_c;
                    long double f40_1 = g_bcabdc;
                    fpu_val_7_111 - f40_1;
                    int32_t data_67;

                    data_67 = *(&((fpu_val_7_111 < f40_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_111, f40_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_111 == f40_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    int32_t item_4_2 = (((data_67 * 2) | entity_12) << 1 | source_12) << 1;
                    context_2 = param_2 | param_4 | param_6;
                    flagP2 = param_2 & param_4 & param_6;
                    item_38 = param_8;
                    float* item_3c_2 = param_7;
                    memcpy(&item_58, item_20_1, 0x1c);
                    memcpy(&item_74, &item_1c, 0x1c);
                    memcpy(&item_90, temp_8, 0x1c);
                    Camera_SetFieldOfView();
                    entity_1 = param_2;
                    temp_val = param_4;
                    data_val = param_6;
                }
                else
                {
                    void* data_43;
                    void* entity_9;
                    void* temp_6;
                    void* source_8;

                    if (!entity_8)
                    {
                        data_43 = &arg_4;
                        temp_6 = &arg_4;
                        source_8 = &arg_20;
                        entity_9 = &arg_3c;
                    }
                    else if (temp_5)
                    {
                        data_43 = &arg_3c;
                        temp_6 = &arg_3c;
                        source_8 = &arg_4;
                        entity_9 = &arg_20;
                    }
                    else
                    {
                        data_43 = &arg_20;
                        temp_6 = &arg_20;
                        source_8 = &arg_3c;
                        entity_9 = &arg_4;
                    }

                    long double fpu_val_7_63 = *(source_8 + 0xc) - *(data_43 + 0xc);
                    float item_24_2 = (g_bcabd0 - *(data_43 + 0xc)) / fpu_val_7_63;
                    *(source_8 + 0xc) = fpu_val_7_63 * item_24_2 + *(data_43 + 0xc);
                    *(source_8 + 0x10) =
                        (*(source_8 + 0x10) - *(data_43 + 0x10)) * item_24_2 + *(data_43 + 0x10);
                    *(source_8 + 0x14) =
                        (*(source_8 + 0x14) - *(data_43 + 0x14)) * item_24_2 + *(data_43 + 0x14);
                    long double fpu_val_7_74 = *(source_8 + 0x10);
                    long double f2_1 = g_bcabd4;
                    fpu_val_7_74 - f2_1;
                    int32_t context_9;

                    context_9 = !(*(&((fpu_val_7_74 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_74, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_74 == f2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_75 = *(source_8 + 0xc);
                    long double f7_1 = g_bcabd8;
                    fpu_val_7_75 - f7_1;
                    int32_t dest_5;

                    dest_5 = *(&((fpu_val_7_75 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_75, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_75 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_76 = *(source_8 + 0x10);
                    long double f15_1 = g_bcabdc;
                    fpu_val_7_76 - f15_1;
                    int32_t data_45;

                    data_45 = *(&((fpu_val_7_76 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_76, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_76 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(source_8 + 0x18) = (((data_45 * 2) | dest_5) << 1 | context_9) << 1;
                    long double fpu_val_7_78 = *(entity_9 + 0xc) - *(temp_6 + 0xc);
                    float item_24_3 = (g_bcabd0 - *(temp_6 + 0xc)) / fpu_val_7_78;
                    *(entity_9 + 0xc) = fpu_val_7_78 * item_24_3 + *(temp_6 + 0xc);
                    *(entity_9 + 0x10) =
                        (*(entity_9 + 0x10) - *(temp_6 + 0x10)) * item_24_3 + *(temp_6 + 0x10);
                    *(entity_9 + 0x14) =
                        (*(entity_9 + 0x14) - *(temp_6 + 0x14)) * item_24_3 + *(temp_6 + 0x14);
                    long double fpu_val_7_89 = *(entity_9 + 0x10);
                    long double f24_1 = g_bcabd4;
                    fpu_val_7_89 - f24_1;
                    int32_t source_9;

                    source_9 = !(*(&((fpu_val_7_89 < f24_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_89, f24_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_89 == f24_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_90 = *(entity_9 + 0xc);
                    long double f32_1 = g_bcabd8;
                    fpu_val_7_90 - f32_1;
                    int32_t temp_7;

                    temp_7 = *(&((fpu_val_7_90 < f32_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_90, f32_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_90 == f32_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_91 = *(entity_9 + 0x10);
                    long double f37_1 = g_bcabdc;
                    fpu_val_7_91 - f37_1;
                    int32_t data_52;

                    data_52 = *(&((fpu_val_7_91 < f37_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_91, f37_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_91 == f37_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(entity_9 + 0x18) = (((data_52 * 2) | temp_7) << 1 | source_9) << 1;
                    entity_1 = param_2;
                    temp_val = param_4;
                    data_val = param_6;
                    context_2 = entity_1 | temp_val | data_val;
                    flagP2 = entity_1 & temp_val & data_val;
                }
            }

            if (!flagP2)
            {
                if (context_2 & 2)
                {
                    int32_t entity_15 = entity_1 & 2;
                    int32_t temp_9 = temp_val & 2;
                    int32_t data_77 = (data_val & 2) + entity_15 + temp_9;
                    data_77 &= 0xfe;

                    if (data_77 != 4)
                    {
                        void* item_20_2;
                        void* data_89;
                        void* temp_12;
                        void* context_17;

                        if (!entity_15)
                        {
                            if (!temp_9)
                            {
                                data_89 = &arg_4;
                                item_20_2 = &arg_20;
                                temp_12 = &arg_3c;
                            }
                            else
                            {
                                data_89 = &arg_3c;
                                item_20_2 = &arg_4;
                                temp_12 = &arg_20;
                            }

                            context_17 = item_20_2;
                        }
                        else
                        {
                            context_17 = &arg_3c;
                            data_89 = &arg_20;
                            item_20_2 = &arg_3c;
                            temp_12 = &arg_4;
                        }

                        long double fpu_val_7_126 = (g_bcabd4 - *(data_89 + 0x10))
                            / (*(temp_12 + 0x10) - *(data_89 + 0x10));
                        memcpy(&item_1c, temp_12, 0x1c);
                        *(temp_12 + 0xc) =
                            (*(temp_12 + 0xc) - *(data_89 + 0xc)) * fpu_val_7_126 + *(data_89 + 0xc);
                        *(temp_12 + 0x10) =
                            (*(temp_12 + 0x10) - *(data_89 + 0x10)) * fpu_val_7_126 + *(data_89 + 0x10);
                        *(temp_12 + 0x14) =
                            (*(temp_12 + 0x14) - *(data_89 + 0x14)) * fpu_val_7_126 + *(data_89 + 0x14);
                        long double fpu_val_7_128 = *(temp_12 + 0xc);
                        long double f12_1 = g_bcabd8;
                        fpu_val_7_128 - f12_1;
                        int32_t entity_17;

                        entity_17 = *(&((fpu_val_7_128 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_128, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_128 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double fpu_val_7_129 = *(temp_12 + 0x10);
                        long double f21_1 = g_bcabdc;
                        fpu_val_7_129 - f21_1;
                        int32_t data_91;

                        data_91 = *(&((fpu_val_7_129 < f21_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_129, f21_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_129 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(temp_12 + 0x18) = ((data_91 * 2) | entity_17) << 2;
                        long double fpu_val_7_131 = item_c - *(context_17 + 0x10);
                        float item_24_6 = (g_bcabd4 - *(context_17 + 0x10)) / fpu_val_7_131;
                        item_10 = (item_10 - *(context_17 + 0xc)) * item_24_6 + *(context_17 + 0xc);
                        long double fpu_val_7_133 = fpu_val_7_131 * item_24_6 + *(context_17 + 0x10);
                        item_c = fpu_val_7_133;
                        item_8 = (item_8 - *(context_17 + 0x14)) * item_24_6 + *(context_17 + 0x14);
                        long double fpu_val_6_116 = item_10;
                        long double f29_1 = g_bcabd8;
                        fpu_val_6_116 - f29_1;
                        int32_t entity_18;

                        entity_18 = *(&((fpu_val_6_116 < f29_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_116, f29_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_116 == f29_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

                        long double f35_1 = g_bcabdc;
                        fpu_val_7_133 - f35_1;
                        int32_t data_96;

                        data_96 = *(&((fpu_val_7_133 < f35_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_133, f35_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_133 == f35_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        int32_t item_4_3 = ((data_96 * 2) | entity_18) << 2;
                        context_2 = param_2 | param_4 | param_6;
                        flagP2 = param_2 & param_4 & param_6;
                        item_38 = param_8;
                        float* item_3c_3 = param_7;
                        memcpy(&item_58, temp_12, 0x1c);
                        memcpy(&item_74, &item_1c, 0x1c);
                        memcpy(&item_90, item_20_2, 0x1c);
                        Camera_SetFieldOfView();
                        entity_1 = param_2;
                        temp_val = param_4;
                        data_val = param_6;
                    }
                    else
                    {
                        void* data_78;
                        void* entity_16;
                        void* temp_10;
                        void* source_15;

                        if (!entity_15)
                        {
                            data_78 = &arg_4;
                            temp_10 = &arg_4;
                            source_15 = &arg_20;
                            entity_16 = &arg_3c;
                        }
                        else if (temp_9)
                        {
                            data_78 = &arg_3c;
                            temp_10 = &arg_3c;
                            source_15 = &arg_4;
                            entity_16 = &arg_20;
                        }
                        else
                        {
                            data_78 = &arg_20;
                            temp_10 = &arg_20;
                            source_15 = &arg_3c;
                            entity_16 = &arg_4;
                        }

                        long double fpu_val_7_114 = (g_bcabd4 - *(data_78 + 0x10))
                            / (*(source_15 + 0x10) - *(data_78 + 0x10));
                        *(source_15 + 0xc) =
                            (*(source_15 + 0xc) - *(data_78 + 0xc)) * fpu_val_7_114 + *(data_78 + 0xc);
                        *(source_15 + 0x10) =
                            (*(source_15 + 0x10) - *(data_78 + 0x10)) * fpu_val_7_114 + *(data_78 + 0x10);
                        *(source_15 + 0x14) =
                            (*(source_15 + 0x14) - *(data_78 + 0x14)) * fpu_val_7_114 + *(data_78 + 0x14);
                        long double fpu_val_7_116 = *(source_15 + 0xc);
                        long double f5_1 = g_bcabd8;
                        fpu_val_7_116 - f5_1;
                        int32_t dest_6;

                        dest_6 = *(&((fpu_val_7_116 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_116, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_116 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double fpu_val_7_117 = *(source_15 + 0x10);
                        long double f13_1 = g_bcabdc;
                        fpu_val_7_117 - f13_1;
                        int32_t data_80;

                        data_80 = *(&((fpu_val_7_117 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_117, f13_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_117 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(source_15 + 0x18) = ((data_80 * 2) | dest_6) << 2;
                        long double fpu_val_7_120 = (g_bcabd4 - *(temp_10 + 0x10))
                            / (*(entity_16 + 0x10) - *(temp_10 + 0x10));
                        *(entity_16 + 0xc) =
                            (*(entity_16 + 0xc) - *(temp_10 + 0xc)) * fpu_val_7_120 + *(temp_10 + 0xc);
                        *(entity_16 + 0x10) =
                            (*(entity_16 + 0x10) - *(temp_10 + 0x10)) * fpu_val_7_120 + *(temp_10 + 0x10);
                        *(entity_16 + 0x14) =
                            (*(entity_16 + 0x14) - *(temp_10 + 0x14)) * fpu_val_7_120 + *(temp_10 + 0x14);
                        long double fpu_val_7_122 = *(entity_16 + 0xc);
                        long double f22_1 = g_bcabd8;
                        fpu_val_7_122 - f22_1;
                        int32_t temp_11;

                        temp_11 = *(&((fpu_val_7_122 < f22_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_122, f22_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_122 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double fpu_val_7_123 = *(entity_16 + 0x10);
                        long double f30_1 = g_bcabdc;
                        fpu_val_7_123 - f30_1;
                        int32_t data_85;

                        data_85 = *(&((fpu_val_7_123 < f30_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_123, f30_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_123 == f30_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(entity_16 + 0x18) = ((data_85 * 2) | temp_11) << 2;
                        entity_1 = param_2;
                        temp_val = param_4;
                        data_val = param_6;
                        context_2 = entity_1 | temp_val | data_val;
                        flagP2 = entity_1 & temp_val & data_val;
                    }
                }

                if (!flagP2)
                {
                    if (context_2 & 4)
                    {
                        int32_t entity_21 = entity_1 & 4;
                        int32_t temp_13 = temp_val & 4;
                        int32_t data_104 = (data_val & 4) + entity_21 + temp_13;
                        data_104 &= 0xfc;

                        if (data_104 != 8)
                        {
                            void* item_20_3;
                            void* data_111;
                            void* temp_16;
                            void* context_22;

                            if (!entity_21)
                            {
                                if (!temp_13)
                                {
                                    data_111 = &arg_4;
                                    item_20_3 = &arg_20;
                                    temp_16 = &arg_3c;
                                }
                                else
                                {
                                    data_111 = &arg_3c;
                                    item_20_3 = &arg_4;
                                    temp_16 = &arg_20;
                                }

                                context_22 = item_20_3;
                            }
                            else
                            {
                                context_22 = &arg_3c;
                                data_111 = &arg_20;
                                item_20_3 = &arg_3c;
                                temp_16 = &arg_4;
                            }

                            long double fpu_val_7_161 = *(temp_16 + 0xc) - *(data_111 + 0xc);
                            long double fpu_val_6_125 = (g_bcabd8 - *(data_111 + 0xc)) / fpu_val_7_161;
                            memcpy(&item_1c, temp_16, 0x1c);
                            float item_24_9 = fpu_val_6_125;
                            *(temp_16 + 0xc) = fpu_val_7_161 * item_24_9 + *(data_111 + 0xc);
                            *(temp_16 + 0x10) = (*(temp_16 + 0x10) - *(data_111 + 0x10)) * item_24_9
                                + *(data_111 + 0x10);
                            *(temp_16 + 0x14) = (*(temp_16 + 0x14) - *(data_111 + 0x14)) * item_24_9
                                + *(data_111 + 0x14);
                            long double fpu_val_7_172 = *(temp_16 + 0x10);
                            long double f19_1 = g_bcabdc;
                            fpu_val_7_172 - f19_1;
                            int32_t data_113;

                            data_113 = *(&((fpu_val_7_172 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_172, f19_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_172 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(temp_16 + 0x18) = data_113 << 3;
                            long double fpu_val_7_174 = item_10 - *(context_22 + 0xc);
                            float item_24_10 = (g_bcabd8 - *(context_22 + 0xc)) / fpu_val_7_174;
                            item_10 = fpu_val_7_174 * item_24_10 + *(context_22 + 0xc);
                            long double fpu_val_7_180 =
                                (item_c - *(context_22 + 0x10)) * item_24_10 + *(context_22 + 0x10);
                            item_c = fpu_val_7_180;
                            item_8 = (item_8 - *(context_22 + 0x14)) * item_24_10 + *(context_22 + 0x14);
                            long double f28_1 = g_bcabdc;
                            fpu_val_7_180 - f28_1;
                            int32_t data_116;

                            data_116 = *(&((fpu_val_7_180 < f28_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_180, f28_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_180 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            int32_t item_4_4 = data_116 << 3;
                            context_2 = param_2 | param_4 | param_6;
                            flagP2 = param_2 & param_4 & param_6;
                            item_38 = param_8;
                            float* item_3c_4 = param_7;
                            memcpy(&item_58, temp_16, 0x1c);
                            memcpy(&item_74, &item_1c, 0x1c);
                            memcpy(&item_90, item_20_3, 0x1c);
                            Camera_SetFieldOfView();
                            entity_1 = param_2;
                            temp_val = param_4;
                            data_val = param_6;
                        }
                        else
                        {
                            void* data_105;
                            void* entity_22;
                            void* temp_14;
                            void* source_19;

                            if (!entity_21)
                            {
                                data_105 = &arg_4;
                                temp_14 = &arg_4;
                                source_19 = &arg_20;
                                entity_22 = &arg_3c;
                            }
                            else if (temp_13)
                            {
                                data_105 = &arg_3c;
                                temp_14 = &arg_3c;
                                source_19 = &arg_4;
                                entity_22 = &arg_20;
                            }
                            else
                            {
                                data_105 = &arg_20;
                                temp_14 = &arg_20;
                                source_19 = &arg_3c;
                                entity_22 = &arg_4;
                            }

                            long double fpu_val_7_135 = *(source_19 + 0xc) - *(data_105 + 0xc);
                            float item_24_7 = (g_bcabd8 - *(data_105 + 0xc)) / fpu_val_7_135;
                            *(source_19 + 0xc) = fpu_val_7_135 * item_24_7 + *(data_105 + 0xc);
                            *(source_19 + 0x10) = (*(source_19 + 0x10) - *(data_105 + 0x10)) * item_24_7
                                + *(data_105 + 0x10);
                            *(source_19 + 0x14) = (*(source_19 + 0x14) - *(data_105 + 0x14)) * item_24_7
                                + *(data_105 + 0x14);
                            long double fpu_val_7_146 = *(source_19 + 0x10);
                            long double f11_1 = g_bcabdc;
                            fpu_val_7_146 - f11_1;
                            int32_t data_107;

                            data_107 = *(&((fpu_val_7_146 < f11_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_146, f11_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_146 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(source_19 + 0x18) = data_107 << 3;
                            long double fpu_val_7_148 = *(entity_22 + 0xc) - *(temp_14 + 0xc);
                            float item_24_8 = (g_bcabd8 - *(temp_14 + 0xc)) / fpu_val_7_148;
                            *(entity_22 + 0xc) = fpu_val_7_148 * item_24_8 + *(temp_14 + 0xc);
                            *(entity_22 + 0x10) =
                                (*(entity_22 + 0x10) - *(temp_14 + 0x10)) * item_24_8 + *(temp_14 + 0x10);
                            *(entity_22 + 0x14) =
                                (*(entity_22 + 0x14) - *(temp_14 + 0x14)) * item_24_8 + *(temp_14 + 0x14);
                            long double fpu_val_7_159 = *(entity_22 + 0x10);
                            long double f20_1 = g_bcabdc;
                            fpu_val_7_159 - f20_1;
                            int32_t data_110;

                            data_110 = *(&((fpu_val_7_159 < f20_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_159, f20_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_159 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(entity_22 + 0x18) = data_110 << 3;
                            entity_1 = param_2;
                            temp_val = param_4;
                            data_val = param_6;
                            context_2 = entity_1 | temp_val | data_val;
                            flagP2 = entity_1 & temp_val & data_val;
                        }
                    }

                    if (!flagP2)
                    {
                        if (context_2 & 8)
                        {
                            int32_t entity_26 = entity_1 & 8;
                            int32_t temp_17 = temp_val & 8;
                            int32_t data_121 = (data_val & 8) + entity_26 + temp_17;
                            data_121 &= 0xf8;

                            if (data_121 != 0x10)
                            {
                                void* data_123;
                                void* temp_19;
                                void* context_25;

                                if (entity_26)
                                {
                                    temp_19 = &arg_20;
                                    context_25 = &arg_3c;
                                    data_123 = &arg_4;
                                }
                                else if (!temp_17)
                                {
                                    temp_19 = &arg_4;
                                    context_25 = &arg_20;
                                    data_123 = &arg_3c;
                                }
                                else
                                {
                                    temp_19 = &arg_3c;
                                    context_25 = &arg_4;
                                    data_123 = &arg_20;
                                }

                                long double fpu_val_7_191 = (g_bcabdc - *(temp_19 + 0x10))
                                    / (*(data_123 + 0x10) - *(temp_19 + 0x10));
                                memcpy(&item_1c, data_123, 0x1c);
                                int32_t item_4_5 = 0;
                                *(data_123 + 0xc) = (*(data_123 + 0xc) - *(temp_19 + 0xc)) * fpu_val_7_191
                                    + *(temp_19 + 0xc);
                                *(data_123 + 0x10) =
                                    (*(data_123 + 0x10) - *(temp_19 + 0x10)) * fpu_val_7_191
                                    + *(temp_19 + 0x10);
                                long double fpu_val_6_174 =
                                    (*(data_123 + 0x14) - *(temp_19 + 0x14)) * fpu_val_7_191
                                    + *(temp_19 + 0x14);
                                *(data_123 + 0x18) = 0;
                                *(data_123 + 0x14) = fpu_val_6_174;
                                long double fpu_val_7_194 = item_c - *(context_25 + 0x10);
                                flagP2 = param_2 & param_4 & param_6;
                                long double fpu_val_6_177 =
                                    (g_bcabdc - *(context_25 + 0x10)) / fpu_val_7_194;
                                item_38 = param_8;
                                float* item_3c_5 = param_7;
                                memcpy(&item_58, data_123, 0x1c);
                                float item_24_11 = fpu_val_6_177;
                                float item_10_1 =
                                    (item_10 - *(context_25 + 0xc)) * item_24_11 + *(context_25 + 0xc);
                                float item_c_1 = fpu_val_7_194 * item_24_11 + *(context_25 + 0x10);
                                float item_8_1 =
                                    (item_8 - *(context_25 + 0x14)) * item_24_11 + *(context_25 + 0x14);
                                memcpy(&item_74, &item_1c, 0x1c);
                                memcpy(&item_90, context_25, 0x1c);
                                Camera_SetFieldOfView();
                            }
                            else
                            {
                                void* data_122;
                                void* entity_27;
                                void* temp_18;
                                void* source_23;

                                if (!entity_26)
                                {
                                    data_122 = &arg_4;
                                    entity_27 = &arg_4;
                                    temp_18 = &arg_20;
                                    source_23 = &arg_3c;
                                }
                                else if (temp_17)
                                {
                                    data_122 = &arg_3c;
                                    entity_27 = &arg_3c;
                                    temp_18 = &arg_4;
                                    source_23 = &arg_20;
                                }
                                else
                                {
                                    data_122 = &arg_20;
                                    entity_27 = &arg_20;
                                    temp_18 = &arg_3c;
                                    source_23 = &arg_4;
                                }

                                long double fpu_val_7_183 = (g_bcabdc - *(data_122 + 0x10))
                                    / (*(temp_18 + 0x10) - *(data_122 + 0x10));
                                *(temp_18 + 0xc) = (*(temp_18 + 0xc) - *(data_122 + 0xc)) * fpu_val_7_183
                                    + *(data_122 + 0xc);
                                *(temp_18 + 0x10) =
                                    (*(temp_18 + 0x10) - *(data_122 + 0x10)) * fpu_val_7_183
                                    + *(data_122 + 0x10);
                                long double fpu_val_6_146 =
                                    (*(temp_18 + 0x14) - *(data_122 + 0x14)) * fpu_val_7_183
                                    + *(data_122 + 0x14);
                                *(temp_18 + 0x18) = 0;
                                *(temp_18 + 0x14) = fpu_val_6_146;
                                long double fpu_val_7_187 = (g_bcabdc - *(entity_27 + 0x10))
                                    / (*(source_23 + 0x10) - *(entity_27 + 0x10));
                                *(source_23 + 0xc) = (*(source_23 + 0xc) - *(entity_27 + 0xc)) * fpu_val_7_187
                                    + *(entity_27 + 0xc);
                                *(source_23 + 0x10) =
                                    (*(source_23 + 0x10) - *(entity_27 + 0x10)) * fpu_val_7_187
                                    + *(entity_27 + 0x10);
                                long double fpu_val_6_160 =
                                    (*(source_23 + 0x14) - *(entity_27 + 0x14)) * fpu_val_7_187
