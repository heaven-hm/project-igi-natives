// Original IGI.EXE function: ExplodeObject_Process (VA 0x00481BC0; static CFG gate PASS, CFG score 1.000).
#include "ExplodeObject_Process.h"
void* ExplodeObject_Process(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), context);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_2 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_6 = *(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_6)
            data_6(context);
    }

    Script_CallNativeHandler_6(context + 0x194);
    Render_SetupLighting_14(context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
