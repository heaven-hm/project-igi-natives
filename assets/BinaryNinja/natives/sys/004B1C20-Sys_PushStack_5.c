// Original IGI.EXE function: Sys_PushStack_5 (VA 0x004B1C20; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_5.h"
int32_t Sys_PushStack_5(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436b8) = a2;
    return result;
}
