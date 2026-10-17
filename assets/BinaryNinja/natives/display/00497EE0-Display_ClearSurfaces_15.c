// Original IGI.EXE function: Display_ClearSurfaces_15 (VA 0x00497EE0; static CFG gate PASS, CFG score 0.889).
#include "Display_ClearSurfaces_15.h"
int32_t** Display_ClearSurfaces_15(int32_t a1)

{
    int32_t* valA = Display_CloseDevice_14(0xb8);
    valA[1] = g_543a68;
    memcpy(&valA[4], a1, 0xa8);
    return Display_ClearSurfaces_14(g_bcabe0 - 1, valA);
}
