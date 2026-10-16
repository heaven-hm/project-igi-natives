#include "004B5B30-Sys_CheckHeap_15.h"
/* 0x004b5b30 Sys_CheckHeap_15 full linked: callers=2 callees=0 */
uint32_t sub_4b5b30(char* a1)

{
    char* edx = a1;
    int32_t eax = 1;
    char i = *edx;

    while (i)
    {
        eax = (eax + 1) * i;
        i = edx[1];
        edx = &edx[1];
    }

    return COMBINE(0, eax) % 0x3037;
}
