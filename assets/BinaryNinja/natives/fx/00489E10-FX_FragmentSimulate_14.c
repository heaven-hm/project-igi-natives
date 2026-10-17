// IGI native provenance: FX_FragmentSimulate_14 - 0x00489E10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489E10-FX_FragmentSimulate_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FragmentSimulate_14.h"
int32_t FX_FragmentSimulate_14(void* context, int32_t param_2)

{
    return (param_2 << 4) + *(context + 8);
}
