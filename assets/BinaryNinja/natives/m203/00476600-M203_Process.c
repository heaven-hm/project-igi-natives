#include "M203_Process.h"
int32_t* M203_Process(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_CheckQTaskID_4(), a1);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    int32_t* valA2 = *(a1 + 0x114);

    if (valA2)
    {
        Qtask_UpdateList(valA2);
        *(a1 + 0x114) = 0;
    }

    int32_t* result = *(a1 + 0x118);

    if (result)
    {
        result = Qtask_UpdateList(result);
        *(a1 + 0x118) = 0;
    }

    return result;
}
