// Original IGI.EXE function: Sys_PushStack_21 (VA 0x004B7CF0; static CFG gate FAIL, CFG score 0.833).
#include "Sys_PushStack_21.h"
int32_t Sys_PushStack_21(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t valA = Sys_ReadFileBlock_3();
    int32_t* v_c = a1;
    *a1 = valA;
    return (*((g_a84a48 << 2) + &g_a94e84))(&v_c, v_c, a3, a2);
}
