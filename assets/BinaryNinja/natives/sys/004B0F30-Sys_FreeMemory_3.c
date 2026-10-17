// Original IGI.EXE function: Sys_FreeMemory_3 (VA 0x004B0F30; static CFG gate FAIL, CFG score 0.667).
#include "Sys_FreeMemory_3.h"
int32_t Sys_FreeMemory_3(int32_t a1)

{
    if (a1 != g_a94a64)
    {
        g_a94a64 = a1;
        memcpy(0xa94e80, a1 * 0x208 + &g_a950a0, 0x208);
    }

    return a1;
}
