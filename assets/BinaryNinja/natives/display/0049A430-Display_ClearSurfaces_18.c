// Original IGI.EXE function: Display_ClearSurfaces_18 (VA 0x0049A430; static CFG gate FAIL, CFG score 0.667).
#include "Display_ClearSurfaces_18.h"
int32_t Display_ClearSurfaces_18(int32_t context, int32_t param_2)

{
    memcpy(context + 0x20, param_2, 0x18);
    return context;
}
