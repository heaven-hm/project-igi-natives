// Original IGI.EXE function: Script_SpawnNewTask_14 (VA 0x004F3AC0; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_14.h"
int32_t* Script_SpawnNewTask_14(void* context)

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

    Script_CallNativeHandler_6(context + 0x200f8);
    Camera_ApplyHandiCam_33(context + 0x60);
    int32_t* result = *(context + 0x20148);

    if (!result)
        return result;

    int32_t* data_7 = *result;

    if (data_7)
        QTask_FindType(data_7);

    return Qtask_UpdateList(*(context + 0x20148));
}
