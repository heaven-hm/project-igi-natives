#include "004AE35D-Camera_ApplyWideScreen_29.h"
/* 0x004ae35d Camera_ApplyWideScreen_29 full linked: callers=2 callees=0 */
int32_t sub_4ae35d(int32_t a1, int32_t a2)

{
    int32_t eax;
    char ecx_4;
    char* edx_1;

    if (a1 < g_c32540)
    {
        eax = a1 & 0x1f;
        int32_t ecx_3 = (&g_c32440)[a1 >> 5];
        edx_1 = ecx_3 + (eax << 3) + 4;
        ecx_4 = *(ecx_3 + (eax << 3) + 4);
    }

    if (a1 >= g_c32540 || !(ecx_4 & 1))
        g_936064 = 9;
    else
    {
        eax = ecx_4;
        int32_t eax_1 = eax & 0x80;

        if (a2 == 0x8000)
        {
            ecx_4 &= 0x7f;
        label_4ae3aa:
            int32_t eax_2 = -(eax_1);
            int32_t eax_3 = eax_2 - eax_2;
            *edx_1 = ecx_4;
            eax_3 &= 0xc000;
            return eax_3 + 0x8000;
        }

        if (a2 == 0x4000)
        {
            ecx_4 |= 0x80;
            goto label_4ae3aa;
        }

        g_936064 = 0x16;
    }

    return 0xffffffff;
}
