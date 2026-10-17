// IGI native provenance: DynObj_LookupHashItem_4 - 0x004C1800 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C1800-DynObj_LookupHashItem_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LookupHashItem_4.h"
int32_t* Mem_Alloc8(int32_t context)

{
    int32_t* result = Mem_Alloc((context << 2) + 8, 4);
    result[1] = context;
    *result = 0;
    return result;
}
