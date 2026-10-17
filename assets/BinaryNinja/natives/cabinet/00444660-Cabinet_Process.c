// Original IGI.EXE function: Cabinet_Process (VA 0x00444660; static CFG gate PASS, CFG score 1.000).
#include "Cabinet_Process.h"
void* Cabinet_Process(void* context)

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

    int32_t* data_7 = *(context + 0xe8);

    if (data_7)
        QTask_FindType(data_7);

    Render_SetupLighting_14(context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
