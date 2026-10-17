// IGI native provenance: AI_CheckHearing_10 - 0x00458600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00458600-AI_CheckHearing_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_10.h"
int32_t AI_CheckHearing_10(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    *(param_2 + 0xd19) = 1;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_FireWeapon_10;
    return result;
}
