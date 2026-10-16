#include "004B1F30-Sys_CloseFileStream_7.h"
/* 0x004b1f30 Sys_CloseFileStream_7 full linked: callers=2 callees=0 */
int32_t sub_4b1f30(int32_t a1, int32_t a2 @ 0xc)

{
    int32_t edi = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    char* ecx_1 = ecx - 1;

    if (ecx - 1 < 0)
        return a1;

    char* esi = &ecx_1[a2];

    while (true)
    {
        char edx_1 = *esi;

        if (edx_1 == 0x2e)
        {
            ecx_1[a1] = 0;
            ecx_1 -= 1;
            break;
        }

        if (edx_1 == 0x2f)
            break;

        if (edx_1 == 0x5c)
            break;

        if (edx_1 == 0x3a)
            break;

        *(a1 - a2 + esi) = edx_1;
        ecx_1 -= 1;
        esi -= 1;

        if (ecx_1 < 0)
            return a1;
    }

    if (ecx_1 >= 0)
    {
        char* edx_2 = &ecx_1[a1];
        void* i_2 = &ecx_1[1];
        void* i_1;

        do
        {
            *edx_2 = *(a2 - a1 + edx_2);
            edx_2 -= 1;
            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
    }

    return a1;
}
