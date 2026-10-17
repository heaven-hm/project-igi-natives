// IGI native provenance: QTask_CleanupTypes - 0x00401780 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401780-QTask_CleanupTypes.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_CleanupTypes.h"
int32_t* QTask_CleanupTypes(void* context)

{
    int32_t* result = *(context + 8);

    if (*result && result)
    {
        int32_t* i;

        do
        {
            int32_t* entity_1 = *result;

            if (!entity_1)
                i = nullptr;
            else
            {
                int32_t source_1 = *entity_1;
                int32_t source_2 = -(source_1);
                i = (source_2 - source_2) & entity_1;
            }

            QTask_FindType(result);
            result = i;
        } while (i);
    }

    return result;
}
