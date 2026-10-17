// Original IGI.EXE function: Terrain_BuildMipMaps (VA 0x005125A0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_BuildMipMaps.h"
int32_t Terrain_BuildMipMaps()

{
    BoneDynCubeObj_Init();
    int32_t data_val = Render_DrawSplineMesh_4();
    return QTask_RemoveEventCallback(Render_DrawRigidMesh_12(), data_val, Terrain_RenderQuadtree_2);
}
