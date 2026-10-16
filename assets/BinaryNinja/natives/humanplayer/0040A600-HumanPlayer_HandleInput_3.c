#include "HumanPlayer_HandleInput_3.h"
int32_t HumanPlayer_HandleInput_3(void* a1, float a2)

{
    float srcS = a2;
    *(srcS + 0x33d) = 0;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0f);
    Human_StateAnimation(srcS, *(a1 + 0x10), 0.200000003f);

    if (*(a1 + 0xc) == 0x1a)
        Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);

    int32_t result = HumanPlayer_ApplyRecoil_9(srcS, 2);
    *(a1 + 0x14) = sub_40a670;
    return result;
}
