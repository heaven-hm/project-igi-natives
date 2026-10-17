// IGI native provenance: AI_UpdatePatrol_13 - 0x0045AAD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045AAD0-AI_UpdatePatrol_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdatePatrol_13.h"
int32_t AI_UpdatePatrol_13(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_CombatTarget_13;
    return result;
}
