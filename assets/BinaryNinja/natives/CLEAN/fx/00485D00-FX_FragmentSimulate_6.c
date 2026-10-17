// IGI native provenance: FX_FragmentSimulate_6 - 0x00485D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485D00-FX_FragmentSimulate_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FragmentSimulate_6.h"
int32_t FX_FragmentSimulate_6(int32_t context, int32_t param_2)

{
    return **(context + param_2 * 0x102c + 0x20);
}
