// IGI native provenance: HumanPlayer_UpdateStamina_3 - 0x0040A220 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040A220-HumanPlayer_UpdateStamina_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateStamina_3.h"
int32_t HumanPlayer_UpdateStamina_3(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 0;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.200000003f);
    int32_t data_1 = *(context + 0xc);

    if (data_1 == 5 || data_1 == 0xc || data_1 == 0x18)
        Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    int32_t result = HumanPlayer_ApplyRecoil_9(source_val, 2);
    *(context + 0x14) = sub_40a2a0;
    return result;
}
