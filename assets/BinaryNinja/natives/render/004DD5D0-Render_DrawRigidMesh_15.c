// Original IGI.EXE function: Render_DrawRigidMesh_15 (VA 0x004DD5D0; static CFG gate FAIL, CFG score 0.833).
#include "Render_DrawRigidMesh_15.h"
int32_t Render_DrawRigidMesh_15(int32_t a1, int32_t* a2, int32_t* a3)

{
    int32_t tmpD4 = g_a5e354;

    if (a1 == tmpD4 && tmpD4 == g_a538d0)
    {
        g_b12b78 = *a2;
        g_b12b7c = a2[1];
        g_b16c60 = *a3;
        g_b16c64 = a3[1];
        g_54843c = 1;
    }

    Display_CloseDevice_13(0xbcaba0, a2, a3);
    return (*((*g_548694 << 2) + &g_a982e0))(a1, 0);
}
