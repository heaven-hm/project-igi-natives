// Original IGI.EXE function: Fence_Process (VA 0x0043FE50; static CFG gate PASS, CFG score 1.000).
#include "Fence_Process.h"
char* Fence_Process(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), a1);
    DynObj_TryingToRemoveUnrigi(Level_LoadLevel_4(), a1);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    return Script_CallNativeHandler_6(a1 + 0x120);
}
