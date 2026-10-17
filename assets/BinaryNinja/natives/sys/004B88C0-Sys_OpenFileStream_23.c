// Original IGI.EXE function: Sys_OpenFileStream_23 (VA 0x004B88C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_23.h"
void* Sys_OpenFileStream_23(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    return Q_TaskHashTableSet(context, param_2, param_3, param_4, 1, 1, 0);
}
