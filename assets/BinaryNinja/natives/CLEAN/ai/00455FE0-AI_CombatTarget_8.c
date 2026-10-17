// IGI native provenance: AI_CombatTarget_8 - 0x00455FE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00455FE0-AI_CombatTarget_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_8.h"
int32_t AI_CombatTarget_8(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_456010;
    return result;
}
