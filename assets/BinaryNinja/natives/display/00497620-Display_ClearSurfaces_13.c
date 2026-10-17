// Original IGI.EXE function: Display_ClearSurfaces_13 (VA 0x00497620; static CFG gate FAIL, CFG score 0.833).
#include "Display_ClearSurfaces_13.h"
int32_t* Display_ClearSurfaces_13(int32_t* context, int32_t param_2)

{
    int32_t temp_1 = g_684110 + 1;
    memcpy(0xbcaba0, context, 0x4c);
    g_684110 = temp_1;

    if (!param_2)
        return context;

    context[1] = 0;
    *context = 0;
    return Camera_SetFieldOfView_33(&g_684100, context);
}
