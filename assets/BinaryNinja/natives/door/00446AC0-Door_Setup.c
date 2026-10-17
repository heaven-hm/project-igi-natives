// Original IGI.EXE function: Door_Setup (VA 0x00446AC0; static CFG gate PASS, CFG score 1.000).
#include "Door_Setup.h"
void* Door_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), context);
    int32_t* data_1 = *(context + 0xe8);

    if (data_1)
        QTask_FindType(data_1);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_3 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_7 = *(((data_3 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_7)
            data_7(context);
    }

    Script_CallNativeHandler_6(context + 0x1a0);
    Script_CallNativeHandler_6(context + 0x1f0);
    Script_CallNativeHandler_6(context + 0x240);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
