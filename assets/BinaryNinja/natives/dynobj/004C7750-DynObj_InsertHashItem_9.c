// IGI native provenance: DynObj_InsertHashItem_9 - 0x004C7750 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C7750-DynObj_InsertHashItem_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_InsertHashItem_9.h"
int32_t DynObj_InsertHashItem_9(int32_t context, int32_t param_2)

{
    return *(context + (param_2 << 2) + 0x10);
}
