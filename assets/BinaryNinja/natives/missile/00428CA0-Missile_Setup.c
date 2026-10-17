// Original IGI.EXE function: Missile_Setup (VA 0x00428CA0; static CFG gate PASS, CFG score 1.000).
#include "Missile_Setup.h"
void* Missile_Setup(void* a1)

{
    Script_EvaluateCondition_16(a1);
    int32_t* valA = *(a1 + 0x858);

    if (valA)
        Qtask_UpdateList(valA);

    int32_t* valA1 = *(a1 + 0x85c);

    if (valA1)
        Qtask_UpdateList(valA1);

    int32_t* valA2 = *(a1 + 0x860);

    if (valA2)
        Qtask_UpdateList(valA2);

    return DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
}
