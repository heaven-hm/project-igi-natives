// IGI native provenance: AlarmLight_Setup - 0x0043A3C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043A3C0-AlarmLight_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmLight_Setup.h"
void* AlarmLight_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), context);
    Script_CallNativeHandler_6(context + 0x1a4);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_3 = Script_SpawnNewTask_6();
        int32_t temp_1 = 0;
        temp_1 = *(context + 0x1c);
        int32_t data_4 = *(((data_3 * 0x180 + temp_1) << 2) + &g_a96ae0);

        if (data_4)
            data_4(context);
    }

    int32_t* data_5 = *(context + 0xe8);

    if (data_5)
        QTask_FindType(data_5);

    Render_SetupLighting_14(context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
