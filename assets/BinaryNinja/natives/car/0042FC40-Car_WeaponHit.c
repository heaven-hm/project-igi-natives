// IGI native provenance: Car_WeaponHit - 0x0042FC40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042FC40-Car_WeaponHit.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Car_WeaponHit.h"
void* Car_WeaponHit(void* context)

{
    *(context + 0x91c) = 1;
    return context;
}
