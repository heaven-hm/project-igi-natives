#include "004E54E0-DynCubeObj_Action.h"
/* 0x004e54e0 DynCubeObj_Action full linked: callers=4 callees=1 */
int32_t sub_4e54e0(int32_t* a1)

{
    int32_t* esi = g_b019f4;
    int32_t ecx = *(*a1 + esi);
    int32_t eax_2 = g_b019e8 - 1;
    g_b019e8 = eax_2;

    if (ecx != eax_2)
    {
        int32_t edx_1 = g_b019e4;
        int32_t eax_5 = *(edx_1 + (eax_2 << 2)) * g_b019f0 + g_b019e0;
        int32_t edi_2 = *(edx_1 + (ecx << 2));
        int32_t esi_1 = *(esi + eax_5);
        *(edx_1 + (ecx << 2)) = *(edx_1 + (esi_1 << 2));
        *(g_b019e4 + (esi_1 << 2)) = edi_2;
        *(g_b019f4 + eax_5) = ecx;
    }

    return sub_4b0d10(a1);
}
