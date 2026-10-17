// Original IGI.EXE function: Sys_FreeMemory (VA 0x004B0670; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory.h"
int32_t Sys_FreeMemory(int32_t a1, int32_t a2, int32_t a3)

{
    return *((a3 << 8) + a1 + a2);
}
