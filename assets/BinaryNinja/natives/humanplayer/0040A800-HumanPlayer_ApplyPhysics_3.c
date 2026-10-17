// Original IGI.EXE function: HumanPlayer_ApplyPhysics_3 (VA 0x0040A800; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyPhysics_3.h"
int32_t HumanPlayer_ApplyPhysics_3(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 0;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.200000003f);

    if (*(context + 0xc) == 0x1b)
        Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    int32_t result = HumanPlayer_ApplyRecoil_9(source_val, 2);
    *(context + 0x14) = sub_40a870;
    return result;
}
