#include "004B0720-Sys_ReadFileBlock.h"
/* 0x004b0720 Sys_ReadFileBlock full linked: callers=1 callees=0 */
int32_t sub_4b0720(int32_t a1, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5, int32_t* a6)

{
    int32_t ecx = *a2;
    int32_t result;
    int32_t ebx;

    if (ecx <= 0)
    {
        ebx = 0xffffffff;
        result = 0;
    }
    else
    {
        ecx -= 1;
        int32_t edx_1 = ecx * 5;
        ebx = *(a1 + (edx_1 << 2) + 0xc);
        int32_t esi_1 = *(a1 + (edx_1 << 2) + 8);
        int32_t edi_1 = *(a1 + (edx_1 << 2) + 4);
        int32_t ebp_1 = *(a1 + (edx_1 << 2));
        void* eax_1 = a1 + (edx_1 << 2);
        int32_t edx_2 = *(eax_1 + 0x10);

        if (edx_2)
        {
            *(eax_1 + 0x10) = edx_2 - 1;
            ecx += 1;
            *(eax_1 + 8) -= 1;
        }

        if (a4)
            *a4 = esi_1;

        if (a5)
            *a5 = edi_1;

        if (a6)
            *a6 = ebp_1;

        result = 1;
    }

    *a2 = ecx;

    if (a3)
        *a3 = ebx;

    return result;
}
