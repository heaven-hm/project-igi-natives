#include "CarAI_Process.h"
int32_t CarAI_Process(void* a1)

{
    int32_t valA1 = Script_ExecuteLevelScript_4(*(a1 + 0x28));
    *(a1 + 0x4c) = valA1;

    if (valA1)
    {
        int16_t valA2 = Menu_LeaveMenus_23();

        if (*(*(a1 + 0x4c) + 0x1c) != valA2)
            *(a1 + 0x4c) = 0;
    }

    int32_t valA3 = Script_ExecuteLevelScript_4(*(a1 + 0x20));
    *(a1 + 0x2c) = valA3;

    if (valA3)
    {
        int16_t valA4 = Physics_EvaluateAreaCriteria_9();

        if (*(*(a1 + 0x2c) + 0x1c) != valA4)
            *(a1 + 0x2c) = 0;
    }

    int32_t result = *(a1 + 0x4c);

    if (!result)
        return result;

    return CarAI_UpdateCar(a1, 0, 0, 0, 0f);
}
