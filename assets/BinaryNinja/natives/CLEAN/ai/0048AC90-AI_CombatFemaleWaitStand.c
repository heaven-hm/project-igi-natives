// IGI native provenance: AI_CombatFemaleWaitStand - 0x0048AC90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048AC90-AI_CombatFemaleWaitStand.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatFemaleWaitStand.h"

void* AI_CombatFemaleWaitStand(void* pThis, void* param)

{
    *(param + 0x18) = Named_Combat;
    *(param + 0x1c) = AI_CombatFemaleWaitStand;
    *(pThis + 0x3e50) = 0;
    return pThis;
}
