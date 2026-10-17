// IGI native provenance: Combat_MobileC - 0x0048BBD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048BBD0-Combat_MobileC.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Combat_MobileC.h"
void* Combat_MobileC(void* context, void* param_2)

{
    *(param_2 + 0x18) = CombatStand;
    *(param_2 + 0x1c) = Combat_MobileC;
    *(context + 0x3e50) = 0;
    return context;
}
