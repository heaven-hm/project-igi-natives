// Original IGI.EXE function: Sys_FreeMemory_23 (VA 0x004B8870; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_23.h"
void* Sys_FreeMemory_23(int32_t* context, int32_t param_2)

{
    return Q_TaskHashTableSet(context, Sys_DispatchOpcode_22, param_2, 8, 0, 2, 0);
}
