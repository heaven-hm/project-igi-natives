// IGI native provenance: FX_FireBallUpdate_14 - 0x00489C30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489C30-FX_FireBallUpdate_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FireBallUpdate_14.h"
int32_t* FX_FireBallUpdate_14(void* context, int32_t param_2)

{
    *(context + 0x258) = 0x3f800000;
    *(context + 0x25c) = param_2;
    int32_t* result = FX_SmokeEmit_14(context);
    *(context + 0x2e8) = 0xffffffff;
    return result;
}
