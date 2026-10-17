// IGI native provenance: FX_FragmentSimulate_15 - 0x00489F50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489F50-FX_FragmentSimulate_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FragmentSimulate_15.h"
int32_t FX_FragmentSimulate_15(void* context)

{
    int32_t result;
    result = 0;

    if (*((*(*(context + 0x4ec) + 0x70) + 4) + 1) & 1)
        result = 1;

    return result;
}
