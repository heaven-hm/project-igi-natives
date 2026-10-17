// Original IGI.EXE function: Sys_ExecuteBytecode_19 (VA 0x004B73F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_19.h"
int32_t* Sys_ExecuteBytecode_19(int32_t context)

{
    int32_t* result = Mem_Alloc((context << 2) + 0x14, 4);
    result[3] = context;
    result[1] = 0xffffffff;
    result[2] = 0;
    *result = 0xabcdabcd;
    result[4] = 0xdcbadcba;
    return result;
}
