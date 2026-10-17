// Original IGI.EXE function: Render_SkinBones_12 (VA 0x004DA0A0; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones_12.h"
int32_t Render_SkinBones_12(void* context, double* param_2, double* param_3, int32_t* param_4, float param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t param_9)

{
    *(context + 0x6c) = param_5;

    if (!param_4)
    {
        *(context + 0x80) = 0;
        *(context + 0x84) = 0;
        *(context + 0x88) = 0;
    }
    else
    {
        *(context + 0x80) = *param_4;
        *(context + 0x84) = param_4[1];
        *(context + 0x88) = param_4[2];
    }

    *(context + 0x70) = param_6;
    *(context + 0x74) = param_7;
    *(context + 0x78) = param_8;
    *(context + 0x7c) = param_9;
    double item_20 = (*param_3 - *param_2) * 0.5 + *param_2;
    double item_18 = (param_3[1] - param_2[1]) * 0.5 + param_2[1];
    double item_10 = (param_3[2] - param_2[2]) * 0.5 + param_2[2];
    return DynObj_UpdateDynTree_8(*(context + 0x68), context, &item_20, param_2, param_3);
}
