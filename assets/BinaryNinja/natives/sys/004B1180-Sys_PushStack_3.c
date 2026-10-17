// Original IGI.EXE function: Sys_PushStack_3 (VA 0x004B1180; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_3.h"
int32_t Sys_PushStack_3()

{
    int32_t result = g_94396c;
    *(result * 0x8c + &g_943704) = result;
    g_94396c = result + 1;
    return result;
}
