#include "0041B290-Menu_FormatScreen_7.h"
/* 0x0041b290 Menu_FormatScreen_7 full linked: callers=1 callees=2 */
int32_t Menu_FormatScreen_7(int32_t a1, int32_t a2)

{
    void* edx_2 = g_57bba0;
    int32_t result = *(edx_2 + 0x21a0);
    void* ebp = edx_2 + result * 0x108 + 0x9c;
    int32_t ecx_3 = 0;

    if (result > 0)
    {
        int32_t* edx = edx_2 + 0x19c;

        do
        {
            if (*edx == a2)
                return result;

            ecx_3 += 1;
            edx = &edx[0x42];
        } while (ecx_3 < result);
    }

    int32_t edi_1 = a1;
    int32_t i = 0xffffffff;
    *(ebp + 0x100) = a2;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_4 = ~i;
    int32_t esi_2;
    int32_t edi_4;
    edi_4 = memcpy(ebp, edi_1 - ecx_4, ecx_4 & 0xfffffffc);
    memcpy(edi_4, esi_2, ecx_4 & 3);
    *(edx_2 + 0x21a0) += 1;
    return 0;
}
