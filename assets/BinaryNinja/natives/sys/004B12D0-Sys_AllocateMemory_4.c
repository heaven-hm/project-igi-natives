// Original IGI.EXE function: Sys_AllocateMemory_4 (VA 0x004B12D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_4.h"
int32_t* Sys_AllocateMemory_4()

{
    int32_t* i;

    for (i = &g_9423c0; i < 0x943640; i = &i[0x25])
        *i = 0;

    return i;
}
