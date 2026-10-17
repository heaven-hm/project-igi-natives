// Original IGI.EXE function: Sys_OpenFileStream_6 (VA 0x004B1CE0; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_6.h"
int32_t Sys_OpenFileStream_6(int32_t context, int32_t param_2)

{
    int32_t result = context * 0x23;
    *((result << 2) + &g_9436d0) = param_2;
    return result;
}
