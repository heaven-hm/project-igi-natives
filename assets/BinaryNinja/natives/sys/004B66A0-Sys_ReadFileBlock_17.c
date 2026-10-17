// Original IGI.EXE function: Sys_ReadFileBlock_17 (VA 0x004B66A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_17.h"
int32_t Sys_ReadFileBlock_17(int32_t* context)

{
    int32_t* data_val = *context;

    if (data_val)
    {
        Sys_PopStack_21(data_val);
        Sys_ExecuteBytecode_2(*context);
        *context = 0;
    }

    void* data_2 = context[3];

    if (data_2)
        Sys_PushStack_20(data_2);

    int32_t data_3 = context[4];

    if (data_3)
    {
        int32_t i = 0;

        if (data_3 > 0)
        {
            int32_t context_1 = 0;

            do
            {
                Struct_Clear36(context[1] + context_1);
                i += 1;
                context_1 += 0x24;
            } while (i < context[4]);
        }
    }

    int32_t result = Sys_ExecuteBytecode_2(context[2]);
    context[2] = 0;
    return result;
}
