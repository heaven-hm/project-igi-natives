// Original IGI.EXE function: Sys_AllocateMemory_3 (VA 0x004B0EE0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_3.h"
int32_t Sys_AllocateMemory_3(int32_t context, int32_t param_2)

{
    int32_t dest_val = 0;
    char result;

    for (int32_t* i = &g_a950a0; i < &g_a960e0; )
    {
        result = i[0x81];

        if (result)
        {
            int32_t data_val = *i;
            int32_t item_8 = dest_val;
            int32_t item_4_1 = data_val;
            result = context(&item_8, param_2);
        }

        i = &i[0x82];
        dest_val += 1;
    }

    return result;
}
