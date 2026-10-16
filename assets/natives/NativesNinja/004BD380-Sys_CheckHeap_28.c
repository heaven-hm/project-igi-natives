#include "004BD380-Sys_CheckHeap_28.h"
/* 0x004bd380 Sys_CheckHeap_28 full linked: callers=1 callees=3 */
int32_t sub_4bd380(void* a1)

{
    int32_t i = 0;

    if (*(a1 + 0x50) > 0)
    {
        do
        {
            int32_t* eax_2 = *(*(a1 + 0x64) + (i << 2));

            if (eax_2)
                sub_4baca0(eax_2);

            i += 1;
        } while (i < *(a1 + 0x50));
    }

    Resource_Flush(*(a1 + 0x468));
    return sub_4b0d10(a1);
}
