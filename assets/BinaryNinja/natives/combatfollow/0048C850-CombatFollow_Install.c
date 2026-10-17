// IGI native provenance: CombatFollow_Install - 0x0048C850 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048C850-CombatFollow_Install.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatFollow_Install.h"
void* CombatFollow_Install(void* context )

{
    *(context + 0x18) = Combat_Follow;
    return context;
}
