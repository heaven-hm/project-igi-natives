// IGI native provenance: DynObj_LookupHashItem_2 - 0x004C0530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0530-DynObj_LookupHashItem_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LookupHashItem_2.h"
uint32_t DynObj_LookupHashItem_2(char* context, int32_t param_2)

{
    char* temp_val = context;
    int32_t data_val = 0;

    for (char i = *temp_val; i; i = *temp_val)
    {
        temp_val = &temp_val[1];
        data_val = (data_val << 5) + i;
    }

    return COMBINE(0, data_val) % param_2;
}
