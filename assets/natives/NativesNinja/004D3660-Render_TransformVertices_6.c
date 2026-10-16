#include "004D3660-Render_TransformVertices_6.h"
/* 0x004d3660 Render_TransformVertices_6 full linked: callers=1 callees=1 */
int32_t sub_4d3660(void* a1)

{
    int32_t eax = *(a1 + 0xc);

    if (eax)
        eax(*(a1 + 0x10));

    __builtin_memset(a1, 0, 0x14);
    int32_t* edx = g_a54604;
    int32_t esi_1 = *(edx + a1);
    int32_t result = g_a545f8 - 1;
    g_a545f8 = result;

    if (esi_1 != result)
    {
        int32_t ecx_2 = g_a545f4;
        result = *(ecx_2 + (result << 2)) * g_a54600 + g_a545f0;
        int32_t edi_2 = *(ecx_2 + (esi_1 << 2));
        int32_t edx_1 = *(edx + result);
        *(ecx_2 + (esi_1 << 2)) = *(ecx_2 + (edx_1 << 2));
        *(g_a545f4 + (edx_1 << 2)) = edi_2;
        *(g_a54604 + result) = esi_1;
    }

    return result;
}
