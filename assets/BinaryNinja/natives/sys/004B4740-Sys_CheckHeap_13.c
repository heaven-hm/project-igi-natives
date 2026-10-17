// Original IGI.EXE function: Sys_CheckHeap_13 (VA 0x004B4740; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_13.h"
int32_t Sys_CheckHeap_13(int32_t* context)

{
    int32_t temp_1 = context[2] ^ *context >> 7;
    context[2] = temp_1;
    int32_t temp_3 = context[1] ^ temp_1;
    context[1] = temp_3;
    int32_t result = *context + temp_3;
    *context = result;
    return result;
}
