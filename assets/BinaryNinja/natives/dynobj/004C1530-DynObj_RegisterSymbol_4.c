// IGI native provenance: DynObj_RegisterSymbol_4 - 0x004C1530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C1530-DynObj_RegisterSymbol_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RegisterSymbol_4.h"
int32_t DynObj_RegisterSymbol_4(void* context, int32_t param_2)

{
    if (param_2 < *(context + 8))
    {
        int32_t entity_1 = *(*(context + 0x10) + (param_2 << 2));

        if (entity_1 < *(context + 0xc))
            return *(context + 0x14) + entity_1;
    }

    return 0;
}
