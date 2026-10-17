// IGI native provenance: Render_DrawRigidMesh_15 - 0x004DD5D0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004DD5D0-Render_DrawRigidMesh_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawRigidMesh_15.h"
int32_t Render_DrawRigidMesh_15(int32_t context, int32_t* param_2, int32_t* param_3)

{
    int32_t temp_4 = g_a5e354;

    if (context == temp_4 && temp_4 == g_a538d0)
    {
        g_b12b78 = *param_2;
        g_b12b7c = param_2[1];
        g_b16c60 = *param_3;
        g_b16c64 = param_3[1];
        g_54843c = 1;
    }

    Display_CloseDevice_13(0xbcaba0, param_2, param_3);
    return (*((*g_548694 << 2) + &g_a982e0))(context, 0);
}
