// Original IGI.EXE function: GenericPickup_Setup (VA 0x0046C410; static CFG gate PASS, CFG score 1.000).
#include "GenericPickup_Setup.h"
int32_t GenericPickup_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_LoadObjects_5(), context);

    if (*(context + 0x11a))
    {
        Render_SetupLighting_14(context);
        DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    }

    int32_t result = Script_EvaluateCondition_4(context);

    if (result >= 0)
    {
        int32_t data_4 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        result = *(((data_4 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (result)
            return result(context);
    }

    return result;
}
