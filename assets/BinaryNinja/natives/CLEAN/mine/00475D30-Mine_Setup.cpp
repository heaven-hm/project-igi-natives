// IGI native provenance: Mine_Setup - 0x00475D30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00475D30-Mine_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Mine_Setup.h"
int32_t Mine_Setup(int32_t context)

{
    DynObj_TryingToRemoveUnrigi(Level_LoadLevel_4(), context);
    DynObj_TryingToRemoveUnrigi(Weapon_UpdateMuzzleFlash_4(), context);
    DynObj_TryingToRemoveUnrigi(Level_CheckQTaskID_4(), context);
    return (*((FX_TrailUpdate() << 2) + &g_a976e0))(context);
}
