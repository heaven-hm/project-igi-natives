// IGI native provenance: AI_FireWeapon_11 - 0x00458FB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00458FB0-AI_FireWeapon_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_11.h"
int32_t AI_FireWeapon_11(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_CheckVisibility_15;
    return result;
}
