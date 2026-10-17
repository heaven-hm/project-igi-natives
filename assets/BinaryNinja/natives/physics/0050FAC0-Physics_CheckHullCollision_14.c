// Original IGI.EXE function: Physics_CheckHullCollision_14 (VA 0x0050FAC0; static CFG gate FAIL, CFG score 0.583).
#include "Physics_CheckHullCollision_14.h"
int32_t Physics_CheckHullCollision_14()

{
    g_a7da10 = Sys_RendermodeFailedToCr_2("TerrainMesh_RenderAll");
    /* tailcall */
    return Terrain_RenderQuadtree_3();
}
