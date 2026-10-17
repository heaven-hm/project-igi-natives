// Original IGI.EXE function: Sys_PopStack_5 (VA 0x004B1C40; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_5.h"
int32_t Sys_PopStack_5(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436bc) = a2;
    return result;
}
