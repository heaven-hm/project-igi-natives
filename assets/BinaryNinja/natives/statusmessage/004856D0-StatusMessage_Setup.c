// Original IGI.EXE function: StatusMessage_Setup (VA 0x004856D0; static CFG gate PASS, CFG score 1.000).
#include "StatusMessage_Setup.h"
void* StatusMessage_Setup(void* a1)

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

    Script_CallNativeHandler_6(a1 + 0x60);
    void* result = *(a1 + 0xb0);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(a1 + 0xb0) = 0;
    }

    return result;
}
