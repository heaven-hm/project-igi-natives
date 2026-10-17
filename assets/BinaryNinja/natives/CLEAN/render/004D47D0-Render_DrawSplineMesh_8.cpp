// IGI native provenance: Render_DrawSplineMesh_8 - 0x004D47D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D47D0-Render_DrawSplineMesh_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawSplineMesh_8.h"
int32_t* Render_DrawSplineMesh_8(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    int32_t* result = Render_ClipMesh_7();
    int32_t* temp_val = *(*(context * 0x28 + &g_a538f4) + (param_3 << 2));
    int32_t* data_1 = Render_SetupLighting_8();
    int32_t entity_1 = param_4;
    *(&entity_1 + 1) |= 0x80;
    Render_BindTexture_8(data_1, temp_val, entity_1, context, param_2, param_3);
    Render_DrawRigidMesh_8(result, Render_DrawLightmapMesh_8, sub_4d5180, Render_SkinBones_8, sub_4d5080, data_1);
    return result;
}
