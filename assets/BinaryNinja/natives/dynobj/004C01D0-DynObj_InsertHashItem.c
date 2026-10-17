// IGI native provenance: DynObj_InsertHashItem - 0x004C01D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C01D0-DynObj_InsertHashItem.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_InsertHashItem.h"
int32_t DynObj_InsertHashItem(void* context)

{
    char* entity_val = *(context + 0x14);
    char data_val = *entity_val;

    if (data_val)
    {
        while (true)
        {
            if (data_val == 0x2e || data_val == 0x65 || data_val == 0x45)
                return 0;

            data_val = entity_val[1];
            entity_val = &entity_val[1];

            if (!data_val)
                break;

            continue;
        }
    }

    return 1;
}
