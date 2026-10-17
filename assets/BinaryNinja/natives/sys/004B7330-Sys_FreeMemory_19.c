// Original IGI.EXE function: Sys_FreeMemory_19 (VA 0x004B7330; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_19.h"
int32_t* Sys_FreeMemory_19(int32_t context)

{
    int32_t* result = Mem_Alloc(context * 0xc + 8, 4);
    result[1] = context;
    *result = 0;
    return result;
}
