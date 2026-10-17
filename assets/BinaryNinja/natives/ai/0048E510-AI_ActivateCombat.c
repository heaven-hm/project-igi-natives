// IGI native provenance: AI_ActivateCombat - 0x0048E510 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048E510-AI_ActivateCombat.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_ActivateCombat.h"

void* AI_ActivateCombat(void* pThis )

{
    *(pThis + 0x18) = FX_SmokeEmit_20;
    return pThis;
}
