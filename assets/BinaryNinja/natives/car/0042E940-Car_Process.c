// Original IGI.EXE function: Car_Process (VA 0x0042E940; static CFG gate PASS, CFG score 1.000).
#include "Car_Process.h"
int32_t* Car_Process(void* context)

{
    Script_EvaluateCondition_16(context);

    if (!*(context + 0x2ed5))
        DynObj_RegisterSymbol_9(Level_StartMission_4(), context);

    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), context);
    void* data_4 = *(context + 0x74c);

    if (data_4)
        DynObj_CreateMagicObject_4(data_4);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_6 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_10 = *(((data_6 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_10)
            data_10(context);
    }

    Script_CallNativeHandler_6(context + 0x928);
    Script_CallNativeHandler_6(context + 0x978);
    Script_CallNativeHandler_6(context + 0x9c8);
    DynObj_TryingToRemoveUnrigi(Level_InitSprites_4(), context);
    return FX_TrailUpdate_13(context + 0xa90);
}
