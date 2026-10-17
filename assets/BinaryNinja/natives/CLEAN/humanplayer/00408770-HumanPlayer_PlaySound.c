// IGI native provenance: HumanPlayer_PlaySound - 0x00408770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00408770-HumanPlayer_PlaySound.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_PlaySound.h"
int32_t HumanPlayer_PlaySound(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(param_2, 1);
    *(context + 0x14) = sub_4087b0;
    return result;
}
