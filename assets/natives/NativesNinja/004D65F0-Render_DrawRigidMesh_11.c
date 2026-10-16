#include "004D65F0-Render_DrawRigidMesh_11.h"
/* 0x004d65f0 Render_DrawRigidMesh_11 full linked: callers=1 callees=2 */
int32_t sub_4d65f0(int32_t a1)

{
    int32_t result = a1;
    int32_t esi_1 = result * 0xc;

    if (*(esi_1 + &g_a542f0))
    {
        sub_4b0d10(*(esi_1 + &g_a542f4));
        *(esi_1 + &g_a542f4) = 0;
        result = sub_4b0d10(*(esi_1 + 0xa542f8));
        *(esi_1 + &g_a542f0) = 0;
        *(esi_1 + &g_a542f4) = 0;
        *(esi_1 + 0xa542f8) = 0;
    }

    return result;
}
