// IGI native provenance: CombatState_ProcessRunToNoded - 0x0048EC40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048EC40-CombatState_ProcessRunToNoded.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_ProcessRunToNoded.h"

void* CombatState_ProcessRunToNoded(void* arg1)

{
    *(arg1 + 0x18) = FX_RunToNodeD;
    return arg1;
}
