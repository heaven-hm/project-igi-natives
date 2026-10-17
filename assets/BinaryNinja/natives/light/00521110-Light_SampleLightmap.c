// IGI native provenance: Light_SampleLightmap - 0x00521110 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00521110-Light_SampleLightmap.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_SampleLightmap.h"
float* Light_SampleLightmap(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, void* param_5, float* param_6, int32_t param_7, float* param_8, int32_t param_9, float* param_10, float* param_11, float* param_12, float* param_13, int32_t param_14, float* param_15, int32_t param_16, int32_t param_17)

{
    float* source_val = param_11;
    float* dest_val = param_12;
    long double fpu7 = source_val[1];
    long double f1 = dest_val[1];
    fpu7 - f1;
    int32_t item_24 = 0;
    long double fpu_val_7_1;
    long double f3_1;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        fpu_val_7_1 = source_val[1];
        f3_1 = param_13[1];
        fpu_val_7_1 - f3_1;
    }

    float* result_1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41 || *(&((fpu_val_7_1 < f3_1 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe) + 1)
        & 0x41)
    {
        long double fpu_val_7_2 = dest_val[1];
        long double f2_1 = param_13[1];
        fpu_val_7_2 - f2_1;

        if (*(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            param_11 = param_13;
            result_1 = param_16;
        }
        else
        {
            param_11 = dest_val;
            result_1 = param_15;
        }
    }
    else
    {
        param_11 = source_val;
        result_1 = param_14;
    }

    long double fpu_val_7_3 = source_val[1];
    long double f4 = dest_val[1];
    fpu_val_7_3 - f4;
    long double fpu_val_7_4;
    long double f6_1;

    if (*(&((fpu_val_7_3 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f4 ? 1 : 0) << 0xe) + 1) & 1)
    {
        fpu_val_7_4 = source_val[1];
        f6_1 = param_13[1];
        fpu_val_7_4 - f6_1;
    }

    float* item_20;
    float* temp_2;
    float* context_val;

    if (!(*(&((fpu_val_7_3 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f4 ? 1 : 0) << 0xe) + 1) & 1) || !(*(&((fpu_val_7_4 < f6_1 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_7_4, f6_1) ? 1 : 0) << 0xa | (fpu_val_7_4 == f6_1 ? 1 : 0) << 0xe) + 1)
        & 1))
    {
        long double fpu_val_7_5 = dest_val[1];
        long double f5_1 = param_13[1];
        fpu_val_7_5 - f5_1;

        if (!(*(&((fpu_val_7_5 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            temp_2 = param_16;
            context_val = param_13;
            item_20 = context_val;
        }
        else
        {
            temp_2 = param_15;
            context_val = dest_val;
            item_20 = context_val;
        }
    }
    else
    {
        temp_2 = param_14;
        context_val = source_val;
        item_20 = context_val;
    }

    float* result = param_11;
    long double fpu_val_7_6 = context_val[1];
    long double f7 = result[1];
    fpu_val_7_6 - f7;
    result = (fpu_val_7_6 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f7) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f7 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        float* item_58_1;
        float* entity_1;

        if (source_val != context_val && source_val != param_11)
        {
            entity_1 = param_14;
            dest_val = source_val;
            item_58_1 = dest_val;
        }
        else if (dest_val == context_val || dest_val == param_11)
        {
            dest_val = param_13;
            entity_1 = param_16;
            item_58_1 = dest_val;
        }
        else
        {
            entity_1 = param_15;
            item_58_1 = dest_val;
        }

        int32_t item_7c_1 = dest_val[1];
        long double fpu_val_7_9 = (dest_val[1] - context_val[1]) / (param_11[1] - context_val[1]);
        float item_80 = (*param_11 - *context_val) * fpu_val_7_9 + *context_val;
        result = result_1;
        float item_78_1 = (param_11[2] - context_val[2]) * fpu_val_7_9 + context_val[2];
        float item_88 = (*result - *temp_2) * fpu_val_7_9 + *temp_2;
        float item_84_1 = (result[1] - temp_2[1]) * fpu_val_7_9 + temp_2[1];
        long double fpu_val_7_11 = *dest_val;
        long double f8_1 = item_80;
        fpu_val_7_11 - f8_1;
        result = (fpu_val_7_11 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f8_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f8_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double fpu_val_7_12 = *dest_val;
            long double f9_1 = item_80;
            fpu_val_7_12 - f9_1;
            result = (fpu_val_7_12 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_12, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_7_12 == f9_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                param_15 = dest_val;
                param_13 = &item_80;
                param_12 = &item_88;
                goto label_52128e;
            }
        }
        else
        {
            param_12 = entity_1;
            param_13 = dest_val;
            param_15 = &item_80;
            entity_1 = &item_88;
        label_52128e:
            void* entity_2 = param_5 - 1;
            void* entity_4 = param_6 - 1;
            int32_t eflags_1;
            int32_t data_4;
            data_4 = __bsr_gprv_memv(param_5);
            long double fpu_val_7_13 = context_val[1];
            long double f10_1 = 0.0f;
            fpu_val_7_13 - f10_1;
            long double fpu_val_7_14 = context_val[1];
            int32_t source_2;

            source_2 = *(&((fpu_val_7_13 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_13, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_7_13 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 ? fpu_val_7_14
                : fpu_val_7_14 + 0.999989986f;

            long double fpu_val_7_16 = dest_val[1];
            long double f11_1 = 0.0f;
            fpu_val_7_16 - f11_1;
            long double fpu_val_7_17 = dest_val[1];
            param_14 = source_2;
            int64_t item_c_3;
            void* data_6;

            if (*(&((fpu_val_7_16 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_16, f11_1) ? 1 : 0) << 0xa
                | (fpu_val_7_16 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                item_c_3 = fpu_val_7_17 - 0.999989986f;
                data_6 = item_c_3;
            }
            else
            {
                item_c_3 = fpu_val_7_17;
                data_6 = item_c_3;
            }

            float* data_7 = data_6 + 1;

            if (source_2 < param_8)
            {
                source_2 = param_8;
                param_14 = source_2;
            }

            if (data_7 > param_10)
                data_7 = param_10;

            double item_60;
            double item_54;
            float* entity_13;
            long double fpu_val_6_36;
            long double fpu_val_7_25;

            if (source_2 >= data_7)
            {
                fpu_val_7_25 = item_c_3;
                fpu_val_6_36 = item_c_3;
                entity_13 = param_12;
            }
            else
            {
                item_24 = 1;
                long double fpu_val_7_20 = *param_15 - *param_13;
                long double fpu_val_6_20 = dest_val[1] - context_val[1];
                long double fpu_val_5_3;

                if (param_13 != dest_val)
                    fpu_val_5_3 = (*param_11 - *context_val) / (param_11[1] - context_val[1]);
                else
                    fpu_val_5_3 = (*param_13 - *context_val) / fpu_val_6_20;

                item_60 = fpu_val_5_3;
                long double fpu_val_5_8;

                if (param_15 != dest_val)
                    fpu_val_5_8 = (*param_11 - *context_val) / (param_11[1] - context_val[1]);
                else
                    fpu_val_5_8 = (*param_15 - *context_val) / fpu_val_6_20;

                item_54 = fpu_val_5_8;
                entity_13 = param_12;
                double item_6c_1 = (param_13[2] - item_20[2]) / fpu_val_6_20;
                double item_74_1 = (*entity_13 - *temp_2) / fpu_val_6_20;
                double item_1c_1 = (entity_13[1] - temp_2[1]) / fpu_val_6_20;
                double item_3c_1 = (param_15[2] - param_13[2]) / fpu_val_7_20;
                double item_48_1 = (*entity_1 - *entity_13) / fpu_val_7_20;
                int32_t context_5 = source_2 * param_3;
                param_6 = data_7 - source_2;
                double item_34_1 = (entity_1[1] - entity_13[1]) / fpu_val_7_20;
                long double fpu_val_7_23 = param_14 - item_20[1];
                double item_14_1 = fpu_val_7_23;
                fpu_val_7_25 = fpu_val_7_23 * item_60 + *item_20;
                long double fpu_val_6_33 = item_14_1 * item_54 + *item_20;
                long double fpu_val_5_22 = item_14_1 * item_6c_1 + item_20[2];
                double item_2c_1 = item_14_1 * item_74_1 + *temp_2;
                double item_14_2 = item_14_1 * item_1c_1 + temp_2[1];
                bool flag_2_1;

                do
                {
                    long double f14_1 = 0.0;
                    fpu_val_7_25 - f14_1;
                    int32_t dest_2;

                    dest_2 = *(&((fpu_val_7_25 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_25, f14_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_25 == f14_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1 ? fpu_val_7_25
                        : fpu_val_7_25 + 0.99998998641967773;

                    long double f15_1 = 0.0;
                    fpu_val_6_33 - f15_1;
                    param_14 = dest_2;
                    int32_t data_9;

                    data_9 = *(&((fpu_val_6_33 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_33, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_33 == f15_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1
                        ? fpu_val_6_33 - 0.99998998641967773 : fpu_val_6_33;

                    int32_t data_10 = data_9 + 1;

                    if (dest_2 < param_7)
                    {
                        dest_2 = param_7;
                        param_14 = dest_2;
                    }

                    if (data_10 > param_9)
                        data_10 = param_9;

                    long double fpu_val_2_3;
                    long double fpu_val_3_3;
                    long double fpu_val_4_20;

                    if (!param_17)
                    {
                        if (dest_2 < data_10)
                        {
                            int32_t temp_11 = (dest_2 + context_5) << 2;
                            long double fpu_val_4_23 = param_14 - fpu_val_7_25;
                            float* source_4 = temp_11 + param_2;
                            double item_c_11 = fpu_val_4_23;
                            int32_t* temp_13 = temp_11 - source_4 + context;
                            int32_t i_5 = data_10 - dest_2;
                            fpu_val_4_20 = fpu_val_4_23 * item_3c_1 + fpu_val_5_22;
                            fpu_val_3_3 = item_c_11 * item_48_1 + item_2c_1;
                            fpu_val_2_3 = item_c_11 * item_34_1 + item_14_2;
                            int32_t i;

                            do
                            {
                                long double fpu_val_1_5 = *source_4;
                                fpu_val_4_20 - fpu_val_1_5;

                                if (!(*(&((fpu_val_4_20 < fpu_val_1_5 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_4_20, fpu_val_1_5) ? 1 : 0) << 0xa
                                    | (fpu_val_4_20 == fpu_val_1_5 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
                                {
                                    long double fpu_val_1_7 = 1.0 / fpu_val_4_20;
                                    *(temp_13 + source_4) = *(param_4 + (((((fpu_val_1_7 * fpu_val_2_3) & entity_4)
                                        << (data_4 & 0x1f)) + ((fpu_val_1_7 * fpu_val_3_3) & entity_2)) << 2));
                                    *source_4 = fpu_val_4_20;
                                }

                                fpu_val_4_20 = fpu_val_4_20 + item_3c_1;
                                fpu_val_3_3 = fpu_val_3_3 + item_48_1;
                                fpu_val_2_3 = fpu_val_2_3 + item_34_1;
                                source_4 = &source_4[1];
                                i = i_5;
                                i_5 -= 1;
                            } while (i != 1);
                            entity_13 = param_12;
                        }
                    }
                    else if (dest_2 < data_10)
                    {
                        int32_t temp_7 = (dest_2 + context_5) << 2;
                        long double fpu_val_4_18 = param_14 - fpu_val_7_25;
                        float* source_3 = temp_7 + param_2;
                        double item_c_8 = fpu_val_4_18;
                        int32_t* temp_9 = temp_7 - source_3 + context;
                        int32_t i_4 = data_10 - dest_2;
                        fpu_val_4_20 = fpu_val_4_18 * item_3c_1 + fpu_val_5_22;
                        fpu_val_3_3 = item_c_8 * item_48_1 + item_2c_1;
                        fpu_val_2_3 = item_c_8 * item_34_1 + item_14_2;
                        int32_t i_1;

                        do
                        {
                            long double fpu_val_1_1 = *source_3;
                            fpu_val_4_20 - fpu_val_1_1;

                            if (*(&((fpu_val_4_20 < fpu_val_1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_4_20, fpu_val_1_1) ? 1 : 0) << 0xa
                                | (fpu_val_4_20 == fpu_val_1_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                            {
                                *(temp_9 + source_3) = *(param_4 + ((((fpu_val_2_3 & entity_4) << (data_4 & 0x1f))
                                    + (fpu_val_3_3 & entity_2)) << 2));
                                *source_3 = fpu_val_4_20;
                            }

                            fpu_val_4_20 = fpu_val_4_20 + item_3c_1;
                            fpu_val_3_3 = fpu_val_3_3 + item_48_1;
                            fpu_val_2_3 = fpu_val_2_3 + item_34_1;
                            source_3 = &source_3[1];
                            i_1 = i_4;
                            i_4 -= 1;
                        } while (i_1 != 1);
                        entity_13 = param_12;
                    }
                    fpu_val_7_25 = fpu_val_7_25 + item_60;
                    fpu_val_6_33 = fpu_val_6_33 + item_54;
                    fpu_val_5_22 = fpu_val_5_22 + item_6c_1;
                    context_5 += param_3;
                    flag_2_1 = param_6 != 1;
                    param_6 -= 1;
                    item_2c_1 = item_2c_1 + item_74_1;
                    item_14_2 = item_14_2 + item_1c_1;
                } while (flag_2_1);
                item_c_3 = fpu_val_6_33;
                fpu_val_6_36 = fpu_val_6_33;
            }

            long double fpu_val_5_32 = item_58_1[1];
            long double f12_1 = 0.0f;
            fpu_val_5_32 - f12_1;
            long double fpu_val_5_33 = item_58_1[1];

            param_14 = *(&((fpu_val_5_32 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_32, f12_1) ? 1 : 0) << 0xa
                | (fpu_val_5_32 == f12_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1 ? fpu_val_5_33
                : fpu_val_5_33 + 0.999989986f;

            long double fpu_val_5_35 = param_11[1];
            long double f13_1 = 0.0f;
            fpu_val_5_35 - f13_1;
            long double fpu_val_5_36 = param_11[1];
            int32_t dest_3;

            dest_3 = *(&((fpu_val_5_35 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_35, f13_1) ? 1 : 0) << 0xa
                | (fpu_val_5_35 == f13_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1 ? fpu_val_5_36 - 0.999989986f
                : fpu_val_5_36;

            float* result_2 = dest_3 + 1;

            if (param_14 < param_8)
                param_14 = param_8;

            result = param_10;

            if (result_2 > result)
                result_2 = result;

            if (param_14 < result_2)
            {
                float* context_7 = param_15;
                long double fpu_val_5_39 = *context_7 - *param_13;
                long double fpu_val_4_32 = param_11[1] - item_58_1[1];

                if (param_13 != item_58_1)
                {
                    if (!item_24)
                        item_60 = (*param_11 - *item_20) / (param_11[1] - item_20[1]);

                    context_7 = param_15;
                }
                else
                    item_60 = (*param_11 - *param_13) / fpu_val_4_32;

                if (context_7 != item_58_1)
                {
                    if (!item_24)
                        item_54 = (*param_11 - *item_20) / (param_11[1] - item_20[1]);

                    context_7 = param_15;
                }
                else
                    item_54 = (*param_11 - *context_7) / fpu_val_4_32;

                double item_6c_2 = (param_11[2] - param_13[2]) / fpu_val_4_32;
                double item_74_2 = (*result_1 - *entity_13) / fpu_val_4_32;
                double item_1c_6 = (result_1[1] - entity_13[1]) / fpu_val_4_32;
                double item_3c_2 = (context_7[2] - param_13[2]) / fpu_val_5_39;
                double item_48_2 = (*entity_1 - *entity_13) / fpu_val_5_39;
                double item_34_2 = (entity_1[1] - entity_13[1]) / fpu_val_5_39;
                double item_14_3 = param_14 - item_58_1[1];

                if (param_13 == item_58_1 || !item_24)
                {
                    fpu_val_7_25 = item_14_3 * item_60 + *param_13;
                    fpu_val_6_36 = item_c_3;
                }

                if (context_7 == item_58_1 || !item_24)
                    fpu_val_6_36 = item_14_3 * item_54 + *context_7;

                long double fpu_val_5_45 = item_14_3 * item_6c_2 + param_13[2];
                result = param_14;
                float* context_13 = result * param_3;
                double item_2c_2 = item_14_3 * item_74_2 + *entity_13;
                param_15 = context_13;
                param_8 = result_2 - result;
                double item_14_4 = item_14_3 * item_1c_6 + entity_13[1];
                bool flag_4_1;

                do
                {
                    long double f19_1 = 0.0;
                    fpu_val_7_25 - f19_1;
                    int32_t dest_5;

                    dest_5 = *(&((fpu_val_7_25 < f19_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_25, f19_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_25 == f19_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1 ? fpu_val_7_25
                        : fpu_val_7_25 + 0.99998998641967773;

                    long double f20_1 = 0.0;
                    fpu_val_6_36 - f20_1;
                    param_14 = dest_5;
                    int32_t data_31;

                    data_31 = *(&((fpu_val_6_36 < f20_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_36, f20_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_36 == f20_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1
                        ? fpu_val_6_36 - 0.99998998641967773 : fpu_val_6_36;

                    int32_t data_32 = data_31 + 1;

                    if (dest_5 < param_7)
                    {
                        dest_5 = param_7;
                        param_14 = dest_5;
                    }

                    if (data_32 > param_9)
                        data_32 = param_9;

                    long double fpu_val_2_25;
                    long double fpu_val_3_32;
                    long double fpu_val_4_58;

                    if (!param_17)
                    {
                        if (dest_5 < data_32)
                        {
                            int32_t temp_26 = (dest_5 + context_13) << 2;
                            long double fpu_val_4_61 = param_14 - fpu_val_7_25;
                            float* source_7 = temp_26 + param_2;
                            double item_c_21 = fpu_val_4_61;
                            int32_t* temp_28 = temp_26 - source_7 + context;
                            fpu_val_4_58 = fpu_val_4_61 * item_3c_2 + fpu_val_5_45;
                            int32_t i_7 = data_32 - dest_5;
                            fpu_val_3_32 = item_c_21 * item_48_2 + item_2c_2;
                            fpu_val_2_25 = item_c_21 * item_34_2 + item_14_4;
                            int32_t i_2;

                            do
                            {
                                long double fpu_val_1_14 = *source_7;
                                fpu_val_4_58 - fpu_val_1_14;

                                if (!(*(&((fpu_val_4_58 < fpu_val_1_14 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_4_58, fpu_val_1_14) ? 1 : 0) << 0xa
                                    | (fpu_val_4_58 == fpu_val_1_14 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
                                {
                                    long double fpu_val_1_16 = 1.0 / fpu_val_4_58;
                                    context_13 = param_15;
                                    *(temp_28 + source_7) = *(param_4 + (((((fpu_val_1_16 * fpu_val_2_25)
                                        & entity_4) << (data_4 & 0x1f))
                                        + ((fpu_val_1_16 * fpu_val_3_32) & entity_2)) << 2));
                                    *source_7 = fpu_val_4_58;
                                }

                                fpu_val_4_58 = fpu_val_4_58 + item_3c_2;
                                fpu_val_3_32 = fpu_val_3_32 + item_48_2;
                                fpu_val_2_25 = fpu_val_2_25 + item_34_2;
                                source_7 = &source_7[1];
                                i_2 = i_7;
                                i_7 -= 1;
                            } while (i_2 != 1);
                        }
                    }
                    else if (dest_5 < data_32)
                    {
                        int32_t temp_22 = (dest_5 + context_13) << 2;
                        long double fpu_val_4_56 = param_14 - fpu_val_7_25;
                        float* source_6 = temp_22 + param_2;
                        double item_c_18 = fpu_val_4_56;
                        int32_t* temp_24 = temp_22 - source_6 + context;
                        void* i_6 = data_32 - dest_5;
                        fpu_val_4_58 = fpu_val_4_56 * item_3c_2 + fpu_val_5_45;
                        fpu_val_3_32 = item_c_18 * item_48_2 + item_2c_2;
                        fpu_val_2_25 = item_c_18 * item_34_2 + item_14_4;
                        void* i_3;

                        do
                        {
                            long double fpu_val_1_10 = *source_6;
                            fpu_val_4_58 - fpu_val_1_10;

                            if (*(&((fpu_val_4_58 < fpu_val_1_10 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_4_58, fpu_val_1_10) ? 1 : 0) << 0xa
                                | (fpu_val_4_58 == fpu_val_1_10 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                            {
                                *(temp_24 + source_6) = *(param_4 + ((((fpu_val_2_25 & entity_4)
                                    << (data_4 & 0x1f)) + (fpu_val_3_32 & entity_2)) << 2));
                                *source_6 = fpu_val_4_58;
                            }

                            fpu_val_4_58 = fpu_val_4_58 + item_3c_2;
                            fpu_val_3_32 = fpu_val_3_32 + item_48_2;
                            fpu_val_2_25 = fpu_val_2_25 + item_34_2;
                            source_6 = &source_6[1];
                            i_3 = i_6;
                            i_6 -= 1;
                        } while (i_3 != 1);
                    }
                    fpu_val_7_25 = fpu_val_7_25 + item_60;
                    fpu_val_6_36 = fpu_val_6_36 + item_54;
                    fpu_val_5_45 = fpu_val_5_45 + item_6c_2;
                    context_13 += param_3;
                    result = param_8 - 1;
                    flag_4_1 = param_8 != 1;
                    param_15 = context_13;
                    param_8 = result;
                    item_2c_2 = item_2c_2 + item_74_2;
                    item_14_4 = item_14_4 + item_1c_6;
                } while (flag_4_1);
            }
        }
    }

    return result;
}
