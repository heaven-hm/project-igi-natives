// Original IGI.EXE function: Sys_FreeMemory_20 (VA 0x004B7570; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_20.h"
int32_t Sys_FreeMemory_20(void* context)

{
    if (!context)
        return 0;

    return *(context + 0x10);
}
