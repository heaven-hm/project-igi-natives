// Original IGI.EXE function: Sys_FreeMemory_18 (VA 0x004B6E90; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_18.h"
void* Sys_FreeMemory_18(int32_t* context, char* param_2)

{
    Sys_ExecuteBytecode_21(*context);
    return Sys_AllocateMemory_21(*context, param_2, 0, nullptr);
}
