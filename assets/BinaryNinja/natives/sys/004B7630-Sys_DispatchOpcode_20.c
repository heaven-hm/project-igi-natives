// Original IGI.EXE function: Sys_DispatchOpcode_20 (VA 0x004B7630; static CFG gate FAIL, CFG score 0.809).
#include "Sys_DispatchOpcode_20.h"
int32_t* Sys_DispatchOpcode_20(int32_t context, int32_t param_2, void* param_3)

{
    int32_t flagP1 = context * param_2;
    int32_t* result = Mem_Alloc(flagP1 + 0x13, 4);
    memset(memset(result, 0, (flagP1 + 0x13) & 0xfffffffc), 0,
        (flagP1 + 0x13) & 3);
    int32_t data_val = Sys_PushStack_17(param_3);
    int32_t data_1 = -(data_val);
    *result = data_1 - data_1 + 1;
    result[1] = context;
    *(result + 6) = param_2;
    result[2] = param_3;
    result[3] = Mem_Alloc(param_2 * 2, 4);
    int32_t data_6 = 0;

    if (param_2 > 0)
    {
        do
        {
            data_6 += 1;
            *(result[3] + (data_6 << 1) - 2) = 0;
        } while (data_6 < param_2);
    }

    if (flagP1 > 0)
        memset(memset(&result[4], 0, flagP1 & 0xfffffffc), 0, flagP1 & 3);

    return result;
}
