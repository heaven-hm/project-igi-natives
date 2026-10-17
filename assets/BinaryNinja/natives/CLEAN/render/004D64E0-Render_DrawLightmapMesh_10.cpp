// IGI native provenance: Render_DrawLightmapMesh_10 - 0x004D64E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D64E0-Render_DrawLightmapMesh_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawLightmapMesh_10.h"
long double Render_DrawLightmapMesh_10(void* context, int32_t param_2)

{
    return **(Render_DrawBoneMesh_10(context, param_2) + 0xc);
}
