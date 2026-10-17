// Original IGI.EXE function: Sys_PushStack_22 (VA 0x004B8030; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_22.h"
void* Sys_PushStack_22(int32_t* context, int32_t param_2, int32_t param_3)

{
    return Q_TaskHashTableSet(context, Sys_PopStack_22, param_2, param_3, 0, 3, 1);
}
