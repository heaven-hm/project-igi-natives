#include "NoiseQTask_Process.h"
char* NoiseQTask_Process(void* a1)

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

    return Script_CallNativeHandler_6(a1 + 0xd8);
}
