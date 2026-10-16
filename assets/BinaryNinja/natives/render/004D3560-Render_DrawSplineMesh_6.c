#include "Render_DrawSplineMesh_6.h"
int32_t* Render_DrawSplineMesh_6(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10)

{
    int32_t* result = Render_DrawLightmapMesh_6();
    Render_SkinBones_6(result, 0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    return result;
}
