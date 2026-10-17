// Original IGI.EXE function: Sys_CloseFileStream_18 (VA 0x004B6F50; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_18.h"
int32_t Sys_CloseFileStream_18(int32_t* a1)

{
    int32_t result = Sys_OpenFileStream_21(*a1, a1[1], a1[2], a1[5], a1[6], a1[7], a1[4],
        a1[3], a1[9] | 0x40000000, a1[8]);
    return result;
}
