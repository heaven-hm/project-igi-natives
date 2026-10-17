// IGI native provenance: MenuScreen_Setup - 0x00421A10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00421A10-MenuScreen_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuScreen_Setup.h"
int32_t MenuScreen_Setup(void* context)

{
    Script_CallNativeHandler_6(context + 0xac);
    Script_CallNativeHandler_6(context + 0xfc);
    Script_CallNativeHandler_6(context + 0x14c);
    int32_t result = Script_EvaluateCondition_4(context);

    if (result >= 0)
    {
        int32_t data_1 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        result = *(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (result)
            return result(context);
    }

    return result;
}
