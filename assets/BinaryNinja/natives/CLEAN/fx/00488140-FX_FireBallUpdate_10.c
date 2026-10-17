// IGI native provenance: FX_FireBallUpdate_10 - 0x00488140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488140-FX_FireBallUpdate_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FireBallUpdate_10.h"
void* FX_FireBallUpdate_10(void* context)

{
    void* result = *(context + 0x7c);

    if (result)
        result = FX_FragmentSimulate_10(result);

    return result;
}
