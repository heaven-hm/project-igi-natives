// IGI native provenance: AI_CombatTarget_30 - 0x0046E200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046E200-AI_CombatTarget_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_30.h"
uint32_t AI_CombatTarget_30()

{
    int32_t data_val;
    data_val = g_53fe84;
    return QTask_CloseEvent_2(data_val);
}
