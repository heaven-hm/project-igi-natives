// Original IGI.EXE function: Physics_CheckHullCollision_11 (VA 0x0050A6A0; static CFG gate PASS, CFG score 1.000).
#include "Physics_CheckHullCollision_11.h"
int32_t Physics_CheckHullCollision_11(void* context)

{
    int32_t result = Sys_ExecuteBytecode_2(*(context + 8));
    *(context + 8) = 0;
    return result;
}
