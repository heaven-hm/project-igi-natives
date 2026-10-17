// IGI native provenance: DynObj_LookupHashItem - 0x004C0230 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0230-DynObj_LookupHashItem.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LookupHashItem.h"
int32_t DynObj_LookupHashItem(int32_t* context)

{
    return *(*context + 0xc);
}
