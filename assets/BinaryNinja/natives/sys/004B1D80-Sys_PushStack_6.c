// Original IGI.EXE function: Sys_PushStack_6 (VA 0x004B1D80; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_6.h"
int32_t Sys_PushStack_6(int32_t context, int32_t param_2)

{
    int32_t result = context * 0x23;
    *((result << 2) + &g_9436fc) = param_2;
    return result;
}
