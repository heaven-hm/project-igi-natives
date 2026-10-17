// Original IGI.EXE function: Sys_CheckHeap_28 (VA 0x004BD380; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_28.h"
int32_t Sys_CheckHeap_28(void* context)

{
    int32_t i = 0;

    if (*(context + 0x50) > 0)
    {
        do
        {
            int32_t* data_2 = *(*(context + 0x64) + (i << 2));

            if (data_2)
                Sys_PushStack_25(data_2);

            i += 1;
        } while (i < *(context + 0x50));
    }

    Resource_Flush(*(context + 0x468));
    return Sys_ExecuteBytecode_2(context);
}
