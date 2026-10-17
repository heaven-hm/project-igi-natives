// Original IGI.EXE function: QTask_CloseEvent_2 (VA 0x00401A20; static CFG gate PASS, CFG score 1.000).
#include "QTask_CloseEvent_2.h"
uint32_t QTask_CloseEvent_2(int16_t a1)

{
    uint32_t result = a1;
    uint32_t srcS1 = result * 0x30;
    result = *(srcS1 + 0xaf5f04);

    if (result)
        result = Sys_OpenFileStream_2(srcS1 + 0xaf5eec);

    *(srcS1 + &g_af5f05) = 0;
    return result;
}
