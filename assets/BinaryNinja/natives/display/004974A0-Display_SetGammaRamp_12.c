// Original IGI.EXE function: Display_SetGammaRamp_12 (VA 0x004974A0; static CFG gate FAIL, CFG score 0.833).
#include "Display_SetGammaRamp_12.h"
int32_t Display_SetGammaRamp_12(int32_t* a1)

{
    Display_CreateSurface_12(a1);
    __builtin_memset(&a1[8], 0, 0x34);
    return 0;
}
