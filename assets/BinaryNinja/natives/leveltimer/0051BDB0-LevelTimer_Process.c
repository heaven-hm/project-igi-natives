// Original IGI.EXE function: LevelTimer_Process (VA 0x0051BDB0; static CFG gate PASS, CFG score 1.000).
#include "LevelTimer_Process.h"
char* LevelTimer_Process(void* context)

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

    Script_CallNativeHandler_6(context + 0x6c);
    return Script_CallNativeHandler_6(context + 0xbc);
}
