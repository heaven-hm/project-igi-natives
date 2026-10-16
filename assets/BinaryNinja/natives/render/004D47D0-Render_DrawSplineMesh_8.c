#include "Render_DrawSplineMesh_8.h"
int32_t* Render_DrawSplineMesh_8(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t* result = Render_ClipMesh_7();
    int32_t* tmpD = *(*(a1 * 0x28 + &g_a538f4) + (a3 << 2));
    int32_t* valA1 = Render_SetupLighting_8();
    int32_t objC1 = a4;
    *(&objC1 + 1) |= 0x80;
    Render_BindTexture_8(valA1, tmpD, objC1, a1, a2, a3);
    Render_DrawRigidMesh_8(result, Render_DrawLightmapMesh_8, sub_4d5180, Render_SkinBones_8, sub_4d5080, valA1);
    return result;
}
