// Original IGI.EXE function: Display_SetGammaRamp_2 (VA 0x00491240; static CFG gate PASS, CFG score 1.000).
#include "Display_SetGammaRamp_2.h"
void Display_SetGammaRamp_2(int32_t context, int32_t param_2, int32_t* param_3)

{
    if (param_2 >= 0 && param_2 < 4 && param_3 && context && !*(context + (param_2 << 2) + 0x1b8))
        *(context + (param_2 << 2) + 0x1b8) = Sys_DispatchOpcode_18(param_3);
}
