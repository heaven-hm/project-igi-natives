// Original IGI.EXE function: Sys_CloseFileStream_22 (VA 0x004B7F40; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_22.h"
void* Sys_CloseFileStream_22(int32_t* context, int32_t param_2)

{
    return Q_TaskHashTableSet(context, Sys_ExecuteBytecode_22, param_2, 2, 0, 1, 1);
}
