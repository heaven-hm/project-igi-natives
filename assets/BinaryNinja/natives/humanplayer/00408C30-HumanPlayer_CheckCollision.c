// IGI native provenance: HumanPlayer_CheckCollision - 0x00408C30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00408C30-HumanPlayer_CheckCollision.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_CheckCollision.h"
int32_t HumanPlayer_CheckCollision(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Render_TransformVertices_10(param_2 + 0x68, 0.0f);
    Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(param_2, 3);
    *(context + 0x14) = HumanPlayer_ApplyRecoil;
    return result;
}
