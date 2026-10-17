// Original IGI.EXE function: Sys_AllocateMemory_20 (VA 0x004B7540; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_20.h"
void Sys_AllocateMemory_20(int32_t* a1, int32_t* a2, void* a3)

{
    if (!a3)
        return;

    if (a1)
        *a1 = *(a3 + 4);

    if (a2)
        *a2 = *(a3 + 8);
}
