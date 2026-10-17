// Original IGI.EXE function: Sys_PopStack_4 (VA 0x004B17A0; static CFG gate FAIL, CFG score 0.667).
#include "Sys_PopStack_4.h"
int32_t Sys_PopStack_4(int32_t* a1)

{
    int32_t objC = *a1;
    return (*(objC * 0x8c + &g_9436e0))(objC, a1);
}
