// Original IGI.EXE function: Sys_PushStack_30 (VA 0x004BEF60; static CFG gate FAIL, CFG score 0.778).
#include "Sys_PushStack_30.h"
int32_t* Sys_PushStack_30(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

{
    void* valA = Mem_Alloc(g_a969c4, 4);
    a1[1] = valA;
    int32_t objC = g_a969c4;
    __builtin_memset(__builtin_memset(valA, 0, objC & 0xfffffffc), 0, objC & 3);
    int32_t objC4 = a1[1];
    a1[7] = a2;
    a1[4] = a3;
    *a1 = objC4;
    a1[2] = 0;
    a1[3] = 0;
    a1[5] = 0;
    a1[6] = a4;
    return a1;
}
