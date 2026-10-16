#include "AI_CheckHearing_13.h"
void* AI_CheckHearing_13(void* a1, float a2)

{
    float srcS = a2;
    *(srcS + 0x33d) = 0;
    *(srcS + 0x696) = 0;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0f);
    Human_StateAnimation(srcS, *(a1 + 0x10), 0f);
    void* result = *(a1 + 0xc);

    if (result > 0 && result <= 2)
        result = Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);

    *(a1 + 0x14) = sub_4582c0;
    return result;
}
