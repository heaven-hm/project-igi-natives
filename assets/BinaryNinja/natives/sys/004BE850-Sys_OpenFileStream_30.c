// Original IGI.EXE function: Sys_OpenFileStream_30 (VA 0x004BE850; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_30.h"
int32_t Sys_OpenFileStream_30(void* a1)

{
    Sys_PushStack_29(a1, 0xffffffff);
    int32_t result = *(a1 + 0x14) + 1;
    *(a1 + 0x14) = result;
    return result;
}
