// IGI native provenance: Render_TransformVertices_10 - 0x004D6520 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D6520-Render_TransformVertices_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_TransformVertices_10.h"
long double Render_TransformVertices_10(void* context, float param_2)

{
    return Render_SkinBones_10(context, param_2) / Render_DrawLightmapMesh_10(context, param_2);
}
