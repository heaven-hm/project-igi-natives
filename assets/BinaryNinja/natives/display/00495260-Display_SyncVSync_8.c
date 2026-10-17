// Original IGI.EXE function: Display_SyncVSync_8 (VA 0x00495260; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_8.h"
int32_t* Display_SyncVSync_8(int32_t context)

{
    return Display_SetDisplayMode_8(context, &g_5ca120);
}
