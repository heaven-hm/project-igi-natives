// Original IGI.EXE function: AI_AlertAllies_9 (VA 0x004581E0; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_9.h"
void* AI_AlertAllies_9(void* a1, float a2)

{
    float srcS = a2;
    *(srcS + 0x33d) = 0;
    *(srcS + 0x696) = 0;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0f);
    Human_StateAnimation(srcS, *(a1 + 0x10), 0f);
    int32_t valA1 = *(a1 + 0xc);
    void* result;

    if (valA1 != 1 && valA1 != 3)
        result = valA1 - 0x11;

    if (valA1 == 1 || valA1 == 3 || valA1 == 0x11)
        result = Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);

    *(a1 + 0x14) = sub_45ad10;
    return result;
}
