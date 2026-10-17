// IGI native provenance: AreaActivate_LoadParameters - 0x00504970 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00504970-AreaActivate_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AreaActivate_LoadParameters.h"
void* AreaActivate_LoadParameters(void* context)

{
    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_1 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        (*(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0))(context);
    }

    void* result = *(context + 0xb0);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(context + 0xb0) = 0;
    }

    return result;
}
