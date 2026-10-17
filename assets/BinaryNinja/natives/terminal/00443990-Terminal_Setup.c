// Original IGI.EXE function: Terminal_Setup (VA 0x00443990; static CFG gate PASS, CFG score 1.000).
#include "Terminal_Setup.h"
char* Terminal_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), context);
    (*((FX_TrailUpdate() << 2) + &g_a976e0))(context);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_5 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_9 = *(((data_5 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_9)
            data_9(context);
    }

    return Script_CallNativeHandler_6(context + 0x250);
}
