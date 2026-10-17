// Original IGI.EXE function: Display_SetGammaRamp_16 (VA 0x00498950; static CFG gate FAIL, CFG score 0.633).
#include "Display_SetGammaRamp_16.h"
int32_t Display_SetGammaRamp_16()

{
    Camera_UpdateTransform_33();
    /* tailcall */
    return Display_CheckCapabilities_16();
}
