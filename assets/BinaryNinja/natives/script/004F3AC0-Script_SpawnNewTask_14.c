#include "Script_SpawnNewTask_14.h"
int32_t* Script_SpawnNewTask_14(void* a1)

{
    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA1 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        int32_t valA5 = *(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA5)
            valA5(a1);
    }

    Script_CallNativeHandler_6(a1 + 0x200f8);
    Camera_ApplyHandiCam_33(a1 + 0x60);
    int32_t* result = *(a1 + 0x20148);

    if (!result)
        return result;

    int32_t* valA7 = *result;

    if (valA7)
        QTask_FindType(valA7);

    return Qtask_UpdateList(*(a1 + 0x20148));
}
