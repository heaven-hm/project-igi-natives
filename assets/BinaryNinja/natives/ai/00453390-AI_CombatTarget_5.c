// IGI native provenance: AI_CombatTarget_5 - 0x00453390 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453390-AI_CombatTarget_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_5.h"
int32_t* AI_CombatTarget_5(void* context)

{
    return AI_UpdatePatrol_5(*(context + 8), 0);
}
