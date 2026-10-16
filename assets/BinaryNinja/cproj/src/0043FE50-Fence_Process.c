#include "gi_platform.h"
#include "0043FE50-Fence_Process.h"
char* Fence_Process(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), a1);
    DynObj_TryingToRemoveUnrigi(Level_LoadLevel_4(), a1);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    return Script_CallNativeHandler_6(a1 + 0x120);
}
