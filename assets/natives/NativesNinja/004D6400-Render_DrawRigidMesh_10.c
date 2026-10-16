#include "004D6400-Render_DrawRigidMesh_10.h"
/* 0x004d6400 Render_DrawRigidMesh_10 full linked: callers=1 callees=0 */
int32_t sub_4d6400(int32_t a1)

{
    int32_t* esi = g_a54654;
    int32_t edx = *(esi + a1);
    int32_t result = g_a54648 - 1;
    g_a54648 = result;

    if (edx != result)
    {
        int32_t ecx_1 = g_a54644;
        result = *(ecx_1 + (result << 2)) * g_a54650 + g_a54640;
        int32_t edi_2 = *(ecx_1 + (edx << 2));
        int32_t esi_1 = *(esi + result);
        *(ecx_1 + (edx << 2)) = *(ecx_1 + (esi_1 << 2));
        *(g_a54644 + (esi_1 << 2)) = edi_2;
        *(g_a54654 + result) = edx;
    }

    return result;
}
