// Original IGI.EXE function: Sys_AllocateMemory_19 (VA 0x004B72E0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_19.h"
int32_t Sys_AllocateMemory_19(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* tmpD4 = g_a43e50;
    int32_t objC = *tmpD4;
    *tmpD4 = objC + 1;
    tmpD4[objC * 3 + 3] = g_a43e54 + 0x943e4c;
    g_a43e54 += a2;
    tmpD4[objC * 3 + 2] = a1;
    tmpD4[objC * 3 + 4] = a3;
    return tmpD4[objC * 3 + 3];
}
