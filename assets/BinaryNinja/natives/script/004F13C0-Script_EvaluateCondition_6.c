// IGI native provenance: Script_EvaluateCondition_6 - 0x004F13C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F13C0-Script_EvaluateCondition_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_EvaluateCondition_6.h"
int32_t Script_EvaluateCondition_6(void* context, void* param_2)

{
    int32_t result = 0;
    int32_t entity_val = *(context + 0x4c);

    if (entity_val > 0)
    {
        int32_t* temp_1 = context + 0xc;

        do
        {
            if (**temp_1 == param_2)
                return result;

            result += 1;
            temp_1 = &temp_1[1];
        } while (result < entity_val);
    }

    *(context + (*(context + 0x4c) << 2) + 0xc) = QTask_LinkEventHandler_2(param_2);
    result = *(context + 0x4c) + 1;
    *(context + 0x4c) = result;
    return result;
}
