#include "MenuScreen_Setup.h"
int32_t MenuScreen_Setup(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0xac);
    Script_CallNativeHandler_6(a1 + 0xfc);
    Script_CallNativeHandler_6(a1 + 0x14c);
    int32_t result = Script_EvaluateCondition_4(a1);

    if (result >= 0)
    {
        int32_t valA1 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        result = *(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (result)
            return result(a1);
    }

    return result;
}
