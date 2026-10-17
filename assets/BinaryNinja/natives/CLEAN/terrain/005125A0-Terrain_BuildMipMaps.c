// IGI native provenance: Terrain_BuildMipMaps - 0x005125A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005125A0-Terrain_BuildMipMaps.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_BuildMipMaps.h"
int32_t Terrain_BuildMipMaps()

{
    BoneDynCubeObj_Init();
    int32_t data_val = Render_DrawSplineMesh_4();
    return QTask_RemoveEventCallback(Render_DrawRigidMesh_12(), data_val, Terrain_RenderQuadtree_2);
}
