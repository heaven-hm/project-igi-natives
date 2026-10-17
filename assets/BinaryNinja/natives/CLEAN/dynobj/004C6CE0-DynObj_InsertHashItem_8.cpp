// IGI native provenance: DynObj_InsertHashItem_8 - 0x004C6CE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C6CE0-DynObj_InsertHashItem_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_InsertHashItem_8.h"
void* DynObj_InsertHashItem_8(void* context, void* param_2)

{
    void* result = *(param_2 + 0x58);

    if (param_2 != *(context + 0x2c))
    {
        void* entity_1 = *(param_2 + 0x54);

        if (result)
            *(result + 0x54) = entity_1;

        if (entity_1)
            *(entity_1 + 0x58) = result;
    }
    else
    {
        *(context + 0x2c) = result;

        if (result)
            *(result + 0x54) = 0;
    }

    return result;
}
