// IGI native provenance: FlatSky_Setup - 0x0051EB00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051EB00-FlatSky_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FlatSky_Setup.h"
void* FlatSky_Setup(void* context)

{
    Light_CalculateAttenuation_9(*(context + 0x84));
    return DynObj_RemoveSymbol_7(*(context + 0x68), context, 0xffffffff);
}
