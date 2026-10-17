// Original IGI.EXE function: Sys_CheckHeap_15 (VA 0x004B5B30; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_15.h"
uint32_t Sys_CheckHeap_15(char* a1)

{
    char* tmpD = a1;
    int32_t valA = 1;
    char i = *tmpD;

    while (i)
    {
        valA = (valA + 1) * i;
        i = tmpD[1];
        tmpD = &tmpD[1];
    }

    return COMBINE(0, valA) % 0x3037;
}
