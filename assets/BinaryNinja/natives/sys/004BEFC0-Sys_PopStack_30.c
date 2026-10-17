// Original IGI.EXE function: Sys_PopStack_30 (VA 0x004BEFC0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_30.h"
int32_t Sys_PopStack_30(void* context)

{
    int32_t result = Sys_ExecuteBytecode_2(*(context + 4));
    *(context + 4) = 0;
    return result;
}
