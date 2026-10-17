// IGI native provenance: HumanPlayer_TakeDamage_3 - 0x0040AB20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040AB20-HumanPlayer_TakeDamage_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_TakeDamage_3.h"
int32_t HumanPlayer_TakeDamage_3(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(param_2, 4);
    *(context + 0x14) = sub_40ab60;
    return result;
}
