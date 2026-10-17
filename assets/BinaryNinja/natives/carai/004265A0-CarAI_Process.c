// Original IGI.EXE function: CarAI_Process (VA 0x004265A0; static CFG gate PASS, CFG score 1.000).
#include "CarAI_Process.h"
int32_t CarAI_Process(void* context)

{
    int32_t data_1 = Script_ExecuteLevelScript_4(*(context + 0x28));
    *(context + 0x4c) = data_1;

    if (data_1)
    {
        int16_t data_2 = Menu_LeaveMenus_23();

        if (*(*(context + 0x4c) + 0x1c) != data_2)
            *(context + 0x4c) = 0;
    }

    int32_t data_3 = Script_ExecuteLevelScript_4(*(context + 0x20));
    *(context + 0x2c) = data_3;

    if (data_3)
    {
        int16_t data_4 = Physics_EvaluateAreaCriteria_9();

        if (*(*(context + 0x2c) + 0x1c) != data_4)
            *(context + 0x2c) = 0;
    }

    int32_t result = *(context + 0x4c);

    if (!result)
        return result;

    return CarAI_UpdateCar(context, 0, 0, 0, 0.0f);
}
