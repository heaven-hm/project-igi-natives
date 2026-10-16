#include "gi_platform.h"
#include "004856D0-StatusMessage_Setup.h"
void* StatusMessage_Setup(void* a1)

{
    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA1 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
        int32_t valA5 = *(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA5)
            valA5(a1);
    }

    Script_CallNativeHandler_6(a1 + 0x60);
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0xb0));

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        (*(int32_t*)(uintptr_t)(a1 + 0xb0)) = 0;
    }

    return result;
}
