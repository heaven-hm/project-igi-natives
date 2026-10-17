// Original IGI.EXE function: RainEffect_Setup (VA 0x00436990; static CFG gate PASS, CFG score 1.000).
#include "RainEffect_Setup.h"
int32_t RainEffect_Setup(long double context , void* param_2)

{
    int32_t result = *(param_2 + 0x20);

    if (!result)
        return result;

    if (Script_FormatString_6(param_2 + 0x38))
    {
        Script_SpawnNewTask_7(param_2 + 0x38, param_2);
        Display_RestoreDevice_17(*(param_2 + 0x20), context);
    }

    return Display_ClearSurfaces_17(*(param_2 + 0x20));
}
