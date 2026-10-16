#include "004DAAF0-Render_ComputeNormals_13.h"
/* 0x004daaf0 Render_ComputeNormals_13 full linked: callers=1 callees=0 */
int32_t sub_4daaf0(int32_t a1)

{
    int32_t* esi = g_b041f4;
    int32_t edx = *(esi + a1);
    int32_t result = g_b041e8 - 1;
    g_b041e8 = result;

    if (edx != result)
    {
        int32_t ecx_1 = g_b041e4;
        result = *(ecx_1 + (result << 2)) * g_b041f0 + g_b041e0;
        int32_t edi_2 = *(ecx_1 + (edx << 2));
        int32_t esi_1 = *(esi + result);
        *(ecx_1 + (edx << 2)) = *(ecx_1 + (esi_1 << 2));
        *(g_b041e4 + (esi_1 << 2)) = edi_2;
        *(g_b041f4 + result) = edx;
    }

    return result;
}
