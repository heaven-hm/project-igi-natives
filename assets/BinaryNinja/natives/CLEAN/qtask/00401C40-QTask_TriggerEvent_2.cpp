// IGI native provenance: QTask_TriggerEvent_2 - 0x00401C40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401C40-QTask_TriggerEvent_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_TriggerEvent_2.h"
int32_t* QTask_TriggerEvent_2(int32_t* context, int16_t param_2)

{
    int32_t* result = *context;

    if (result && *result)
    {
        if (!result)
            return result;

        while (true)
        {
            if (result[7] == param_2)
                return result;

            result = *result;

            if (!result)
                return nullptr;

            if (!*result)
                return nullptr;

            if (!result)
                return result;
        }
    }

    return nullptr;
}
