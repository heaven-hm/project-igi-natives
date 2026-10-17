// Original IGI.EXE function: Sys_PushStack_12 (VA 0x004B3C20; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_12.h"
float* Sys_PushStack_12(float* a1, float a2, int32_t a3, int32_t a4)

{
    a1[4] = a3;
    *a1 = a2;
    a1[8] = a4;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1[9] = 0;
    return a1;
}
