// Original IGI.EXE function: HumanPlayer_UpdateMotion_4 (VA 0x0040B390; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateMotion_4.h"
int32_t HumanPlayer_UpdateMotion_4(void* a1, float a2)

{
    float srcS = a2;
    *(srcS + 0x33d) = 1;
    a2 = Render_TransformVertices_10(srcS + 0x68, 0f);
    Human_StateAnimation(srcS, *(a1 + 0x10), 0.200000003f);
    int32_t valA1 = *(a1 + 0xc);

    if (valA1 == 5 || valA1 == 0xd || valA1 == 0x17)
        Render_BindTexture_10(srcS + 0x68, 0, Render_DrawLightmapMesh_10(srcS + 0x68, 0) * a2);

    int32_t result = HumanPlayer_ApplyRecoil_9(srcS, 5);
    *(a1 + 0x14) = sub_40b410;
    return result;
}
