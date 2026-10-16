#include "CutScene_Process.h"
int32_t* CutScene_Process(void* a1)

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

    Script_CallNativeHandler_6(a1 + 0x7c);
    Script_CallNativeHandler_6(a1 + 0xcc);
    Script_CallNativeHandler_6(a1 + 0x11c);
    Script_CallNativeHandler_6(a1 + 0x16c);
    Script_CallNativeHandler_6(a1 + 0x1bc);
    int32_t* valA8 = *(a1 + 0x25c);

    if (valA8)
    {
        QTask_FindType(valA8);
        *(a1 + 0x25c) = 0;
    }

    int32_t* valA9 = *(a1 + 0x264);

    if (valA9)
    {
        QTask_FindType(valA9);
        *(a1 + 0x264) = 0;
    }

    int32_t* valA10 = *(a1 + 0x268);

    if (valA10)
    {
        QTask_FindType(valA10);
        *(a1 + 0x268) = 0;
    }

    int32_t* result = *(a1 + 0x260);

    if (result)
    {
        result = QTask_FindType(result);
        *(a1 + 0x260) = 0;
    }

    return result;
}
