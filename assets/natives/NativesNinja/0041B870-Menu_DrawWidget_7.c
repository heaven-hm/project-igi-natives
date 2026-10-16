#include "0041B870-Menu_DrawWidget_7.h"
/* 0x0041b870 Menu_DrawWidget_7 full linked: callers=1 callees=2 */
int32_t Menu_DrawWidget_7(int32_t a1, int32_t a2)

{
    void* edx_2 = g_57bba4;
    int32_t result = *(edx_2 + 0x958);
    void* ebp = edx_2 + result * 0x48 + 0x54;
    int32_t ecx_1 = 0;

    if (result > 0)
    {
        int32_t* edx = edx_2 + 0x94;

        do
        {
            if (*edx == a2)
                return result;

            ecx_1 += 1;
            edx = &edx[0x12];
        } while (ecx_1 < result);
    }

    int32_t edi_1 = a1;
    int32_t i = 0xffffffff;
    *(ebp + 0x40) = a2;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_2 = ~i;
    int32_t esi_2;
    int32_t edi_4;
    edi_4 = memcpy(ebp, edi_1 - ecx_2, ecx_2 & 0xfffffffc);
    memcpy(edi_4, esi_2, ecx_2 & 3);
    *(edx_2 + 0x958) += 1;
    return 0;
}
