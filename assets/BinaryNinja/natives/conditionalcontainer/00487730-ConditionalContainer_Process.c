// IGI native provenance: ConditionalContainer_Process - 0x00487730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00487730-ConditionalContainer_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalContainer_Process.h"
char* ConditionalContainer_Process(void* context)

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

    Script_CallNativeHandler_6(context + 0x20);
    Script_CallNativeHandler_6(context + 0x70);
    return Script_CallNativeHandler_6(context + 0xc0);
}
