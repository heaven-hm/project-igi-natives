// Original IGI.EXE function: Display_ClearSurfaces_3 (VA 0x004916E0; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces_3.h"
int32_t* Display_ClearSurfaces_3(int32_t context)

{
    return Display_SetDisplayMode_8(context, &g_bcae00);
}
