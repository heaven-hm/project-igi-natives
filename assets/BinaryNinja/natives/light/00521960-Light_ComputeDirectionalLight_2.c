// Original IGI.EXE function: Light_ComputeDirectionalLight_2 (VA 0x00521960; static CFG gate PASS, CFG score 1.000).
#include "Light_ComputeDirectionalLight_2.h"
float* Light_ComputeDirectionalLight_2(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, void* param_5, float* param_6, int32_t param_7, float* param_8, int32_t param_9, float* param_10, float param_11, float param_12, float param_13, float param_14, float* param_15, float* param_16, float* param_17, int32_t param_18, float* param_19, int32_t param_20, int32_t param_21)

{
    long double fpu7 = param_15[2];
    long double f2 = 0.0f;
    fpu7 - f2;

    if (!(*(&((fpu7 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa
        | (fpu7 == f2 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_1 = param_16[2];
        long double f3_1 = 0.0f;
        fpu_val_7_1 - f3_1;

        if (!(*(&((fpu_val_7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double fpu_val_7_2 = param_17[2];
            long double f5_1 = 0.0f;
            fpu_val_7_2 - f5_1;

            if (!(*(&((fpu_val_7_2 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_2, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
                return Light_SampleLightmap(context, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                    param_15, param_16, param_17, param_18, param_19, param_20, param_21);
        }
    }

    float item_38 = *param_15;
    int32_t entity_5 = param_15[2];
    int32_t item_34 = param_15[1];
    float data_11 = *param_16;
    int32_t item_30 = entity_5;
    int32_t entity_6 = param_16[1];
    float item_2c = data_11;
    int32_t item_28 = entity_6;
    int32_t item_24 = param_16[2];
    int32_t data_13 = param_17[1];
    float item_20 = *param_17;
    int32_t item_1c = data_13;
    int32_t item_18 = param_17[2];
    int32_t i_6 = 3;
    int32_t temp_4 = *param_18;
    int32_t item_58[0x2];
    item_58[1] = *(param_18 + 4);
    item_58[0] = temp_4;
    int32_t temp_5 = param_19[1];
    float item_50 = *param_19;
    int32_t item_4c = temp_5;
    int32_t temp_6 = *(param_20 + 4);
    int32_t item_48 = *param_20;
    int32_t item_44 = temp_6;
    int32_t item_64;
    int32_t* entity_11 = &item_64;
    int32_t* temp_7 = &item_30;
    int32_t i;

    do
    {
        long double fpu_val_7_3 = *temp_7;
        long double f4_1 = 0.0f;
        fpu_val_7_3 - f4_1;
        int32_t data_17;

        data_17 = !(*(&((fpu_val_7_3 < f4_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_3, f4_1) ? 1 : 0) << 0xa | (fpu_val_7_3 == f4_1 ? 1 : 0) << 0xe) + 1)
            & 0x41) ? 0 : 1;

        *entity_11 = data_17;
        temp_7 = &temp_7[3];
        entity_11 = &entity_11[1];
        i = i_6;
        i_6 -= 1;
    } while (i != 1);
    void* item_60;
    int32_t item_5c;
    float* result = item_60 + item_5c + item_64;

    if (result == 3)
        return result;

    int32_t saved_target;
    int32_t item_68;

    if (result == 2)
    {
        int32_t source_1 = 0;
        int32_t* data_21 = &item_64;

        while (*data_21)
        {
            source_1 += 1;
            data_21 = &data_21[1];

            if (source_1 >= 3)
            {
                source_1 = item_68;
                break;
            }
        }

        int32_t i_1 = 0;
        int32_t (* temp_9)[0x2] = &item_58;
        int32_t* data_22 = &item_30;

        do
        {
            if (i_1 != source_1)
            {
                long double fpu_val_7_5 = *data_22 + 4.09600019f;
                *data_22 = fpu_val_7_5;
                long double fpu_val_7_6 = 4.09600019f - (&saved_target)[source_1 * 3 + 0x12];
                long double fpu_val_6_4 = fpu_val_7_5 - (&saved_target)[source_1 * 3 + 0x12];
                *data_22 = 0x4083126f;
                long double fpu_val_7_7 = fpu_val_7_6 / fpu_val_6_4;
                data_22[-2] = (data_22[-2] - (&saved_target)[source_1 * 3 + 0x10]) * fpu_val_7_7
                    + (&saved_target)[source_1 * 3 + 0x10];
                data_22[-1] = (data_22[-1] - (&saved_target)[source_1 * 3 + 0x11]) * fpu_val_7_7
                    + (&saved_target)[source_1 * 3 + 0x11];
                *temp_9 = (*temp_9 - (&item_58)[source_1][0]) * fpu_val_7_7 + (&item_58)[source_1][0];
                item_54;
                (*temp_9)[1] = ((*temp_9)[1] - *(&item_54 + (source_1 << 3))) * fpu_val_7_7
                    + *(&item_54 + (source_1 << 3));
            }

            i_1 += 1;
            data_22 = &data_22[3];
            temp_9 = &temp_9[1];
        } while (i_1 < 3);

        int32_t (* entity_15)[0x2] = &item_58;
        int32_t* data_23 = &item_34;
        int32_t i_4 = 3;
        int32_t i_2;

        do
        {
            long double fpu_val_7_10 = 1.0f / data_23[1];
            data_23 = &data_23[3];
            entity_15 = &entity_15[1];
            i_2 = i_4;
            i_4 -= 1;
            float item_6c_1 = fpu_val_7_10;
            data_23[-2] = fpu_val_7_10;
            data_23[-4] = item_6c_1 * data_23[-4] * param_13 + param_11;
            data_23[-3] = item_6c_1 * data_23[-3] * param_14 + param_12;
            entity_15[-1][0] = item_6c_1 * entity_15[-1][0];
            (*entity_15)[-1] = item_6c_1 * (*entity_15)[-1];
        } while (i_2 != 1);
        return Light_SampleLightmap(context, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, &item_38,
            &item_2c, &item_20, &item_58, &item_50, &item_48, param_21);
    }

    int32_t source_2 = 0;
    int32_t* data_29 = &item_64;
    int32_t context_1;

    while (true)
    {
        if (*data_29)
        {
            context_1 = source_2;
            break;
        }

        source_2 += 1;
        data_29 = &data_29[1];

        if (source_2 >= 3)
        {
            context_1 = item_68;
            break;
        }
    }

    int32_t f1_1 = (source_2 + 1) % 3;
    int32_t f1_2 = (source_2 + 2) % 3;
    float item_14 = (&saved_target)[context_1 * 3 + 0x10];
    float temp_20 = (&saved_target)[context_1 * 3 + 0x11];
    float entity_22 = (&saved_target)[context_1 * 3 + 0x12];
    float item_40 = (&saved_target)[context_1 * 2 + 8];
    float entity_23 = (&saved_target)[context_1 * 2 + 9];
    long double fpu_val_7_24 = (&saved_target)[context_1 * 3 + 0x12] + 4.09600019f;
    (&saved_target)[context_1 * 3 + 0x12] = fpu_val_7_24;
    long double fpu_val_7_25 = 4.09600019f - (&saved_target)[f1_1 * 3 + 0x12];
    long double fpu_val_6_24 = fpu_val_7_24 - (&saved_target)[f1_1 * 3 + 0x12];
    (&saved_target)[context_1 * 3 + 0x12] = 0x4083126f;
    long double fpu_val_7_26 = fpu_val_7_25 / fpu_val_6_24;
    (&saved_target)[context_1 * 3 + 0x10] =
        ((&saved_target)[context_1 * 3 + 0x10] - (&saved_target)[f1_1 * 3 + 0x10]) * fpu_val_7_26
        + (&saved_target)[f1_1 * 3 + 0x10];
    (&saved_target)[context_1 * 3 + 0x11] =
        ((&saved_target)[context_1 * 3 + 0x11] - (&saved_target)[f1_1 * 3 + 0x11]) * fpu_val_7_26
        + (&saved_target)[f1_1 * 3 + 0x11];
    (&saved_target)[context_1 * 2 + 8] =
        ((&saved_target)[context_1 * 2 + 8] - (&saved_target)[f1_1 * 2 + 8]) * fpu_val_7_26
        + (&saved_target)[f1_1 * 2 + 8];
    (&saved_target)[context_1 * 2 + 9] =
        ((&saved_target)[context_1 * 2 + 9] - (&saved_target)[f1_1 * 2 + 9]) * fpu_val_7_26
        + (&saved_target)[f1_1 * 2 + 9];
    int32_t item_c_3 = 0x4083126f;
    long double fpu_val_7_32 = (4.09600019f - (&saved_target)[f1_2 * 3 + 0x12])
        / (entity_22 + 4.09600019f - (&saved_target)[f1_2 * 3 + 0x12]);
    int32_t (* entity_24)[0x2] = &item_58;
    int32_t i_5 = 4;
    item_14 = (item_14 - (&saved_target)[f1_2 * 3 + 0x10]) * fpu_val_7_32
        + (&saved_target)[f1_2 * 3 + 0x10];
    float item_10_2 = (temp_20 - (&saved_target)[f1_2 * 3 + 0x11]) * fpu_val_7_32
        + (&saved_target)[f1_2 * 3 + 0x11];
    item_40 =
        (item_40 - (&saved_target)[f1_2 * 2 + 8]) * fpu_val_7_32 + (&saved_target)[f1_2 * 2 + 8];
    int32_t* data_39 = &item_34;
    float item_3c_2 =
        (entity_23 - (&saved_target)[f1_2 * 2 + 9]) * fpu_val_7_32 + (&saved_target)[f1_2 * 2 + 9];
    int32_t i_3;

    do
    {
        long double fpu_val_7_35 = 1.0f / data_39[1];
        data_39 = &data_39[3];
        entity_24 = &entity_24[1];
        i_3 = i_5;
        i_5 -= 1;
        float item_6c_3 = fpu_val_7_35;
        data_39[-2] = fpu_val_7_35;
        data_39[-4] = item_6c_3 * data_39[-4] * param_13 + param_11;
        data_39[-3] = item_6c_3 * data_39[-3] * param_14 + param_12;
        entity_24[-1][0] = item_6c_3 * entity_24[-1][0];
        (*entity_24)[-1] = item_6c_3 * (*entity_24)[-1];
    } while (i_3 != 1);
    Light_SampleLightmap(context, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, &item_38, &item_2c,
        &item_20, &item_58, &item_50, &item_48, param_21);
    return Light_SampleLightmap(context, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
        &(&saved_target)[f1_2 * 3 + 0x10], &(&saved_target)[context_1 * 3 + 0x10], &item_14,
        &(&saved_target)[f1_2 * 2 + 8], &(&saved_target)[context_1 * 2 + 8], &item_40, param_21);
}
