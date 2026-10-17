// Original IGI.EXE function: Sys_PushStack_22 (VA 0x004B8030; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_22.h"
void* Sys_PushStack_22(int32_t* a1, int32_t a2, int32_t a3)

{
    return Q_TaskHashTableSet(a1, Sys_PopStack_22, a2, a3, 0, 3, 1);
}
