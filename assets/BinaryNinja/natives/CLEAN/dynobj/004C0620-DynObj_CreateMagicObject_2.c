// IGI native provenance: DynObj_CreateMagicObject_2 - 0x004C0620 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0620-DynObj_CreateMagicObject_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject_2.h"
int32_t DynObj_CreateMagicObject_2(int32_t* context, int32_t* param_2, char* param_3)

{
    if (!DynObj_InsertHashItem_2(context, &param_3, param_3))
    {
        if (param_2)
            *param_2 = 0;

        return 0;
    }

    char* entity_val = param_3;

    if (param_2)
        *param_2 = *(entity_val + 0xc);

    return *(entity_val + 8);
}
