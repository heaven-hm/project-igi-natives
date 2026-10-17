// Original IGI.EXE function: AI_CheckSector_12 (VA 0x0045AA60; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_12.h"
void* AI_CheckSector_12(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 0;
    *(source_val + 0x696) = 0;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.0f);
    void* result = *(context + 0xc);

    if (result > 0 && result <= 3)
        result = Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    *(context + 0x14) = sub_457fc0;
    return result;
}
