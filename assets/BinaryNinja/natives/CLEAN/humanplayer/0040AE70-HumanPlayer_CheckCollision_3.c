// IGI native provenance: HumanPlayer_CheckCollision_3 - 0x0040AE70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040AE70-HumanPlayer_CheckCollision_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_CheckCollision_3.h"
int32_t HumanPlayer_CheckCollision_3(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 1;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.200000003f);
    int32_t data_1 = *(context + 0xc);

    if (data_1 == 2 || data_1 == 0x14 || data_1 == 0x1a)
        Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    int32_t result = HumanPlayer_ApplyRecoil_9(source_val, 5);
    *(context + 0x14) = sub_40aef0;
    return result;
}
