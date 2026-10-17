// Original IGI.EXE function: StationaryGun_Setup (VA 0x00474960; static CFG gate PASS, CFG score 1.000).
#include "StationaryGun_Setup.h"
void* StationaryGun_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), a1);
    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
