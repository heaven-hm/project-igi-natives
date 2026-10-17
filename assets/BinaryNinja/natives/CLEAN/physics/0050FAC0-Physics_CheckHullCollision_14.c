// IGI native provenance: Physics_CheckHullCollision_14 - 0x0050FAC0 - CFG score 58.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0050FAC0-Physics_CheckHullCollision_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CheckHullCollision_14.h"
int32_t Physics_CheckHullCollision_14()

{
    g_a7da10 = Sys_RendermodeFailedToCr_2("TerrainMesh_RenderAll");
    /* tailcall */
    return Terrain_RenderQuadtree_3();
}
