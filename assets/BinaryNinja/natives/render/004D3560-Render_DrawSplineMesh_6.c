// IGI native provenance: Render_DrawSplineMesh_6 - 0x004D3560 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D3560-Render_DrawSplineMesh_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawSplineMesh_6.h"
int32_t* Render_DrawSplineMesh_6(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t param_9, int32_t param_10)

{
    int32_t* result = Render_DrawLightmapMesh_6();
    Render_SkinBones_6(result, 0, context, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);
    return result;
}
