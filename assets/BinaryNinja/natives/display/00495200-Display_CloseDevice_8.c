// Original IGI.EXE function: Display_CloseDevice_8 (VA 0x00495200; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_8.h"
int32_t* Display_CloseDevice_8(int32_t context)

{
    return Display_NoMoreDirect3DCallba(context, &g_5ca120);
}
