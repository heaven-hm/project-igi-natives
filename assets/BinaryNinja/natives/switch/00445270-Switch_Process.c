// Original IGI.EXE function: Switch_Process (VA 0x00445270; static CFG gate PASS, CFG score 1.000).
#include "Switch_Process.h"
void* Switch_Process(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), context);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_2 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_6 = *(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_6)
            data_6(context);
    }

    Script_CallNativeHandler_6(context + 0x1d0);
    Render_SetupLighting_14(context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
