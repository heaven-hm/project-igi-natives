// IGI native provenance: AI_CombatTarget_11 - 0x00458D70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00458D70-AI_CombatTarget_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_11.h"
int32_t AI_CombatTarget_11(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_458dd0;
    return result;
}
