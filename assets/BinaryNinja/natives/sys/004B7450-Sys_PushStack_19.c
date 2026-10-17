// Original IGI.EXE function: Sys_PushStack_19 (VA 0x004B7450; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_19.h"
int32_t Sys_PushStack_19(int32_t a1, int32_t a2)

{
    *(a1 + (a2 << 2) + 0x14) = 0;
    return a2;
}
