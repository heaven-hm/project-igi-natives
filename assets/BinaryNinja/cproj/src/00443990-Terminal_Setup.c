#include "gi_platform.h"
#include "00443990-Terminal_Setup.h"
char* Terminal_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), a1);
    ((int(*)())(uintptr_t)(*((FX_TrailUpdate() << 2) + &g_a976e0)))(a1);

    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA5 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
        int32_t valA9 = *(((valA5 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA9)
            valA9(a1);
    }

    return Script_CallNativeHandler_6(a1 + 0x250);
}
