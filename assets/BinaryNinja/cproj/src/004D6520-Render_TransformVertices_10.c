#include "gi_platform.h"
#include "004D6520-Render_TransformVertices_10.h"
long double Render_TransformVertices_10(void* a1, float a2)

{
    return Render_SkinBones_10(a1, a2) / Render_DrawLightmapMesh_10(a1, a2);
}
