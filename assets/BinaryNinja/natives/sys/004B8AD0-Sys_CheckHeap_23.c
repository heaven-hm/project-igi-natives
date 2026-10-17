// Original IGI.EXE function: Sys_CheckHeap_23 (VA 0x004B8AD0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_23.h"
int32_t Sys_CheckHeap_23(void* context, int32_t param_2)

{
    if (!*(context + 4))
        return *(*(*(context + 8) + (param_2 << 2)) + 0x24);

    int32_t item_4 = param_2;
    void* item_8 = context;
    return 0;
}
