// IGI native provenance: HumanPlayer_UpdateHealth_4 - 0x0040B8B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040B8B0-HumanPlayer_UpdateHealth_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateHealth_4.h"
int32_t HumanPlayer_UpdateHealth_4(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 1;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.200000003f);

    if (*(context + 0xc) == 8)
        Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    int32_t result = HumanPlayer_ApplyRecoil_9(source_val, 5);
    *(context + 0x14) = sub_40b920;
    return result;
}
