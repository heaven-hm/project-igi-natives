// Original IGI.EXE function: Sys_CloseFileStream_16 (VA 0x004B5EC0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_16.h"
int32_t Sys_CloseFileStream_16()

{
    Sys_ExecuteBytecode_16();
    return Sys_OpenFileStream_2(&g_943e20);
}
