// Original IGI.EXE function: Sys_ExecuteBytecode_6 (VA 0x004B1D40; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_6.h"
int32_t Sys_ExecuteBytecode_6(int32_t context, int32_t param_2)

{
    int32_t result = context * 0x23;
    *((result << 2) + &g_9436d4) = param_2;
    return result;
}
