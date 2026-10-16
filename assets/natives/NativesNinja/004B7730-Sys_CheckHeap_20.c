#include "004B7730-Sys_CheckHeap_20.h"
/* 0x004b7730 Sys_CheckHeap_20 full linked: callers=2 callees=2 */
void* sub_4b7730(int32_t* a1, void* a2)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    void* eax = a1[2];
    int32_t edi = a1[1];
    int32_t ecx_1 = *(eax + 8);
    int32_t esi = 0;
    int16_t ebp = 0;
    int32_t ecx_3 = *a1;

    if (!ecx_3)
    {
        int32_t eax_1 = sub_4b6ce0(eax);
        char* ecx_4 = nullptr;

        if (edi > 0)
        {
            do
            {
                if (!*(ecx_4 + edi * a2 + a1 + 0x10))
                    esi += eax_1;
                else
                {
                    esi += eax_1;
                    ebp = esi;
                }

                ecx_4 = &ecx_4[1];
            } while (ecx_4 < edi);
        }

        int32_t eax_2 = a1[3];
        *(eax_2 + (a2 << 1)) = ebp;
        return eax_2;
    }

    if (ecx_3 == 1)
    {
        int32_t eax_3 = sub_4b6d20(eax);
        char* edx_3 = nullptr;

        if (edi > 0)
        {
            do
            {
                char ecx_8 = *(edx_3 + edi * a2 + a1 + 0x10);

                if (!ecx_8)
                    esi += eax_3;
                else
                {
                    esi += *(ecx_1 + ecx_8 * 0x24 - 0x14);
                    ebp = esi;
                }

                edx_3 = &edx_3[1];
            } while (edx_3 < edi);
        }

        eax = a2;
        *(a1[3] + (eax << 1)) = ebp;
    }

    return eax;
}
