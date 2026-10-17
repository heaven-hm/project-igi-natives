// IGI native provenance: DynObj_CreateMagicObject - 0x004C0240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0240-DynObj_CreateMagicObject.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject.h"
int32_t DynObj_CreateMagicObject(int32_t* context)

{
    return *(*context + 4);
}
