#include "gi_platform.h"
#include "004905A0-Display_OpenDevice_2.h"
int32_t Display_OpenDevice_2(void* a1, int32_t a2, int32_t a3)

{
    __builtin_memset(&g_5c8e48, 0, 0x1150);
    g_5c8e60 = a3;
    g_5c8e40 = 0;

    if (!Display_CloseDevice_2(&g_5c8e48, a1))
    {
        Display_CreateSurface(&g_5c8e48);
        return 0;
    }

    if (!Display_CouldnTReadPixelForm(&g_5c8e48))
    {
        Display_CreateSurface(&g_5c8e48);
        return 0;
    }

    if (a2 && !Display_SyncVSync_2(&g_5c8e48, a1, a2))
    {
        Display_CreateSurface(&g_5c8e48);
        return 0;
    }

    if (!Display_SetDisplayMode_2(&g_5c8e48, a1))
    {
        Display_CreateSurface(&g_5c8e48);
        return 0;
    }

    FX_FailedToRegisterWinp(sub_490530);
    g_5c8e72 = 1;
    g_5c8e70 = 1;
    return &g_5c8e48;
}
