// IGI native provenance: AI_CombatTarget_3 - 0x004513E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004513E0-AI_CombatTarget_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_3.h"
int32_t AI_CombatTarget_3(void* context)

{
    return **(*(context + 0x3aa8) + 0xc);
}
