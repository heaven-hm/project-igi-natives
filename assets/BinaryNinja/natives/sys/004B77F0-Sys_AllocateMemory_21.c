// Original IGI.EXE function: Sys_AllocateMemory_21 (VA 0x004B77F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_21.h"
void* Sys_AllocateMemory_21(int32_t* context, char* param_2, int32_t param_3, void* param_4)

{
    char* source_val = param_2;
    char i = *source_val;
    int32_t temp_2 = *(context[2] + 0xc) + 0x10;

    if (i)
    {
        void* data_3 = context + context[1] * param_4 + param_3 + 0x10;

        do
        {
            data_3 += 1;
            source_val = &source_val[1];
            *(data_3 - 1) = *(i + temp_2);
            i = *source_val;
        } while (i);
    }

    return Sys_CheckHeap_20(context, param_4);
}
