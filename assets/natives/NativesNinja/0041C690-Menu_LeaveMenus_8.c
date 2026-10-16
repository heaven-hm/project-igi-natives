#include "0041C690-Menu_LeaveMenus_8.h"
/* 0x0041c690 Menu_LeaveMenus_8 full linked: callers=1 callees=2 */
int32_t Menu_LeaveMenus_8(int32_t a1, int32_t a2)

{
    void* edx_2 = g_57bbb0;
    int32_t eax = *(edx_2 + 0x1254);
    int32_t ecx_1 = 0;

    if (eax > 0)
    {
        int32_t* edx = edx_2 + 0x54;

        do
        {
            if (*edx == a2)
                return eax;

            ecx_1 += 1;
            edx = &edx[0x12];
        } while (ecx_1 < eax);
    }

    *(edx_2 + eax * 0x48 + 0x54) = a2;
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

    int32_t ecx_2 = ~i;
    int32_t esi_2;
    int32_t edi_4;
    edi_4 = memcpy(edx_2 + eax * 0x48 + 0x58, edi_1 - ecx_2, ecx_2 & 0xfffffffc);
    memcpy(edi_4, esi_2, ecx_2 & 3);
    *(edx_2 + 0x1254) += 1;
    return ecx_2;
}
