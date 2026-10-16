#include "004B1E00-Sys_AllocateMemory_7.h"
/* 0x004b1e00 Sys_AllocateMemory_7 full linked: callers=1 callees=2 */
char* sub_4b1e00(char* a1, int32_t a2, char* a3)

{
    int32_t esi = 0;
    char i = *a3;

    while (i)
    {
        if (i == 0x3a)
        {
            if (a1)
            {
                sub_4a5500(a1, &a3[esi + 1], a2);
                a1[a2 - 1] = 0;
            }

            return &a3[esi + 1];
        }

        i = a3[esi + 1];
        esi += 1;
    }

    if (a1)
    {
        sub_4a5500(a1, a3, a2);
        a1[a2 - 1] = 0;
    }

    return a3;
}
