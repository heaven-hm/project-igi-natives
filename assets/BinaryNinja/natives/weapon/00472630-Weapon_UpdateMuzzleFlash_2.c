// IGI native provenance: Weapon_UpdateMuzzleFlash_2 - 0x00472630 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00472630-Weapon_UpdateMuzzleFlash_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateMuzzleFlash_2.h"
int32_t Weapon_UpdateMuzzleFlash_2(int32_t context, int32_t param_2)

{
    memcpy(context + 0x60, param_2, 0x18);
    return context;
}
