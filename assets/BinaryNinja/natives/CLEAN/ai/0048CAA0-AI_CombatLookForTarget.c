// IGI native provenance: AI_CombatLookForTarget - 0x0048CAA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048CAA0-AI_CombatLookForTarget.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatLookForTarget.h"

void* AI_CombatLookForTarget(void* pThis )

{
    *(pThis + 0x18) = LookForTarget;
    return pThis;
}
