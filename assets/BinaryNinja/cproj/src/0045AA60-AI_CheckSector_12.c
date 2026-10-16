#include "gi_platform.h"
#include "0045AA60-AI_CheckSector_12.h"
void* AI_CheckSector_12(void* a1, float a2)

{
    float srcS = a2;
    (*(int32_t*)(uintptr_t)(srcS + 0x33d)) = 0;
    (*(int32_t*)(uintptr_t)(srcS + 0x696)) = 0;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0.0f);
    Human_StateAnimation(srcS, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0xc));

    if (result > 0 && result <= 3)
        result = Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);

    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_457fc0;
    return result;
}
