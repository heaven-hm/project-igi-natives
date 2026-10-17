// IGI native provenance: HumanPlayer_ApplyRecoil_5 - 0x0040D8E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040D8E0-HumanPlayer_ApplyRecoil_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ApplyRecoil_5.h"
void** HumanPlayer_ApplyRecoil_5(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    void** result = HumanPlayer_CheckCollision_9(param_2, 0.0f);
    *(context + 0x14) = Ladder_GetOnTop;
    return result;
}
