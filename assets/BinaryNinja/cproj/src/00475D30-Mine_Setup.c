#include "gi_platform.h"
#include "00475D30-Mine_Setup.h"
int32_t Mine_Setup(int32_t a1)

{
    DynObj_TryingToRemoveUnrigi(Level_LoadLevel_4(), a1);
    DynObj_TryingToRemoveUnrigi(Weapon_UpdateMuzzleFlash_4(), a1);
    DynObj_TryingToRemoveUnrigi(Level_CheckQTaskID_4(), a1);
    return ((int(*)())(uintptr_t)(*((FX_TrailUpdate() << 2) + &g_a976e0)))(a1);
}
