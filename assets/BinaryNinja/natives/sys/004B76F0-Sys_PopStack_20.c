// Original IGI.EXE function: Sys_PopStack_20 (VA 0x004B76F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_20.h"
int32_t Sys_PopStack_20(void* a1, int32_t a2, int32_t a3, char a4)

{
    *(*(a1 + 4) * a3 + a1 + a2 + 0x10) = a4;
    return a2;
}
