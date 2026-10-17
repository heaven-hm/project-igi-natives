// Original IGI.EXE function: Mine_Setup (VA 0x00475D30; static CFG gate PASS, CFG score 1.000).
#include "Mine_Setup.h"
int32_t Mine_Setup(int32_t a1)

{
    DynObj_TryingToRemoveUnrigi(Level_LoadLevel_4(), a1);
    DynObj_TryingToRemoveUnrigi(Weapon_UpdateMuzzleFlash_4(), a1);
    DynObj_TryingToRemoveUnrigi(Level_CheckQTaskID_4(), a1);
    return (*((FX_TrailUpdate() << 2) + &g_a976e0))(a1);
}
