// Original IGI.EXE function: Sys_CloseFileStream_4 (VA 0x004B1700; static CFG gate FAIL, CFG score 0.667).
#include "Sys_CloseFileStream_4.h"
int32_t Sys_CloseFileStream_4(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t objC = *a1;
    return (*(objC * 0x8c + &g_9436c4))(objC, a1, a2, a3);
}
