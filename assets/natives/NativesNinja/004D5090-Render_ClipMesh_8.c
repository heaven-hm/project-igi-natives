#include "004D5090-Render_ClipMesh_8.h"
/* 0x004d5090 Render_ClipMesh_8 full linked: callers=1 callees=0 */
int32_t sub_4d5090(void* a1)

{
    int32_t* ecx = *(a1 + 0x30);

    if (ecx)
    {
        int32_t eax_3 = *ecx * 0x28;
        int32_t esi_1 = *(*(eax_3 + &g_a5390c) + ecx);
        *(eax_3 + 0xa53900) -= 1;
        int32_t eax_7 = **(a1 + 0x30) * 0x28;
        int32_t ecx_1 = *(eax_7 + 0xa53900);

        if (esi_1 != ecx_1)
        {
            int32_t edx_2 = *(eax_7 + &g_a538fc);
            int32_t ecx_4 = *(edx_2 + (ecx_1 << 2)) * *(eax_7 + 0xa53908) + *(eax_7 + 0xa538f8);
            int32_t ebx_2 = *(edx_2 + (esi_1 << 2));
            int32_t eax_9 = *(*(eax_7 + &g_a5390c) + ecx_4);
            *(edx_2 + (esi_1 << 2)) = *(edx_2 + (eax_9 << 2));
            *(*(**(a1 + 0x30) * 0x28 + &g_a538fc) + (eax_9 << 2)) = ebx_2;
            *(*(**(a1 + 0x30) * 0x28 + &g_a5390c) + ecx_4) = esi_1;
        }
    }

    int32_t* edx_8 = g_a54634;
    int32_t result = g_a54628 - 1;
    int32_t edi_1 = *(edx_8 + a1);
    g_a54628 = result;

    if (edi_1 != result)
    {
        int32_t ecx_5 = g_a54624;
        result = *(ecx_5 + (result << 2)) * g_a54630 + g_a54620;
        int32_t esi_3 = *(ecx_5 + (edi_1 << 2));
        int32_t edx_9 = *(edx_8 + result);
        *(ecx_5 + (edi_1 << 2)) = *(ecx_5 + (edx_9 << 2));
        *(g_a54624 + (edx_9 << 2)) = esi_3;
        *(g_a54634 + result) = edi_1;
    }

    return result;
}
