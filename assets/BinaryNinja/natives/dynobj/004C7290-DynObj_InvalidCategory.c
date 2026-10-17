// Original IGI.EXE function: DynObj_InvalidCategory (VA 0x004C7290; static CFG gate PASS, CFG score 1.000).
#include "DynObj_InvalidCategory.h"
int32_t DynObj_InvalidCategory(int32_t context, int16_t param_2)

{
    uint32_t data_1 = param_2 << 2;
    int32_t temp_val;

    if (*(data_1 + &g_a982e0) || *(data_1 + &g_a988e0) || *(data_1 + &g_a9c4e0)
            || *(data_1 + &g_a9cae0))
        temp_val = 1;
    else
        temp_val = 0;

    int32_t data_2;

    if (*(data_1 + &g_a9ace0) || *(data_1 + &g_a9a0e0) || *(data_1 + &g_a9a6e0)
            || *(data_1 + &g_a99ae0))
        data_2 = 1;
    else
        data_2 = 0;

    if (context == 4)
        return context;

    if (context == 8)
        return 5;

    if (context == 2)
    {
        if (temp_val)
        {
            int32_t data_5 = -(data_2);
            return data_5 - data_5 + context;
        }

        int32_t data_8 = -(data_2);
        int32_t data_9 = data_8 - data_8;
        data_9 &= 0xfe;
        return data_9 + 3;
    }

    if (context == 1)
        return 0;

    Error_Show("Invalid category");

    while (true)
        /* nop */
}
