// Original IGI.EXE function: Display_OpenDevice_2 (VA 0x004905A0; static CFG gate PASS, CFG score 0.967).
#include "Display_OpenDevice_2.h"
int32_t Display_OpenDevice_2(void* context, int32_t param_2, int32_t param_3)

{
    memset(&g_5c8e48, 0, 0x1150);
    g_5c8e60 = param_3;
    g_5c8e40 = 0;

    if (!Display_CloseDevice_2(&g_5c8e48, context))
    {
        Display_CreateSurface(&g_5c8e48);
        return 0;
    }

    if (!Display_CouldnTReadPixelForm(&g_5c8e48))
    {
        Display_CreateSurface(&g_5c8e48);
        return 0;
    }

    if (param_2 && !Display_SyncVSync_2(&g_5c8e48, context, param_2))
    {
        Display_CreateSurface(&g_5c8e48);
        return 0;
    }

    if (!Display_SetDisplayMode_2(&g_5c8e48, context))
    {
        Display_CreateSurface(&g_5c8e48);
        return 0;
    }

    FX_FailedToRegisterWinp(sub_490530);
    g_5c8e72 = 1;
    g_5c8e70 = 1;
    return &g_5c8e48;
}
