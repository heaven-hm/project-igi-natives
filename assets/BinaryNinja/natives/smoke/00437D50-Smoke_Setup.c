// Original IGI.EXE function: Smoke_Setup (VA 0x00437D50; static CFG gate PASS, CFG score 1.000).
#include "Smoke_Setup.h"
char* Smoke_Setup(void* context)

{
    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_1 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_5 = *(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_5)
            data_5(context);
    }

    return Script_CallNativeHandler_6(context + 0xa4);
}
