// Original IGI.EXE function: Sys_FreeMemory_7 (VA 0x004B1E70; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_7.h"
char* Sys_FreeMemory_7(char* a1)

{
    return Sys_AllocateMemory_7(nullptr, 0, a1);
}
