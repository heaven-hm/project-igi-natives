#include "gi_platform.h"
#include "00445270-Switch_Process.h"
void* Switch_Process(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), a1);

    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA2 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
        int32_t valA6 = *(((valA2 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA6)
            valA6(a1);
    }

    Script_CallNativeHandler_6(a1 + 0x1d0);
    Render_SetupLighting_14(a1);
    return DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
}
