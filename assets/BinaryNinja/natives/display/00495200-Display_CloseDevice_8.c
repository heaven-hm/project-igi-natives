// Original IGI.EXE function: Display_CloseDevice_8 (VA 0x00495200; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_8.h"
int32_t* Display_CloseDevice_8(int32_t a1)

{
    return Display_NoMoreDirect3DCallba(a1, &g_5ca120);
}
