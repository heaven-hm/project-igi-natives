// Original IGI.EXE function: Sys_CheckHeap_3 (VA 0x004B1290; static CFG gate FAIL, CFG score 0.667).
#include "Sys_CheckHeap_3.h"
int32_t Sys_CheckHeap_3(int32_t context, int32_t param_2)

{
    int32_t dest_val = param_2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t result = ~i;
    int32_t source_1;
    int32_t dest_3;
    dest_3 = memcpy(context * 0x8c + &g_94372c, dest_val - result, result & 0xfffffffc);
    memcpy(dest_3, source_1, result & 3);
    return result;
}
