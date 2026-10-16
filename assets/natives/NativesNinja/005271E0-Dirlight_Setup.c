#include "005271E0-Dirlight_Setup.h"
/* 0x005271e0 Dirlight_Setup full linked: callers=0 callees=2 */
int32_t sub_5271e0(void* a1)

{
    int32_t eax = *(a1 + 0x48);

    if (eax)
        sub_4daaf0(eax);

    int32_t* esi = g_ba1e14;
    int32_t ecx = *(*(a1 + 0x60) + esi);
    int32_t eax_3 = g_ba1e08 - 1;
    g_ba1e08 = eax_3;

    if (ecx != eax_3)
    {
        int32_t edx_1 = g_ba1e04;
        int32_t eax_6 = *(edx_1 + (eax_3 << 2)) * g_ba1e10 + g_ba1e00;
        int32_t edi_2 = *(edx_1 + (ecx << 2));
        int32_t esi_1 = *(esi + eax_6);
        *(edx_1 + (ecx << 2)) = *(edx_1 + (esi_1 << 2));
        *(g_ba1e04 + (esi_1 << 2)) = edi_2;
        *(g_ba1e14 + eax_6) = ecx;
    }

    return sub_526920(a1);
}
