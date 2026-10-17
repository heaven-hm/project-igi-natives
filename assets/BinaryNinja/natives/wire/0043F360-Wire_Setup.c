// IGI native provenance: Wire_Setup - 0x0043F360 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043F360-Wire_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Wire_Setup.h"
void* Wire_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), context);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_2 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_6 = *(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_6)
            data_6(context);
    }

    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
