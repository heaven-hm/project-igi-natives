// Original IGI.EXE function: Camera_ApplyLineFilter_29 (VA 0x004ADB05; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_29.h"
int32_t* Camera_ApplyLineFilter_29(int32_t* context)

{
    int32_t temp_val = context[2];
    int32_t entity_val = context[1];
    context[1] = entity_val >> 1 | temp_val << 0x1f;
    int32_t entity_5 = *context >> 1 | entity_val << 0x1f;
    context[2] = temp_val >> 1;
    *context = entity_5;
    return context;
}
