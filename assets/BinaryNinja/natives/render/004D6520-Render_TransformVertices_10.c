// Original IGI.EXE function: Render_TransformVertices_10 (VA 0x004D6520; static CFG gate PASS, CFG score 1.000).
#include "Render_TransformVertices_10.h"
long double Render_TransformVertices_10(void* context, float param_2)

{
    return Render_SkinBones_10(context, param_2) / Render_DrawLightmapMesh_10(context, param_2);
}
