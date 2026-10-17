// Original IGI.EXE function: Sys_PopStack_20 (VA 0x004B76F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_20.h"
int32_t Sys_PopStack_20(void* context, int32_t param_2, int32_t param_3, char param_4)

{
    *(*(context + 4) * param_3 + context + param_2 + 0x10) = param_4;
    return param_2;
}
