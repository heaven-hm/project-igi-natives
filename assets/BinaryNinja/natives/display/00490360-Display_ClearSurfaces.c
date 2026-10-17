// Original IGI.EXE function: Display_ClearSurfaces (VA 0x00490360; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces.h"
uint32_t Display_ClearSurfaces()

{
    uint32_t result = GetTickCount();
    g_tick_base = result;
    return result;
}
