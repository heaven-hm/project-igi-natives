// IGI native provenance: DynObj_RemoveSymbol_12 - 0x004CEA30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CEA30-DynObj_RemoveSymbol_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RemoveSymbol_12.h"
int32_t* DynObj_RemoveSymbol_12(void* context)

{
    int32_t* result = *(context + 0xdc8);

    if (!result)
    {
        int32_t item_8_1 = 0;
        result = Physics_ApplyImpulse_14(context);
        *(context + 0xdc8) = 1;
    }

    return result;
}
