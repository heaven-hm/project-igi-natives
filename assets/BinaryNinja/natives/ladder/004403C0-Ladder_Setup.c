// Original IGI.EXE function: Ladder_Setup (VA 0x004403C0; static CFG gate PASS, CFG score 1.000).
#include "Ladder_Setup.h"
void* Ladder_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), a1);
    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
