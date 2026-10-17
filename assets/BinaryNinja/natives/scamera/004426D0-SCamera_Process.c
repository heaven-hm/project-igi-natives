// Original IGI.EXE function: SCamera_Process (VA 0x004426D0; static CFG gate PASS, CFG score 1.000).
#include "SCamera_Process.h"
void* SCamera_Process(void* context)

{
    FX_SmokeEmit_13(context);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_1 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_5 = *(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_5)
            data_5(context);
    }

    Script_CallNativeHandler_6(context + 0x174);
    Render_SetupLighting_14(context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
