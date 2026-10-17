// Original IGI.EXE function: Sys_PopStack_30 (VA 0x004BEFC0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_30.h"
int32_t Sys_PopStack_30(void* a1)

{
    int32_t result = Sys_ExecuteBytecode_2(*(a1 + 4));
    *(a1 + 4) = 0;
    return result;
}
