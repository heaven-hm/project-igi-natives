#include "gi_platform.h"
#include "004581E0-AI_AlertAllies_9.h"
void* AI_AlertAllies_9(void* a1, float a2)

{
    float srcS = a2;
    (*(int32_t*)(uintptr_t)(srcS + 0x33d)) = 0;
    (*(int32_t*)(uintptr_t)(srcS + 0x696)) = 0;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0.0f);
    Human_StateAnimation(srcS, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xc));
    void* result;

    if (valA1 != 1 && valA1 != 3)
        result = valA1 - 0x11;

    if (valA1 == 1 || valA1 == 3 || valA1 == 0x11)
        result = Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);

    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_45ad10;
    return result;
}
