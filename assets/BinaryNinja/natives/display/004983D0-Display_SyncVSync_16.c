// Original IGI.EXE function: Display_SyncVSync_16 (VA 0x004983D0; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_16.h"
int32_t Display_SyncVSync_16(void* a1)

{
    if (*(a1 + 8) == g_bcaaa8)
    {
        g_bcaaa8 = 0;
        g_bcaaa4 = 0;
        g_bcaaa0 = 0;
    }

    int32_t result = Sys_ExecuteBytecode_2(*(a1 + 8));
    *(a1 + 8) = 0;
    return result;
}
