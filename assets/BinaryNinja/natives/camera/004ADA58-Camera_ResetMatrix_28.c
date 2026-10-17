// Original IGI.EXE function: Camera_ResetMatrix_28 (VA 0x004ADA58; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_28.h"
int32_t Camera_ResetMatrix_28(int32_t context, int32_t param_2, int32_t* param_3)

{
    int32_t result = 0;
    int32_t entity_val = context + param_2;

    if (entity_val < context || entity_val < param_2)
        result = 1;

    *param_3 = entity_val;
    return result;
}
