// IGI native provenance: HumanPlayer_UpdateHealth_6 - 0x0040DD60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040DD60-HumanPlayer_UpdateHealth_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateHealth_6.h"
void** HumanPlayer_UpdateHealth_6(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    void** result = HumanPlayer_CheckCollision_9(param_2, 0.0f);
    *(param_2 + 0xd98) = 0xbf800000;
    *(context + 0x14) = sub_40dda0;
    return result;
}
