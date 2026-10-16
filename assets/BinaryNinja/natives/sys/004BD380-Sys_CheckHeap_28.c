#include "Sys_CheckHeap_28.h"
int32_t Sys_CheckHeap_28(void* a1)

{
    int32_t i = 0;

    if (*(a1 + 0x50) > 0)
    {
        do
        {
            int32_t* valA2 = *(*(a1 + 0x64) + (i << 2));

            if (valA2)
                Sys_PushStack_25(valA2);

            i += 1;
        } while (i < *(a1 + 0x50));
    }

    Resource_Flush(*(a1 + 0x468));
    return Sys_ExecuteBytecode_2(a1);
}
