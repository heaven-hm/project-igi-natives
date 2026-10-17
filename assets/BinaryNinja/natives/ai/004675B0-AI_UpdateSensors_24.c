// Original IGI.EXE function: AI_UpdateSensors_24 (VA 0x004675B0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateSensors_24.h"
int32_t AI_UpdateSensors_24(float* context, float param_2, void* param_3)

{
    float* source_val = param_2;
    param_2 = g_c28b44 * 0.5f / (source_val[2] * *(param_3 + 8));
    *context = g_c28b44 * 0.5f + param_2 * *source_val;
    param_2 = Display_ClearSurfaces_4() * source_val[1] * param_2;
    context[1] = g_c28b48 * 0.5f + param_2;
    return 0xc28b40;
}
