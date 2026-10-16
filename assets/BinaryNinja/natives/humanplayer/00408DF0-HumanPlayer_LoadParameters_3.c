#include "HumanPlayer_LoadParameters_3.h"
int32_t HumanPlayer_LoadParameters_3(void* a1, float a2)

{
    float srcS = a2;
    *(srcS + 0x33d) = 0;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0f);
    Human_StateAnimation(srcS, *(a1 + 0x10), 0.200000003f);
    int32_t valA1 = *(a1 + 0xc);

    if (valA1 == 1 || valA1 == 0xb || valA1 == 0x16)
        Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);

    int32_t result = HumanPlayer_ApplyRecoil_9(srcS, 3);
    *(a1 + 0x14) = HumanPlayer_UpdateMotion_2;
    return result;
}
