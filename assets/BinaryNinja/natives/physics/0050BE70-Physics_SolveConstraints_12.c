// Original IGI.EXE function: Physics_SolveConstraints_12 (VA 0x0050BE70; static CFG gate PASS, CFG score 1.000).
#include "Physics_SolveConstraints_12.h"
int32_t Physics_SolveConstraints_12(void* context)

{
    int32_t result = Sys_ExecuteBytecode_2(*(context + 0xc));
    *(context + 0xc) = 0;
    return result;
}
