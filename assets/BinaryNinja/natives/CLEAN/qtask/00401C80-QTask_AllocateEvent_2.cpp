// IGI native provenance: QTask_AllocateEvent_2 - 0x00401C80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401C80-QTask_AllocateEvent_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_AllocateEvent_2.h"
void* const QTask_AllocateEvent_2(void* context, int16_t param_2)

{
    void* const result = *(context + 4);

    if (result && *(result + 4))
    {
        if (!result)
            return result;

        while (true)
        {
            if (*(result + 0x1c) == param_2)
                return result;

            result = *(result + 4);

            if (!result)
                return nullptr;

            if (!*(result + 4))
                return nullptr;

            if (!result)
                return result;
        }
    }

    return nullptr;
}
