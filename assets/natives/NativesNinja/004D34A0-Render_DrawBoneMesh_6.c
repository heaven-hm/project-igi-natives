#include "004D34A0-Render_DrawBoneMesh_6.h"
/* 0x004d34a0 Render_DrawBoneMesh_6 full linked: callers=7 callees=7 */
int32_t sub_4d34a0(void* a1)

{
    if (!*(a1 + 0x10))
    {
        if (*sub_4d3720(a1, 0) != 0xffffffff)
            sub_4d3440(a1, 0);

        if (*sub_4d3720(a1, 1) != 0xffffffff)
            sub_4d3440(a1, 1);
    }
    else
    {
        sub_4d36e0(a1);
        sub_4d3440(a1, 0);
        sub_4d3440(a1, 1);
    }

    int32_t* edi = g_a54674;
    int32_t result = g_a54668 - 1;
    int32_t ecx_3 = *(edi + a1);
    g_a54668 = result;

    if (ecx_3 != result)
    {
        int32_t edx_1 = g_a54664;
        result = *(edx_1 + (result << 2)) * g_a54670 + g_a54660;
        int32_t esi_2 = *(edi + result);
        int32_t edi_1 = *(edx_1 + (ecx_3 << 2));
        *(edx_1 + (ecx_3 << 2)) = *(edx_1 + (esi_2 << 2));
        *(g_a54664 + (esi_2 << 2)) = edi_1;
        *(g_a54674 + result) = ecx_3;
    }

    return result;
}
