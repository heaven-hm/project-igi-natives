// Original IGI.EXE function: Sys_InternalError_3 (VA 0x004BE8F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_InternalError_3.h"
int32_t Sys_InternalError_3(int32_t* context)

{
    int32_t temp_val = 0;
    char* data_1 = *context + context[5];
    temp_val = *data_1;
    int32_t entity_1 = *(data_1 + 1);

    if (temp_val == 2)
    {
        Sys_PushStack_29(context, entity_1);
        int32_t data_8 = context[5] + 5;
        context[5] = data_8;
        return data_8;
    }

    if (temp_val == 6)
    {
        Sys_ReadFileBlock_30(context, entity_1);
        int32_t data_6 = context[5] + 5;
        context[5] = data_6;
        return data_6;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}
