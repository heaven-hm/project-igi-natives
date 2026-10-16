#include "gi_platform.h"
#include "00476E50-Grenade_Process.h"
int32_t Grenade_Process(void* a1)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x72c));

    if (valA)
    {
        Qtask_UpdateList(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0x72c)) = 0;
    }

    Script_ParseEnumString_28(a1);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    return DynObj_TryingToRemoveUnrigi(Level_CheckQTaskID_4(), a1);
}
