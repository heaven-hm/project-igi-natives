// Original IGI.EXE function: Render_TransformVertices_7 (VA 0x004D41C0; static CFG gate FAIL, CFG score 0.833).
#include "Render_TransformVertices_7.h"
float Render_TransformVertices_7(float context, int32_t param_2, float param_3, float param_4, float param_5, float param_6) {
    if (param_2 == 0xffffffff)
    {
        if (param_4 == 0xffffffff)
            return 0xffffffff;

        memcpy(context, param_5, 0x14);
        return param_4;
    }

    if (param_4 == 0xffffffff)
    {
        memcpy(context, param_3, 0x14);
        return param_2;
    }

    if (param_2)
    {
        if (param_4 == 1)
        {
            Render_ComputeNormals_7(context, param_3, param_5, param_6);
            return 1;
        }

        float data_10 = param_3;
        float entity_5 = param_5;
        float* temp_4 = context;
        long double fpu_val_7_10 = (*(data_10 + 8) - *(data_10 + 4)) * (*(entity_5 + 4) - *(entity_5 + 8));
        long double fpu_val_6_24 = (*(data_10 + 0xc) - *data_10) * (*(entity_5 + 4) + *(entity_5 + 8));
        param_4 = (*(entity_5 + 0xc) - *entity_5) * (*(data_10 + 8) + *(data_10 + 4));
        param_6 = (*(entity_5 + 4) + *entity_5) * (*data_10 + *(data_10 + 8));
        param_5 = (*(entity_5 + 0xc) - *(entity_5 + 8)) * (*(data_10 + 0xc) + *(data_10 + 4));
        long double fpu_val_5_44 = (*(entity_5 + 0xc) + *(entity_5 + 8)) * (*(data_10 + 0xc) - *(data_10 + 4));
        long double fpu_val_4_23 = fpu_val_5_44 + param_5 + param_6;
        param_3 = ((*entity_5 - *(entity_5 + 4)) * (*(data_10 + 8) - *data_10) + fpu_val_4_23) * 0.5f;
        *temp_4 = (*(entity_5 + 0xc) + *entity_5) * (*data_10 + *(data_10 + 0xc)) + param_3 - fpu_val_4_23;
        long double fpu_val_5_46 = fpu_val_6_24 + param_3 - fpu_val_5_44;
        context = fpu_val_5_46;
        temp_4[1] = fpu_val_5_46;
        long double fpu_val_6_30 = param_3 + param_4 - param_5;
        param_5 = fpu_val_6_30;
        temp_4[2] = fpu_val_6_30;
        long double fpu_val_7_12 = fpu_val_7_10 + param_3 - param_6;
        temp_4[3] = fpu_val_7_12;
        int32_t data_12 = *(data_10 + 0x10) + *(entity_5 + 0x10) + 1;
        temp_4[4] = data_12;

        if (data_12 <= 0x3e8)
            return 1;

        long double fpu_val_6_31 = *temp_4;
        temp_4[4] = 0;
        long double fpu_val_5_55 =
            1.0 / sqrtl(fpu_val_7_12 * fpu_val_7_12 + param_5 * param_5 + context * context + fpu_val_6_31 * fpu_val_6_31);
        *temp_4 = *temp_4 * fpu_val_5_55;
        temp_4[1] = context * fpu_val_5_55;
        temp_4[2] = param_5 * fpu_val_5_55;
        temp_4[3] = fpu_val_7_12 * fpu_val_5_55;
        return 1;
    }

    if (!param_4)
    {
        Render_ComputeNormals_7(context, param_3, param_5, param_6);
        return 0;
    }

    float* data_3 = param_3;
    float* entity_2 = param_5;
    float* temp_1 = context;
    long double fpu_val_7_2 = (data_3[1] - data_3[2]) * (entity_2[2] - entity_2[1]);
    long double fpu_val_6_4 = (entity_2[3] - *entity_2) * (data_3[2] + data_3[1]);
    param_4 = (data_3[3] - *data_3) * (entity_2[1] + entity_2[2]);
    param_6 = (*data_3 + data_3[1]) * (*entity_2 + entity_2[2]);
    param_5 = (data_3[3] - data_3[2]) * (entity_2[3] + entity_2[1]);
    long double fpu_val_5_13 = (data_3[3] + data_3[2]) * (entity_2[3] - entity_2[1]);
    long double fpu_val_4_10 = fpu_val_5_13 + param_5 + param_6;
    param_3 = ((*data_3 - data_3[1]) * (entity_2[2] - *entity_2) + fpu_val_4_10) * 0.5f;
    *temp_1 = (entity_2[3] + *entity_2) * (*data_3 + data_3[3]) + param_3 - fpu_val_4_10;
    long double fpu_val_5_15 = fpu_val_6_4 + param_3 - fpu_val_5_13;
    context = fpu_val_5_15;
    temp_1[1] = fpu_val_5_15;
    long double fpu_val_6_10 = param_3 + param_4 - param_5;
    param_5 = fpu_val_6_10;
    temp_1[2] = fpu_val_6_10;
    long double fpu_val_7_4 = fpu_val_7_2 + param_3 - param_6;
    temp_1[3] = fpu_val_7_4;
    int32_t data_5 = data_3[4] + entity_2[4] + 1;
    temp_1[4] = data_5;

    if (data_5 <= 0x3e8)
        return 1;

    long double fpu_val_6_11 = *temp_1;
    temp_1[4] = 0;
    long double fpu_val_6_17 =
        1.0 / sqrtl(fpu_val_6_11 * fpu_val_6_11 + fpu_val_7_4 * fpu_val_7_4 + param_5 * param_5 + context * context);
    *temp_1 = *temp_1 * fpu_val_6_17;
    temp_1[1] = context * fpu_val_6_17;
    temp_1[2] = param_5 * fpu_val_6_17;
    temp_1[3] = fpu_val_7_4 * fpu_val_6_17;
    return 1;
}
