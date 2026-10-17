// IGI native provenance: FX_SmokeEmit_23 - 0x0048F140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048F140-FX_SmokeEmit_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_SmokeEmit_23.h"
int32_t FX_SmokeEmit_23(int32_t context)

{
    g_5c8bfc = context;
    int32_t entity_1 = g_5c8c18;

    if (!entity_1)
        return context;

    return entity_1(context, g_5c8c1c);
}
