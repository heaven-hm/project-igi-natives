// Original IGI.EXE function: Sys_AllocateMemory_29 (VA 0x004BD3D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_29.h"
int32_t Sys_AllocateMemory_29(int32_t context, int32_t param_2, int32_t param_3)

{
    *(((param_2 + context * 6) << 2) + &g_a96108) = param_3;
    return param_3;
}
