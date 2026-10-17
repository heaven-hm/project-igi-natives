// IGI native provenance: FX_SmokeEmit_4 - 0x00483D40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00483D40-FX_SmokeEmit_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_SmokeEmit_4.h"
void* FX_SmokeEmit_4(void* context)

{
    *(context + 0x110) = 0x44800000;
    *(context + 0x114) = 0x46200000;
    *(context + 0x108) = 0;
    *(context + 0x10c) = 0;
    *(context + 0x124) = 1;
    return context;
}
