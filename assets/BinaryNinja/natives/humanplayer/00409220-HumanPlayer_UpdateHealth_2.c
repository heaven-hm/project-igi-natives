// Original IGI.EXE function: HumanPlayer_UpdateHealth_2 (VA 0x00409220; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateHealth_2.h"
int32_t HumanPlayer_UpdateHealth_2(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 0;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.200000003f);
    int32_t data_1 = *(context + 0xc);

    if (data_1 == 4 || data_1 == 0xd || data_1 == 0x18)
        Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    int32_t result = HumanPlayer_ApplyRecoil_9(source_val, 3);
    *(context + 0x14) = HumanPlayer_HandleInput_2;
    return result;
}
