// Original IGI.EXE function: Sys_OpenFileStream_2 (VA 0x004B0B70; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_2.h"
int32_t Sys_OpenFileStream_2(int32_t* context)

{
    int32_t result = Sys_ExecuteBytecode_2(*context);
    *context = 0;
    return result;
}
