// IGI native provenance: StatusMessage_Setup - 0x004856D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004856D0-StatusMessage_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StatusMessage_Setup.h"
void* StatusMessage_Setup(void* context)

{
    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_1 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_5 = *(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_5)
            data_5(context);
    }

    Script_CallNativeHandler_6(context + 0x60);
    void* result = *(context + 0xb0);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(context + 0xb0) = 0;
    }

    return result;
}
