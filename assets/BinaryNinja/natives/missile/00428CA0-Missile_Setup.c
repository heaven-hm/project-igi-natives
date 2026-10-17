// Original IGI.EXE function: Missile_Setup (VA 0x00428CA0; static CFG gate PASS, CFG score 1.000).
#include "Missile_Setup.h"
void* Missile_Setup(void* context)

{
    Script_EvaluateCondition_16(context);
    int32_t* data_val = *(context + 0x858);

    if (data_val)
        Qtask_UpdateList(data_val);

    int32_t* data_1 = *(context + 0x85c);

    if (data_1)
        Qtask_UpdateList(data_1);

    int32_t* data_2 = *(context + 0x860);

    if (data_2)
        Qtask_UpdateList(data_2);

    return DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
}
