// Original IGI.EXE function: AI_CheckSector_24 (VA 0x00467620; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_24.h"
float* AI_CheckSector_24(float* context, float* param_2, float param_3, float param_4)

{
    double* entity_val = param_3;
    int32_t* source_val = param_4;
    double* data_val = *source_val;
    long double fpu_val_7_1 = *entity_val - *data_val;
    long double fpu_val_6_1 = entity_val[1] - data_val[1];
    long double fpu_val_5_1 = entity_val[2] - data_val[2];
    float* data_1 = source_val[1];
    float item_8 = fpu_val_5_1 * data_1[5] + fpu_val_6_1 * data_1[4] + fpu_val_7_1 * data_1[3];
    float item_4 = fpu_val_5_1 * data_1[8] + fpu_val_6_1 * data_1[7] + fpu_val_7_1 * data_1[6];
    param_4 = g_c28b44 * 0.5f / (item_4 * source_val[2]);
    *context =
        g_c28b44 * 0.5f + param_4 * (fpu_val_5_1 * data_1[2] + fpu_val_6_1 * data_1[1] + fpu_val_7_1 * *data_1);
    context[1] = Display_ClearSurfaces_4() * param_4 * item_8 + g_c28b48 * 0.5f;

    if (param_2)
        *param_2 = item_4;

    return param_2;
}
