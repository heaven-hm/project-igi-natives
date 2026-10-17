// IGI native provenance: DynObj_CreateMagicObject_5 - 0x004C48D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C48D0-DynObj_CreateMagicObject_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject_5.h"
int32_t DynObj_CreateMagicObject_5(void* context, int32_t param_2)

{
    *(context + 0x6c) = param_2;
    return param_2;
}
