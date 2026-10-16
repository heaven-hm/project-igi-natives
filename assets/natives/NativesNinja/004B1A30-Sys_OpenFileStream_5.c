#include "004B1A30-Sys_OpenFileStream_5.h"
/* 0x004b1a30 Sys_OpenFileStream_5 full linked: callers=4 callees=4 */
int32_t sub_4b1a30(void* a1)

{
    int32_t* eax = sub_4b1a90(a1);
    int32_t ecx = eax[3];
    int32_t eax_4 = *(ecx * 0x8c + &g_943700);

    if (!eax_4)
    {
        sub_4b0d10(a1);
        return sub_4bada0(eax);
    }

    eax_4(ecx, eax);
    return sub_4bada0(eax);
}
