#include "AlarmLight_Setup.h"
void* AlarmLight_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), a1);
    Script_CallNativeHandler_6(a1 + 0x1a4);

    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA3 = Script_SpawnNewTask_6();
        int32_t tmpD1 = 0;
        tmpD1 = *(a1 + 0x1c);
        int32_t valA4 = *(((valA3 * 0x180 + tmpD1) << 2) + &g_a96ae0);

        if (valA4)
            valA4(a1);
    }

    int32_t* valA5 = *(a1 + 0xe8);

    if (valA5)
        QTask_FindType(valA5);

    Render_SetupLighting_14(a1);
    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
