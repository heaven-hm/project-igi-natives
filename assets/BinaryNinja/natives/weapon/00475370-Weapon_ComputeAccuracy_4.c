// IGI native provenance: Weapon_ComputeAccuracy_4 - 0x00475370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00475370-Weapon_ComputeAccuracy_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_ComputeAccuracy_4.h"
void* Weapon_ComputeAccuracy_4(void* context)

{
    void* result = context;
    result = *(result + 0x21c);
    return result;
}
