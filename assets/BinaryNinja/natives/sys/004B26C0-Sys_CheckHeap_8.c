// Original IGI.EXE function: Sys_CheckHeap_8 (VA 0x004B26C0; static CFG gate PASS, CFG score 0.889).
#include "Sys_CheckHeap_8.h"
int32_t Sys_CheckHeap_8()

{
    int32_t result = Sys_FreeMemory_9();

    if (*((result << 2) + &g_a94e84))
        result = (*((Sys_FreeMemory_9() << 2) + &g_a94e84))(0);

    return result;
}
