// Original IGI.EXE function: Sys_OpenFileStream_23 (VA 0x004B88C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_23.h"
void* Sys_OpenFileStream_23(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

{
    return Q_TaskHashTableSet(a1, a2, a3, a4, 1, 1, 0);
}
