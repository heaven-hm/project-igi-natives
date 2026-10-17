// Original IGI.EXE function: Sys_CheckHeap_29 (VA 0x004BE620; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_29.h"
int32_t Sys_CheckHeap_29(int32_t* context, int32_t* param_2, int32_t* param_3, float* param_4, float* param_5)

{
    int32_t data_val = Sys_CloseFileStream_28(context, param_2, param_4);

    if (!data_val)
        return data_val;

    int32_t entity_val = 0;
    entity_val = data_val == 2;
    int32_t data_2 = Sys_CloseFileStream_28(context, param_3, param_5);

    if (data_2)
    {
        if (!entity_val)
            return data_2;

        return 2;
    }

    if (!entity_val)
    {
        Sys_PushStack_29(context, *param_2);
        return 0;
    }

    Sys_PopStack_29(context, *param_4);
    return 0;
}
