// Original IGI.EXE function: Display_SyncVSync_3 (VA 0x004916A0; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_3.h"
int32_t* Display_SyncVSync_3(int32_t a1)

{
    return Display_SetDisplayMode_8(a1, &g_bcadec);
}
