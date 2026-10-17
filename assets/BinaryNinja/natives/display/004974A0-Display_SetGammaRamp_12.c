// Original IGI.EXE function: Display_SetGammaRamp_12 (VA 0x004974A0; static CFG gate FAIL, CFG score 0.833).
#include "Display_SetGammaRamp_12.h"
int32_t Display_SetGammaRamp_12(int32_t* context)

{
    Display_CreateSurface_12(context);
    memset(&context[8], 0, 0x34);
    return 0;
}
