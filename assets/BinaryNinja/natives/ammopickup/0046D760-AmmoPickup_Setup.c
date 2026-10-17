// Original IGI.EXE function: AmmoPickup_Setup (VA 0x0046D760; static CFG gate PASS, CFG score 1.000).
#include "AmmoPickup_Setup.h"
int32_t AmmoPickup_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_LoadObjects_5(), context);
    Render_SetupLighting_14(context);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    int32_t result = Script_EvaluateCondition_4(context);

    if (result >= 0)
    {
        int32_t data_2 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        result = *(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (result)
            return result(context);
    }

    return result;
}
