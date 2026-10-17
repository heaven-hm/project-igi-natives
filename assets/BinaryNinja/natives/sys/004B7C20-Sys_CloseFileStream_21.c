// Original IGI.EXE function: Sys_CloseFileStream_21 (VA 0x004B7C20; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_21.h"
int32_t Sys_CloseFileStream_21(void* a1)

{
    return Sys_ExecuteBytecode_17(*(a1 + 8)) * *(a1 + 6);
}
