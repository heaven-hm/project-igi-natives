// IGI native provenance: FX_FireBallUpdate_3 - 0x00482C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00482C10-FX_FireBallUpdate_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FireBallUpdate_3.h"
void* FX_FireBallUpdate_3(void* context)

{
    *(context + 0x110) = 0x44800000;
    *(context + 0x108) = 0;
    *(context + 0x10c) = 0;
    return context;
}
