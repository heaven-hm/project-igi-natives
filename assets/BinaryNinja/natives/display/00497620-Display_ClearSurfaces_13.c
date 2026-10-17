// Original IGI.EXE function: Display_ClearSurfaces_13 (VA 0x00497620; static CFG gate FAIL, CFG score 0.833).
#include "Display_ClearSurfaces_13.h"
int32_t* Display_ClearSurfaces_13(int32_t* a1, int32_t a2)

{
    int32_t tmpD1 = g_684110 + 1;
    memcpy(0xbcaba0, a1, 0x4c);
    g_684110 = tmpD1;

    if (!a2)
        return a1;

    a1[1] = 0;
    *a1 = 0;
    return Camera_SetFieldOfView_33(&g_684100, a1);
}
