// IGI native provenance: CombatState_ProcessWalkToNoded - 0x0048EBE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048EBE0-CombatState_ProcessWalkToNoded.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_ProcessWalkToNoded.h"

void* CombatState_ProcessWalkToNoded(void* arg1)

{
    *(arg1 + 0x18) = FX_WalkToNodeD;
    return arg1;
}
