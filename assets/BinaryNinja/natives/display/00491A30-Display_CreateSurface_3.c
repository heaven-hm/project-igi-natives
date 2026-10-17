// Original IGI.EXE function: Display_CreateSurface_3 (VA 0x00491A30; static CFG gate FAIL, CFG score 0.833).
#include "Display_CreateSurface_3.h"
int32_t Display_CreateSurface_3()

{
    char result = g_5ca02d;

    if (result)
        result = (*((Display_SetGammaRamp_5() << 2) + &g_a94e84))(0);

    return result;
}
