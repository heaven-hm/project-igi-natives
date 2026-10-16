#include "gi_platform.h"
#include "005125A0-Terrain_BuildMipMaps.h"
int32_t Terrain_BuildMipMaps()

{
    BoneDynCubeObj_Init();
    int32_t valA = Render_DrawSplineMesh_4();
    return QTask_RemoveEventCallback(Render_DrawRigidMesh_12(), valA, Terrain_RenderQuadtree_2);
}
