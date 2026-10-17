// Original IGI.EXE function: Sys_ExecuteBytecode_18 (VA 0x004B6F90; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_18.h"
int32_t Sys_ExecuteBytecode_18(int32_t context, float* param_2)

{
    int32_t* source_val = context;
    *param_2 = source_val[1];
    param_2[1] = source_val[2];
    param_2[2] = Sys_CheckHeap_21(source_val);
    int32_t result = Sys_AllocateMemory_22(source_val);
    param_2[3] = result;
    return result;
}
