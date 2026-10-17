// IGI native provenance: HumanPlayer_UpdateMotion_3 - 0x00409E00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00409E00-HumanPlayer_UpdateMotion_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateMotion_3.h"
int32_t HumanPlayer_UpdateMotion_3(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 0;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.200000003f);
    int32_t data_1 = *(context + 0xc);

    if (data_1 == 3 || data_1 == 9 || data_1 == 0x16)
        Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    int32_t result = HumanPlayer_ApplyRecoil_9(source_val, 2);
    *(context + 0x14) = sub_409e80;
    return result;
}
