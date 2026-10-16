#include "GenericPickup_Setup.h"
int32_t GenericPickup_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_LoadObjects_5(), a1);

    if (*(a1 + 0x11a))
    {
        Render_SetupLighting_14(a1);
        DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    }

    int32_t result = Script_EvaluateCondition_4(a1);

    if (result >= 0)
    {
        int32_t valA4 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        result = *(((valA4 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (result)
            return result(a1);
    }

    return result;
}
