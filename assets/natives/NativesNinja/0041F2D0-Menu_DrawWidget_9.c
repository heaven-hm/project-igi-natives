#include "0041F2D0-Menu_DrawWidget_9.h"
/* 0x0041f2d0 Menu_DrawWidget_9 full linked: callers=3 callees=2 */
int32_t Menu_DrawWidget_9(int32_t a1, int32_t a2)

{
    void* edx_2 = g_57bbd8;
    int32_t eax = *(edx_2 + 0xbe0);
    int32_t ecx_2 = 0;

    if (eax > 0)
    {
        int32_t* edx = edx_2 + 0xe0;

        do
        {
            if (*edx == a2)
                return eax;

            ecx_2 += 1;
            edx = &edx[0xb];
        } while (ecx_2 < eax);
    }

    *(edx_2 + eax * 0x2c + 0xe0) = a2;
    int32_t edi_1 = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_3 = ~i;
    int32_t esi_2;
    int32_t edi_4;
    edi_4 = memcpy(edx_2 + eax * 0x2c + 0xe4, edi_1 - ecx_3, ecx_3 & 0xfffffffc);
    memcpy(edi_4, esi_2, ecx_3 & 3);
    *(edx_2 + 0xbe0) += 1;
    return ecx_3;
}
