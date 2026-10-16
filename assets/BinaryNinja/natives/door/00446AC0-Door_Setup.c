#include "Door_Setup.h"
void* Door_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), a1);
    int32_t* valA1 = *(a1 + 0xe8);

    if (valA1)
        QTask_FindType(valA1);

    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA3 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        int32_t valA7 = *(((valA3 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA7)
            valA7(a1);
    }

    Script_CallNativeHandler_6(a1 + 0x1a0);
    Script_CallNativeHandler_6(a1 + 0x1f0);
    Script_CallNativeHandler_6(a1 + 0x240);
    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
