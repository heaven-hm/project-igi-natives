// Original IGI.EXE function: QTask_CloseEvent_2 (VA 0x00401A20; static CFG gate PASS, CFG score 1.000).
#include "QTask_CloseEvent_2.h"
uint32_t QTask_CloseEvent_2(int16_t context)

{
    uint32_t result = context;
    uint32_t source_1 = result * 0x30;
    result = *(source_1 + 0xaf5f04);

    if (result)
        result = Sys_OpenFileStream_2(source_1 + 0xaf5eec);

    *(source_1 + &g_af5f05) = 0;
    return result;
}
