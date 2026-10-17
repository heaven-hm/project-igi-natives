// Original IGI.EXE function: Sys_AllocateMemory_7 (VA 0x004B1E00; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_7.h"
char* Sys_AllocateMemory_7(char* context, int32_t param_2, char* param_3)

{
    int32_t source_val = 0;
    char i = *param_3;

    while (i)
    {
        if (i == 0x3a)
        {
            if (context)
            {
                Camera_ApplyLineFilter_5(context, &param_3[source_val + 1], param_2);
                context[param_2 - 1] = 0;
            }

            return &param_3[source_val + 1];
        }

        i = param_3[source_val + 1];
        source_val += 1;
    }

    if (context)
    {
        Camera_ApplyLineFilter_5(context, param_3, param_2);
        context[param_2 - 1] = 0;
    }

    return param_3;
}
