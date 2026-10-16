#include "gi_platform.h"
#include "0042E940-Car_Process.h"
int32_t* Car_Process(void* a1)

{
    Script_EvaluateCondition_16(a1);

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x2ed5)))
        DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);

    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), a1);
    void* valA4 = (*(int32_t*)(uintptr_t)(a1 + 0x74c));

    if (valA4)
        DynObj_CreateMagicObject_4(valA4);

    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA6 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
        int32_t valA10 = *(((valA6 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA10)
            valA10(a1);
    }

    Script_CallNativeHandler_6(a1 + 0x928);
    Script_CallNativeHandler_6(a1 + 0x978);
    Script_CallNativeHandler_6(a1 + 0x9c8);
    DynObj_TryingToRemoveUnrigi(Level_InitSprites_4(), a1);
    return FX_TrailUpdate_13(a1 + 0xa90);
}
