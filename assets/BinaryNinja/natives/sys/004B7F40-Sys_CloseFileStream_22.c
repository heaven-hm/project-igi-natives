// Original IGI.EXE function: Sys_CloseFileStream_22 (VA 0x004B7F40; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_22.h"
void* Sys_CloseFileStream_22(int32_t* a1, int32_t a2)

{
    return Q_TaskHashTableSet(a1, Sys_ExecuteBytecode_22, a2, 2, 0, 1, 1);
}
