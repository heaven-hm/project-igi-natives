#include "004AC074-Camera_ApplyWideScreen_23.h"
/* 0x004ac074 Camera_ApplyWideScreen_23 full linked: callers=0 callees=3 */
int32_t sub_4ac074()

{
    uint32_t eax = g_c321e0;

    if (!eax)
    {
        eax = 0x200;
        g_c321e0 = eax;
    }
    else if (eax < 0x14)
    {
        eax = 0x14;
        g_c321e0 = eax;
    }

    char* eax_1 = sub_4ad809(eax, 4);
    g_c311dc = eax_1;

    if (!eax_1)
    {
        g_c321e0 = 0x14;
        char* eax_2 = sub_4ad809(0x14, 4);
        g_c311dc = eax_2;

        if (!eax_2)
            sub_4a51eb(0x1a);
    }

    int32_t* ecx_3 = nullptr;

    for (int32_t i = 0x546840; i < 0x546ac0; )
    {
        *(ecx_3 + g_c311dc) = i;
        i += 0x20;
        ecx_3 = &ecx_3[1];
    }

    int32_t edx_2 = 0;
    int32_t result;

    for (int32_t* i_1 = &g_546850; i_1 < 0x5468b0; )
    {
        result = *((&g_c32440)[edx_2 >> 5] + ((edx_2 & 0x1f) << 3));

        if (result == 0xffffffff || !result)
            *i_1 = 0xffffffff;

        i_1 = &i_1[8];
        edx_2 += 1;
    }

    return result;
}
