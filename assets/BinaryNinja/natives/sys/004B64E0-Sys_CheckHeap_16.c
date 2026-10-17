// Original IGI.EXE function: Sys_CheckHeap_16 (VA 0x004B64E0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_16.h"
int32_t Sys_CheckHeap_16(void* a1)

{
    return Is_ResourceLoaded(a1, nullptr);
}
