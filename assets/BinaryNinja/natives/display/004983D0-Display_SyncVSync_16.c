// Original IGI.EXE function: Display_SyncVSync_16 (VA 0x004983D0; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_16.h"
int32_t Display_SyncVSync_16(void* context)

{
    if (*(context + 8) == g_bcaaa8)
    {
        g_bcaaa8 = 0;
        g_bcaaa4 = 0;
        g_bcaaa0 = 0;
    }

    int32_t result = Sys_ExecuteBytecode_2(*(context + 8));
    *(context + 8) = 0;
    return result;
}
