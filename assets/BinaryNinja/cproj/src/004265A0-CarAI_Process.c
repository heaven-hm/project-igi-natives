#include "gi_platform.h"
#include "004265A0-CarAI_Process.h"
int32_t CarAI_Process(void* a1)

{
    int32_t valA1 = Script_ExecuteLevelScript_4((*(int32_t*)(uintptr_t)(a1 + 0x28)));
    (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = valA1;

    if (valA1)
    {
        int16_t valA2 = Menu_LeaveMenus_23();

        if ((*(int32_t*)(uintptr_t)(*(a1 + 0x4c) + 0x1c)) != valA2)
            (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = 0;
    }

    int32_t valA3 = Script_ExecuteLevelScript_4((*(int32_t*)(uintptr_t)(a1 + 0x20)));
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = valA3;

    if (valA3)
    {
        int16_t valA4 = Physics_EvaluateAreaCriteria_9();

        if ((*(int32_t*)(uintptr_t)(*(a1 + 0x2c) + 0x1c)) != valA4)
            (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = 0;
    }

    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x4c));

    if (!result)
        return result;

    return CarAI_UpdateCar(a1, 0, 0, 0, 0.0f);
}
