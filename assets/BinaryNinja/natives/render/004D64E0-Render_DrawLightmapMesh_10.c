#include "Render_DrawLightmapMesh_10.h"
long double Render_DrawLightmapMesh_10(void* a1, int32_t a2)

{
    return **(Render_DrawBoneMesh_10(a1, a2) + 0xc);
}
