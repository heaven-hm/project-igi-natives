// Original IGI.EXE function: Sys_AllocateMemory_14 (VA 0x004B4770; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_14.h"
long double Sys_AllocateMemory_14(int32_t* context)

{
    int32_t item_4 = 0;
    int32_t temp_1 = context[2] ^ *context >> 7;
    context[2] = temp_1;
    int32_t temp_3 = context[1] ^ temp_1;
    context[1] = temp_3;
    int32_t temp_5 = *context + temp_3;
    *context = temp_5;
    return temp_5 * 1.52587890625e-05;
}
