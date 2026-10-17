// IGI native provenance: DynObj_LookupHashItem_14 - 0x004CF300 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CF300-DynObj_LookupHashItem_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LookupHashItem_14.h"
int32_t* DynObj_LookupHashItem_14(int32_t* context, int32_t param_2)

{
    int32_t temp_val = 0;
    int32_t* result = *context;
    int32_t* i = *result;

    while (i)
    {
        if (temp_val == param_2)
            return result;

        result = i;
        i = *i;
        temp_val += 1;
    }

    return nullptr;
}
