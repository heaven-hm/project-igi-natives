// Original IGI.EXE function: Sys_CheckHeap_15 (VA 0x004B5B30; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_15.h"
uint32_t Sys_CheckHeap_15(char* context)

{
    char* temp_val = context;
    int32_t data_val = 1;
    char i = *temp_val;

    while (i)
    {
        data_val = (data_val + 1) * i;
        i = temp_val[1];
        temp_val = &temp_val[1];
    }

    return COMBINE(0, data_val) % 0x3037;
}
