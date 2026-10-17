// Original IGI.EXE function: Sys_CheckHeap_2 (VA 0x004B0EC0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_2.h"
int32_t Sys_CheckHeap_2(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t result = param_2 + context * 0x82;
    *((result << 2) + &g_a950a4) = param_3;
    return result;
}
