// Original IGI.EXE function: Sys_AllocateMemory_31 (VA 0x004BF390; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_31.h"
int32_t Sys_AllocateMemory_31(int32_t* a1)

{
    return *(*a1 + 0xc) + 1;
}
