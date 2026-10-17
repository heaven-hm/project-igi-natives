// IGI native provenance: AI_FireWeapon_14 - 0x0045B7F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045B7F0-AI_FireWeapon_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_14.h"
int32_t AI_FireWeapon_14(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_45b820;
    return result;
}
