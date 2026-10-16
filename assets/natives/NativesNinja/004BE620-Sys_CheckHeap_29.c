#include "004BE620-Sys_CheckHeap_29.h"
/* 0x004be620 Sys_CheckHeap_29 full linked: callers=1 callees=4 */
int32_t sub_4be620(int32_t* a1, int32_t* a2, int32_t* a3, float* a4, float* a5)

{
    int32_t eax = sub_4bcec0(a1, a2, a4);

    if (!eax)
        return eax;

    int32_t ecx = 0;
    ecx = eax == 2;
    int32_t eax_2 = sub_4bcec0(a1, a3, a5);

    if (eax_2)
    {
        if (!ecx)
            return eax_2;

        return 2;
    }

    if (!ecx)
    {
        sub_4bda00(a1, *a2);
        return 0;
    }

    sub_4bda30(a1, *a4);
    return 0;
}
