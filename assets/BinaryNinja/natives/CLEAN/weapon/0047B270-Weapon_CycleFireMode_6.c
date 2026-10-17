// IGI native provenance: Weapon_CycleFireMode_6 - 0x0047B270 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0047B270-Weapon_CycleFireMode_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_CycleFireMode_6.h"
int32_t Weapon_CycleFireMode_6(int32_t context, int32_t param_2)

{
    memcpy(context + 0x78, param_2, 0x18);
    return context;
}
