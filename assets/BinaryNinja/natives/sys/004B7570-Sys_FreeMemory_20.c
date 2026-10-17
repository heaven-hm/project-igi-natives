// Original IGI.EXE function: Sys_FreeMemory_20 (VA 0x004B7570; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_20.h"
int32_t Sys_FreeMemory_20(void* a1)

{
    if (!a1)
        return 0;

    return *(a1 + 0x10);
}
