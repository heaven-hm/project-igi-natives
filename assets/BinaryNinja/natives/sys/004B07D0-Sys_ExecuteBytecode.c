// Original IGI.EXE function: Sys_ExecuteBytecode (VA 0x004B07D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode.h"
int32_t Sys_ExecuteBytecode(int32_t* context, int32_t* param_2, int32_t* param_3, int32_t param_4, int32_t* param_5, int32_t param_6, int32_t param_7)

{
    int32_t dest_val = param_4;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t i_1 = 0;

    if (~i - 1 > 0)
    {
        int32_t dest_1 = param_7;

        do
        {
            if (Sys_AllocateMemory(&param_7, param_3, i_1 + param_4, param_5, param_6, dest_1))
            {
                if (context)
                    *context = i_1;

                if (param_2)
                    *param_2 = param_7;

                return 1;
            }

            i_1 += 1;
        } while (i_1 < ~i - 1);
    }

    return 0;
}
