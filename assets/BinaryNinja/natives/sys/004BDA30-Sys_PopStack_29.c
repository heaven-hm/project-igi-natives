// Original IGI.EXE function: Sys_PopStack_29 (VA 0x004BDA30; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_29.h"
void* Sys_PopStack_29(void* a1, float a2)

{
    int32_t objC1 = *(a1 + 0x1c) - 1;
    *(a1 + 0x18) -= 1;
    int32_t tmpD2 = *(a1 + 0x28);
    *(a1 + 0x1c) = objC1;
    *(tmpD2 + (objC1 << 2)) = 2;
    *(*(a1 + 0x24) + (*(a1 + 0x18) << 2)) = a2;
    return a1;
}
