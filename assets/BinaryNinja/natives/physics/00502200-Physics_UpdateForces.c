// Original IGI.EXE function: Physics_UpdateForces (VA 0x00502200; static CFG gate PASS, CFG score 0.917).
#include "Physics_UpdateForces.h"
int32_t* Physics_UpdateForces(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t* result = QTask_DeleteTask_2(Script_ExecuteLevelScript_4(param_2), g_a7a620);
    int32_t i_1 = param_3;

    if (i_1)
    {
        int32_t i;

        do
        {
            result = QTask_TriggerEvent_2(result, g_a7a620);
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    memcpy(context, &result[0x3e], 0x18);
    return result;
}
