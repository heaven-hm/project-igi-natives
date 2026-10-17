// IGI native provenance: DrawBandFilter - 0x004A3940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A3940-DrawBandFilter.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DrawBandFilter.h"
float DrawBandFilter(int32_t* context) {
    int32_t context_val;
    int32_t item_210 = context_val;
    float* flagP;
    float* item_214 = flagP;
    int32_t source_val;
    int32_t item_218 = source_val;
    float* dest_val;
    float* item_21c = dest_val;
    int32_t* stack_ptr = &item_21c;
    long double fpu7 = context[8];
    long double f0 = g_bcadc0;
    fpu7 - f0;
    float result;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;
    float result_1;

    if (*(&result + 1) & 0x41)
    {
        result = g_bcadc0;
        result_1 = result;
    }
    else
        result_1 = context[8];

    long double fpu_val_7_2 = context[0xa];
    long double f1 = 0.0f;
    fpu_val_7_2 - f1;
    result = (fpu_val_7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        int32_t* data_val = g_5ca114;
        void item_1d0;
        void* item_220_1 = &item_1d0;
        int32_t* item_224 = 3;
        (*(*data_val + 0x30))(data_val, item_224, item_220_1);
        void* entity_2 = g_bcade8;
        long double fpu_val_7_5 = 1.0f / (g_bcabec * result_1);
        int32_t item_220_2 = 0;
        item_224 = 0x2f;
        float item_1a8;
        long double fpu_val_7_11 =
            (1.0f - g_bcada0 * fpu_val_7_5) * item_1a8 * (g_bcad8c - g_bcadb4) + g_bcadb4;
        *(entity_2 + 4) = 0xffffffff;
        *(g_bcad7c + 4) = 0xffffffff;
        float item_1e4_1 = fpu_val_7_11;
        *(g_bcadac + 4) = 0xffffffff;
        *(g_bcadc4 + 4) = 0xffffffff;
        int32_t* data_1 = g_5ca114;
        (*(*data_1 + 0x50))(data_1, item_224, item_220_2);
        int32_t* data_2 = g_5ca114;
        int32_t item_220_3 = 0;
        item_224 = 0x1c;
        (*(*data_2 + 0x50))(data_2, item_224, item_220_3);
        int32_t* data_3 = g_5ca114;
        int32_t item_220_4 = 0;
        item_224 = 0x1d;
        (*(*data_3 + 0x50))(data_3, item_224, item_220_4);
        int32_t* data_4 = g_5ca114;
        int32_t item_220_5 = 1;
        item_224 = 0x16;
        (*(*data_4 + 0x50))(data_4, item_224, item_220_5);
        int32_t* data_5 = g_5ca114;
        int32_t item_220_6 = 0;
        item_224 = 0x89;
        (*(*data_5 + 0x50))(data_5, item_224, item_220_6);
        int32_t* data_6 = g_5ca114;
        int32_t item_220_7 = 1;
        item_224 = 0x1a;
        (*(*data_6 + 0x50))(data_6, item_224, item_220_7);
        int32_t* data_7 = g_5ca114;
        int32_t item_220_8 = 0;
        item_224 = 0xf;
        (*(*data_7 + 0x50))(data_7, item_224, item_220_8);
        int32_t* data_8 = g_5ca114;
        int32_t item_220_9 = 4;
        item_224 = 0x17;
        (*(*data_8 + 0x50))(data_8, item_224, item_220_9);
        int32_t* data_9 = g_5ca114;
        int32_t item_220_10 = 0;
        item_224 = 7;
        (*(*data_9 + 0x50))(data_9, item_224, item_220_10);
        int32_t* data_10 = g_5ca114;
        int32_t item_220_11 = 0;
        item_224 = 0xe;
        (*(*data_10 + 0x50))(data_10, item_224, item_220_11);
        int32_t* data_11 = g_5ca114;
        int32_t item_220_12 = 1;
        item_224 = 0xc;
        int32_t item_228_12 = 0;
        int32_t entity_9 = *data_11;
        int32_t* item_22c = data_11;
        (*(entity_9 + 0x94))(item_22c, item_228_12, item_224, item_220_12);
        int32_t* data_12 = g_5ca114;
        int32_t item_220_13 = 1;
        item_224 = 0x12;
        int32_t item_228_13 = 0;
        int32_t temp_8 = *data_12;
        item_22c = data_12;
        (*(temp_8 + 0x94))(item_22c, item_228_13, item_224, item_220_13);
        int32_t* data_13 = g_5ca114;
        int32_t item_220_14 = 0;
        item_224 = 0xb;
        int32_t item_228_14 = 0;
        int32_t entity_10 = *data_13;
        item_22c = data_13;
        (*(entity_10 + 0x94))(item_22c, item_228_14, item_224, item_220_14);
        int32_t* data_14 = g_5ca114;
        int32_t item_220_15 = 2;
        item_224 = 4;
        int32_t item_228_15 = 0;
        int32_t temp_9 = *data_14;
        item_22c = data_14;
        (*(temp_9 + 0x94))(item_22c, item_228_15, item_224, item_220_15);
        int32_t* data_15 = g_5ca114;
        int32_t item_220_16 = 2;
        item_224 = 5;
        int32_t item_228_16 = 0;
        int32_t entity_11 = *data_15;
        item_22c = data_15;
        (*(entity_11 + 0x94))(item_22c, item_228_16, item_224, item_220_16);
        int32_t* data_16 = g_5ca114;
        int32_t item_220_17 = 0;
        item_224 = 6;
        int32_t item_228_17 = 0;
        int32_t temp_10 = *data_16;
        item_22c = data_16;
        (*(temp_10 + 0x94))(item_22c, item_228_17, item_224, item_220_17);
        int32_t* data_17 = g_5ca114;
        int32_t item_220_18 = 2;
        item_224 = 1;
        int32_t item_228_18 = 0;
        int32_t entity_12 = *data_17;
        item_22c = data_17;
        (*(entity_12 + 0x94))(item_22c, item_228_18, item_224, item_220_18);
        int32_t* data_18 = g_5ca114;
        int32_t item_220_19 = 2;
        item_224 = 2;
        int32_t item_228_19 = 0;
        int32_t temp_11 = *data_18;
        item_22c = data_18;
        (*(temp_11 + 0x94))(item_22c, item_228_19, item_224, item_220_19);
        int32_t* data_19 = g_5ca114;
        int32_t item_220_20 = 0;
        item_224 = 3;
        int32_t item_228_20 = 0;
        int32_t entity_13 = *data_19;
        item_22c = data_19;
        (*(entity_13 + 0x94))(item_22c, item_228_20, item_224, item_220_20);
        int32_t* data_20 = g_5ca114;
        int32_t item_220_21 = 1;
        item_224 = 1;
        int32_t temp_12 = *data_20;
        int32_t item_228_21 = 1;
        item_22c = data_20;
        (*(temp_12 + 0x94))(item_22c, item_228_21, item_224, item_220_21);
        int32_t* data_21 = g_5ca114;
        int32_t item_220_22 = 1;
        item_224 = 0x1b;
        (*(*data_21 + 0x50))(data_21, item_224, item_220_22);
        int32_t* data_22 = g_5ca114;
        int32_t item_220_23 = 9;
        item_224 = 0x13;
        (*(*data_22 + 0x50))(data_22, item_224, item_220_23);
        int32_t* data_23 = g_5ca114;
        int32_t item_220_24 = 1;
        item_224 = 0x14;
        (*(*data_23 + 0x50))(data_23, item_224, item_220_24);
        float item_1f4_1 = g_bcabc4 * 0.0500000007f;
        int64_t item_208_1 = g_bcabbc;
        long double fpu_val_7_15 = item_208_1;
        item_208_1 = fpu_val_7_15;
        float item_190 = fpu_val_7_15;
        long double fpu_val_6_3 = context[0x14];
        long double f2_1 = 45.0;
        fpu_val_6_3 - f2_1;

        if (!(*(&((fpu_val_6_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            fpu_val_7_15 = fpu_val_7_15 + item_1f4_1 * 0.5f;

        float item_18c_1 = fpu_val_7_15;
        long double fpu_val_7_16 = fpu_val_7_15 + item_1f4_1;
        result_1 = g_bcabc4;
        float flagP1 = 2.80259693e-45.0f;
        float item_1f0_2 = 2.80259693e-45.0f;
        float item_1fc_1 = result_1 + item_208_1;
        long double f3_1 = item_1fc_1;
        fpu_val_7_16 - f3_1;

        if (*(&((fpu_val_7_16 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_16, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_16 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        {
            void item_188;
            float* entity_16 = &item_188;
            long double f4_1;

            do
            {
                *entity_16 = fpu_val_7_16;
                fpu_val_7_16 = fpu_val_7_16 + item_1f4_1;
                flagP1 += 1;
                entity_16 = &entity_16[1];
                f4_1 = item_1fc_1;
                fpu_val_7_16 - f4_1;
            } while (*(&((fpu_val_7_16 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_16, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_16 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1);
            item_1f0_2 = flagP1;
        }

        (&item_190)[flagP1] = item_1fc_1;
        char data_28 = QHash_ValueGet();
        Camera_ResetMatrix(context);
        item_224 = context;
        Camera_SetFieldOfView_2(item_224);

        if (!data_28)
            QHash_ValueSet();

        int32_t item_220_26 = 0x935c10;
        item_224 = 3;
        int32_t item_228_25 = 0x10;
        item_22c = 0x10;
        Sys_OpenFileStream_8(&context[0xb], 0, 0x40, item_22c, item_228_25, item_224, item_220_26);

        if (!data_28)
            Sys_DispatchOpcode_2();

        int32_t* data_34 = g_5ca114;
        int32_t temp_15 = context[0x13];
        item_224 = nullptr;
        (*(*data_34 + 0x8c))(data_34, item_224, temp_15);
        bool flag_0_1 = g_bcad08 + 0x64 > g_bcad04;
        int32_t* data_37 = g_bcad00;
        int32_t item_20c = 0;
        int32_t item_220_28 = 0;
        int32_t entity_19 = *data_37;
        item_224 = &item_20c;

        if (flag_0_1)
        {
            int32_t item_228_28 = 0x2020;
            item_22c = data_37;
            result = (*(entity_19 + 0xc))(item_22c, item_228_28);
            stack_ptr = &item_224;
            *(&item_208_1 + 4) = 0;
            g_bcad08 = 0x64;

            if (!result)
            {
            label_4a3d0f:

                if (item_214)
                {
                    uint32_t dest_2 = 0;

                    if (flagP1 > 1)
                    {
                        long double fpu_val_7_20 = item_1fc_1 * 0.0625f;
                        void item_194;
                        int32_t* data_38 = &item_194;
                        uint32_t i_2 = flagP1 >> 1;
                        dest_2 = i_2 * 6;
                        uint32_t i;

                        do
                        {
                            item_210 = g_bcabb8;
                            int32_t item_210_1 = item_210;
                            *item_214 = item_210_1;
                            item_214[1] = *data_38;
                            float item_1ec;
                            item_214[2] = item_1ec;
                            float item_1e8;
                            item_214[3] = item_1e8;
                            item_214[5] = 0;
                            item_214[6] = 0;
                            item_210_1 = g_bcabb8;
                            float* entity_30 = &item_214[7];
                            int32_t item_210_2 = item_210_1;
                            item_214 = entity_30;
                            *entity_30 = item_210_2 + g_bcabc0;
                            item_214[1] = *data_38;
                            item_214[2] = item_1ec;
                            item_214[3] = item_1e8;
                            item_214[5] = g_bcabc0 * 0.0625f;
                            item_214[6] = 0;
                            item_210_2 = g_bcabb8;
                            float* entity_37 = &item_214[7];
                            int32_t item_210_3 = item_210_2;
                            item_214 = entity_37;
                            *entity_37 = item_210_3 + g_bcabc0;
                            item_214[1] = data_38[1];
                            item_214[2] = item_1ec;
                            item_214[3] = item_1e8;
                            item_214[5] = g_bcabc0 * 0.0625f;
                            item_214[6] = fpu_val_7_20;
                            item_210_3 = g_bcabb8;
                            float* entity_44 = &item_214[7];
                            int32_t item_210_4 = item_210_3;
                            item_214 = entity_44;
                            *entity_44 = item_210_4;
                            item_214[1] = data_38[1];
                            data_38 = &data_38[2];
                            item_214[2] = item_1ec;
                            item_214[3] = item_1e8;
                            item_214[5] = 0;
                            item_214[6] = fpu_val_7_20;
                            item_210_4 = g_bcabb8;
                            int32_t item_210_5 = item_210_4;
                            float* entity_51 = &item_214[7];
                            item_214 = entity_51;
                            *entity_51 = item_210_5 + g_bcabc0;
                            item_214[1] = data_38[-1];
                            item_214[2] = item_1ec;
                            item_214[3] = item_1e8;
                            item_214[5] = g_bcabc0 * 0.0625f;
                            item_214[6] = fpu_val_7_20;
                            item_210_5 = g_bcabb8;
                            float* entity_58 = &item_214[7];
                            item_210 = item_210_5;
                            item_214 = entity_58;
                            *entity_58 = item_210;
                            item_214[1] = data_38[-2];
                            item_214[2] = item_1ec;
                            item_214[3] = item_1e8;
                            item_214[5] = 0;
                            item_214[6] = 0;
                            i = i_2;
                            i_2 -= 1;
                            item_214 = &item_214[7];
                        } while (i != 1);
                        float item_1f8;
                        flagP1 = item_1f8;
                    }

                    int32_t* data_39 = g_bcad00;
                    (*(*data_39 + 0x10))(data_39);
                    int32_t* data_40 = g_5ca114;
                    int32_t item_228_30 = 0;
                    item_22c = dest_2;
                    (*(*data_40 + 0x7c))(data_40, 4, g_bcad00, *(&item_208_1 + 4), item_22c,
                        item_228_30);
                    *(&item_208_1 + 3) = QHash_ValueGet();
                    Camera_UpdateTransform_2(context);
                    item_22c = context;
                    Camera_SetFieldOfView_2(item_22c);

                    if (!*(&item_208_1 + 3))
                        QHash_ValueSet();

                    int32_t item_228_32 = 0x935c10;
                    item_22c = 3;
                    Sys_OpenFileStream_8(&context[0xb], 0, 0x40, 0x10, 0x10, item_22c, item_228_32);

                    if (!*(&item_208_1 + 3))
                        Sys_DispatchOpcode_2();

                    int32_t* data_47 = g_5ca114;
                    int32_t temp_23 = context[0x13];
                    item_22c = nullptr;
                    (*(*data_47 + 0x8c))(data_47, item_22c, temp_23);
                    bool flag_4_1 = g_bcad08 + 0x64 > g_bcad04;
                    int32_t* data_50 = g_bcad00;
                    item_214 = nullptr;
                    int32_t item_228_34 = 0;
                    int32_t entity_69 = *data_50;
                    item_22c = &item_214;
                    int32_t dest_4;

                    if (flag_4_1)
                    {
                        result = (*(entity_69 + 0xc))(data_50, 0x2020);
                        stack_ptr = &item_22c;
                        dest_4 = 0;
                        g_bcad08 = 0x64;

                        if (!result)
                        {
                        label_4a406f:

                            if (item_21c)
                            {
                                uint32_t source_3 = 0;

                                if (flagP1 > 0)
                                {
                                    long double fpu_val_7_23 = *(&item_208_1 + 4) * 0.0625f;
                                    void item_1a0;
                                    int32_t* data_51 = &item_1a0;
                                    uint32_t i_3 = (flagP1 + 1) >> 1;
                                    source_3 = i_3 * 6;
                                    uint32_t i_1;

                                    do
                                    {
                                        item_218 = g_bcabb8;
                                        int32_t item_218_1 = item_218;
                                        *item_21c = item_218_1;
                                        item_21c[1] = *data_51;
                                        item_21c[2] = item_1f4_1;
                                        item_21c[3] = item_1f0_2;
                                        item_21c[5] = 0;
                                        item_21c[6] = 0;
                                        item_218_1 = g_bcabb8;
                                        float* entity_80 = &item_21c[7];
                                        int32_t item_218_2 = item_218_1;
                                        item_21c = entity_80;
                                        *entity_80 = item_218_2 + g_bcabc0;
                                        item_21c[1] = *data_51;
                                        item_21c[2] = item_1f4_1;
                                        item_21c[3] = item_1f0_2;
                                        item_21c[5] = g_bcabc0 * 0.0625f;
                                        item_21c[6] = 0;
                                        item_218_2 = g_bcabb8;
                                        float* entity_87 = &item_21c[7];
                                        int32_t item_218_3 = item_218_2;
                                        item_21c = entity_87;
                                        *entity_87 = item_218_3 + g_bcabc0;
                                        item_21c[1] = data_51[1];
                                        item_21c[2] = item_1f4_1;
                                        item_21c[3] = item_1f0_2;
                                        item_21c[5] = g_bcabc0 * 0.0625f;
                                        item_21c[6] = fpu_val_7_23;
                                        item_218_3 = g_bcabb8;
                                        float* entity_94 = &item_21c[7];
                                        int32_t item_218_4 = item_218_3;
                                        item_21c = entity_94;
                                        *entity_94 = item_218_4;
                                        item_21c[1] = data_51[1];
                                        data_51 = &data_51[2];
                                        item_21c[2] = item_1f4_1;
                                        item_21c[3] = item_1f0_2;
                                        item_21c[5] = 0;
                                        item_21c[6] = fpu_val_7_23;
                                        item_218_4 = g_bcabb8;
                                        int32_t item_218_5 = item_218_4;
                                        float* entity_101 = &item_21c[7];
                                        item_21c = entity_101;
                                        *entity_101 = item_218_5 + g_bcabc0;
                                        item_21c[1] = data_51[-1];
                                        item_21c[2] = item_1f4_1;
                                        item_21c[3] = item_1f0_2;
                                        item_21c[5] = g_bcabc0 * 0.0625f;
                                        item_21c[6] = fpu_val_7_23;
                                        item_218_5 = g_bcabb8;
                                        float* entity_108 = &item_21c[7];
                                        item_218 = item_218_5;
                                        item_21c = entity_108;
                                        *entity_108 = item_218;
                                        item_21c[1] = data_51[-2];
                                        item_21c[2] = item_1f4_1;
                                        item_21c[3] = item_1f0_2;
                                        item_21c[5] = 0;
                                        item_21c[6] = 0;
                                        i_1 = i_3;
                                        i_3 -= 1;
                                        item_21c = &item_21c[7];
                                    } while (i_1 != 1);
                                }

                                int32_t* data_52 = g_bcad00;
                                (*(*data_52 + 0x10))(data_52);
                                int32_t* data_53 = g_5ca114;
                                result =
                                    (*(*data_53 + 0x7c))(data_53, 4, g_bcad00, dest_4, source_3, 0);
                                stack_ptr = &item_22c;
                            }
                        }
                    }
                    else
                    {
                        result = (*(entity_69 + 0xc))(data_50, 0x1020);
                        stack_ptr = &item_22c;
                        int32_t entity_70 = g_bcad08;
                        float* source_2 = item_21c;
                        dest_4 = entity_70;
                        g_bcad08 = entity_70 + 0x64;
                        item_21c = &source_2[entity_70 * 7];

                        if (!result)
                            goto label_4a406f;
                    }
                }
            }
        }
        else
        {
            int32_t item_228_27 = 0x1020;
            item_22c = data_37;
            result = (*(entity_19 + 0xc))(item_22c, item_228_27);
            stack_ptr = &item_224;
            int32_t entity_20 = g_bcad08;
            float* dest_1 = item_214;
            *(&item_208_1 + 4) = entity_20;
            g_bcad08 = entity_20 + 0x64;
            item_214 = &dest_1[entity_20 * 7];

            if (!result)
                goto label_4a3d0f;
        }
    }

❓️❓️    *stack_ptr;
    stack_ptr[1];
    stack_ptr[2];
    stack_ptr[3];
    return result;
}
