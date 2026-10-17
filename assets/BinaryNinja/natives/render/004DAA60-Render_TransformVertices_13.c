// Original IGI.EXE function: Render_TransformVertices_13 (VA 0x004DAA60; static CFG gate PASS, CFG score 1.000).
#include "Render_TransformVertices_13.h"
int32_t* Render_TransformVertices_13(int32_t* context, int32_t* param_2, int32_t* param_3, char param_4, char param_5)

{
    int32_t entity_9 = g_b041e8;
    int32_t* result = *(g_b041e4 + (entity_9 << 2)) * g_b041f0 + g_b041e0;
    *(g_b041f4 + result) = entity_9;
    g_b041e8 += 1;
    *result = *context;
    result[1] = context[1];
    result[2] = context[2];
    result[3] = *param_2;
    result[4] = param_2[1];
    result[5] = param_2[2];
    result[6] = *param_3;
    result[7] = param_3[1];
    result[8] = param_3[2];
    result[9] = param_4;
    *(result + 0x25) = param_5;
    return result;
}
