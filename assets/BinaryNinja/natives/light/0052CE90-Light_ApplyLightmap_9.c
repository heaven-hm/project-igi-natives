// Original IGI.EXE function: Light_ApplyLightmap_9 (VA 0x0052CE90; static CFG gate PASS, CFG score 1.000).
#include "Light_ApplyLightmap_9.h"
int32_t Light_ApplyLightmap_9(float* context, float* param_2, float* param_3, float* param_4, float param_5, float param_6)

{
    long double fpu_val_7_3 = (*param_2 - *context) * param_5 + *context;
    float item_20 = (param_2[1] - context[1]) * param_5 + context[1];
    float item_1c = (param_2[2] - context[2]) * param_5 + context[2];
    int32_t data_2 = (fpu_val_7_3 + ((*param_4 - *param_3) * param_5 + *param_3 - fpu_val_7_3) * param_6) * 255.0f;

    if (data_2 >= 0xff)
        data_2 = 0xff;

    int32_t item_24_1 = (((param_4[1] - param_3[1]) * param_5 + param_3[1] - item_20) * param_6 + item_20) * 255.0f;
    int32_t temp_val = item_24_1;

    if (item_24_1 >= 0xff)
        temp_val = 0xff;

    int32_t entity_3 = (((param_4[2] - param_3[2]) * param_5 + param_3[2] - item_1c) * param_6 + item_1c) * 255.0f;

    if (entity_3 >= 0xff)
        entity_3 = 0xff;

    return (data_2 << 8 | temp_val) << 8 | entity_3;
}
