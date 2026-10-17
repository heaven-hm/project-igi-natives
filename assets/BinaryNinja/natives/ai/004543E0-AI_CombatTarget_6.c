// IGI native provenance: AI_CombatTarget_6 - 0x004543E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004543E0-AI_CombatTarget_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_6.h"
int32_t AI_CombatTarget_6(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_454410;
    return result;
}
