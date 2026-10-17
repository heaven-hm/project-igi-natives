// Original IGI.EXE function: Sys_CheckHeap_23 (VA 0x004B8AD0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_23.h"
int32_t Sys_CheckHeap_23(void* a1, int32_t a2)

{
    if (!*(a1 + 4))
        return *(*(*(a1 + 8) + (a2 << 2)) + 0x24);

    int32_t v_4 = a2;
    void* v_8 = a1;
    return 0;
}
