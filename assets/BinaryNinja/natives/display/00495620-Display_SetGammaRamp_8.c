// Original IGI.EXE function: Display_SetGammaRamp_8 (VA 0x00495620; static CFG gate PASS, CFG score 1.000).
#include "Display_SetGammaRamp_8.h"
int32_t* Display_SetGammaRamp_8(int32_t* context, int32_t* param_2)

{
    int32_t temp_val = *param_2;
    context[1] = 0;
    *context = temp_val;
    void* temp_1 = *param_2;

    if (temp_1)
        *(temp_1 + 4) = context;

    *param_2 = context;
    return context;
}
