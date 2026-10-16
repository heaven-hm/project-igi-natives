#include "gi_platform.h"
#include "00474960-StationaryGun_Setup.h"
void* StationaryGun_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), a1);
    return DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
}
