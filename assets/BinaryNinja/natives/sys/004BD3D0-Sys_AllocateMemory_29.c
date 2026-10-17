// Original IGI.EXE function: Sys_AllocateMemory_29 (VA 0x004BD3D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_29.h"
int32_t Sys_AllocateMemory_29(int32_t a1, int32_t a2, int32_t a3)

{
    *(((a2 + a1 * 6) << 2) + &g_a96108) = a3;
    return a3;
}
