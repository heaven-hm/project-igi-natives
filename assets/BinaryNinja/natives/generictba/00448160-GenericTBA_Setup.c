#include "GenericTBA_Setup.h"
char* GenericTBA_Setup(void* a1)

{
    void* valA = *(a1 + 0x250);

    if (valA)
    {
        Sys_ExecuteBytecode_2(valA);
        *(a1 + 0x250) = 0;
    }

    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), a1);
    (*((FX_TrailUpdate() << 2) + &g_a976e0))(a1);

    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA6 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        int32_t valA10 = *(((valA6 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA10)
            valA10(a1);
    }

    return Script_CallNativeHandler_6(a1 + 0x258);
}
