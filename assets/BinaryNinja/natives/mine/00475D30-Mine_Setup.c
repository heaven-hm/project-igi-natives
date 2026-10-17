// Original IGI.EXE function: Mine_Setup (VA 0x00475D30; static CFG gate PASS, CFG score 1.000).
#include "Mine_Setup.h"
int32_t Mine_Setup(int32_t context)

{
    DynObj_TryingToRemoveUnrigi(Level_LoadLevel_4(), context);
    DynObj_TryingToRemoveUnrigi(Weapon_UpdateMuzzleFlash_4(), context);
    DynObj_TryingToRemoveUnrigi(Level_CheckQTaskID_4(), context);
    return (*((FX_TrailUpdate() << 2) + &g_a976e0))(context);
}
