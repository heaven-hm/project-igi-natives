#include "00401B20-Qtask_UpdateList.h"
/* 0x00401b20 Qtask_UpdateList full linked: callers=90 callees=0 */
int32_t Qtask_UpdateList(int32_t* a1)

// Sig: void Qtask_UpdateList(int* p1)
// Note: Update all QTask list, Params: p1 ??
{
    void* eax = *a1;

    if (eax)
        *(eax + 0x18) -= 1;

    int32_t* esi = g_567c4c;
    int32_t result = g_567c40 - 1;
    int32_t ecx = *(esi + a1);
    g_567c40 = result;

    if (ecx != result)
    {
        int32_t edx_1 = g_567c3c;
        result = *(edx_1 + (result << 2)) * g_567c48 + g_567c38;
        int32_t edi_2 = *(edx_1 + (ecx << 2));
        int32_t esi_1 = *(esi + result);
        *(edx_1 + (ecx << 2)) = *(edx_1 + (esi_1 << 2));
        *(g_567c3c + (esi_1 << 2)) = edi_2;
        *(g_567c4c + result) = ecx;
    }

    return result;
}
