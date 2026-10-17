// Original IGI.EXE function: Sys_ExecuteBytecode_28 (VA 0x004BCFD0; static CFG gate FAIL, CFG score 0.667).
#include "Sys_ExecuteBytecode_28.h"
int32_t Sys_ExecuteBytecode_28(int32_t* context)

{
    context[0xb] = 0;
    int32_t i;

    do
    {
        i = context[8];

        if (i)
            break;

        int32_t temp_1 = 0;
        temp_1 = context[5][*context];
        (*(temp_1 * 0x18 + &g_a96108))(context, 0, temp_1, 0);
        i = context[0xb];
    } while (!i);

    return i;
}
