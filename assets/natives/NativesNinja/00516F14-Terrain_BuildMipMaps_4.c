#include "00516F14-Terrain_BuildMipMaps_4.h"
/* 0x00516f14 Terrain_BuildMipMaps_4 full linked: callers=5 callees=3 */
char* sub_516f14(char* a1, char* a2, int32_t a3)

{
    char* edi = a1;
    a1 = edi;

    if (!g_c3221c)
        return sub_4a5500(edi, a2, a3);

    int32_t i = a3;

    if (i)
    {
        char* ecx_1 = a2;

        do
        {
            char eax_2 = *ecx_1;
            i -= 1;
            bool cond:2_1 = !(*(eax_2 + 0xc32321) & 4);
            *edi = eax_2;

            if (cond:2_1)
            {
                edi = &edi[1];
                ecx_1 = &ecx_1[1];

                if (!eax_2)
                    break;
            }
            else
            {
                edi = &edi[1];

                if (!i)
                {
                    edi[0xffffffff] = 0;
                    break;
                }

                eax_2 = ecx_1[1];
                i -= 1;
                *edi = eax_2;
                edi = &edi[1];
                ecx_1 = &ecx_1[2];

                if (!eax_2)
                {
                    edi[0xfffffffe] = 0;
                    break;
                }
            }
        } while (i);
    }

    if (i)
        __builtin_memset(__builtin_memset(edi, 0, i & 0xfffffffc), 0, i & 3);

    return a1;
}
