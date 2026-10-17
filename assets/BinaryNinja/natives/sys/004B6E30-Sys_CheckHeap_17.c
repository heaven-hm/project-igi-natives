// Original IGI.EXE function: Sys_CheckHeap_17 (VA 0x004B6E30; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_17.h"
int32_t Sys_CheckHeap_17(int32_t* context)

{
    int32_t* source_val = *(*context + 8);
    Sys_ReadFileBlock_17(source_val);
    Sys_ExecuteBytecode_2(source_val);
    return Sys_ExecuteBytecode_2(context);
}
