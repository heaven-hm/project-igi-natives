#include "gi_platform.h"
#include "00476600-M203_Process.h"
int32_t* M203_Process(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_CheckQTaskID_4(), a1);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    int32_t* valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x114));

    if (valA2)
    {
        Qtask_UpdateList(valA2);
        (*(int32_t*)(uintptr_t)(a1 + 0x114)) = 0;
    }

    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x118));

    if (result)
    {
        result = Qtask_UpdateList(result);
        (*(int32_t*)(uintptr_t)(a1 + 0x118)) = 0;
    }

    return result;
}
