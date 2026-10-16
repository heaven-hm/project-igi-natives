#include "gi_platform.h"
#include "004BD380-Sys_CheckHeap_28.h"
int32_t Sys_CheckHeap_28(void* a1)

{
    int32_t i = 0;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x50)) > 0)
    {
        do
        {
            int32_t* valA2 = (*(int32_t*)(uintptr_t)(*(a1 + 0x64) + (i << 2)));

            if (valA2)
                Sys_PushStack_25(valA2);

            i += 1;
        } while (i < (*(int32_t*)(uintptr_t)(a1 + 0x50)));
    }

    Resource_Flush((*(int32_t*)(uintptr_t)(a1 + 0x468)));
    return Sys_ExecuteBytecode_2(a1);
}
