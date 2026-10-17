// Original IGI.EXE function: Render_SetupLighting_5 (VA 0x004D3160; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting_5.h"
float* Render_SetupLighting_5(float* context, float* param_2, float* param_3, float param_4)

{
    float item_8_1 = (param_2[1] - param_3[1]) * param_4;
    float item_4_1 = (param_2[2] - param_3[2]) * param_4;
    *context = (*param_2 - *param_3) * param_4 + *param_3;
    context[1] = item_8_1 + param_3[1];
    context[2] = item_4_1 + param_3[2];
    return param_3;
}
