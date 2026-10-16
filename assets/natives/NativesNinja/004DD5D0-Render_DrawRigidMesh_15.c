#include "004DD5D0-Render_DrawRigidMesh_15.h"
/* 0x004dd5d0 Render_DrawRigidMesh_15 full linked: callers=1 callees=1 */
int32_t sub_4dd5d0(int32_t a1, int32_t* a2, int32_t* a3)

{
    int32_t edx_4 = g_a5e354;

    if (a1 == edx_4 && edx_4 == g_a538d0)
    {
        g_b12b78 = *a2;
        g_b12b7c = a2[1];
        g_b16c60 = *a3;
        g_b16c64 = a3[1];
        g_54843c = 1;
    }

    sub_497520(0xbcaba0, a2, a3);
    return (*((*g_548694 << 2) + &g_a982e0))(a1, 0);
}
