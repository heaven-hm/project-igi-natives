// IGI native provenance: QTask_FindType_2 - 0x00401CC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401CC0-QTask_FindType_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_FindType_2.h"
void* QTask_FindType_2(void* context, int16_t param_2)

{
    void* i;

    for (i = *(context + 0x14); i; i = *(i + 0x14))
    {
        int32_t entity_val;
        entity_val = *(i + 0x1c);
        char data_val;
        data_val = TaskType_IsDerivedFrom(entity_val, param_2);

        if (data_val)
            break;
    }

    return i;
}
