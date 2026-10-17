// Original IGI.EXE function: Display_SyncVSync_4 (VA 0x00491D00; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_4.h"
int32_t Display_SyncVSync_4()

{
    Display_SetDisplayMode_4();
    Display_CreateSurface_3();
    Display_OpenDevice_14();
    return Display_CloseDevice_4(g_bcae00);
}
