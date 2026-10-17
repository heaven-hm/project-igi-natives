// IGI native provenance: GenericTBA_Setup - 0x00448160 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00448160-GenericTBA_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GenericTBA_Setup.h"
char* GenericTBA_Setup(void* context)

{
    void* data_val = *(context + 0x250);

    if (data_val)
    {
        Sys_ExecuteBytecode_2(data_val);
        *(context + 0x250) = 0;
    }

    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), context);
    (*((FX_TrailUpdate() << 2) + &g_a976e0))(context);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_6 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_10 = *(((data_6 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_10)
            data_10(context);
    }

    return Script_CallNativeHandler_6(context + 0x258);
}
