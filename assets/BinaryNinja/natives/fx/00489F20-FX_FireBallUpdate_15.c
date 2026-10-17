// IGI native provenance: FX_FireBallUpdate_15 - 0x00489F20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489F20-FX_FireBallUpdate_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FireBallUpdate_15.h"
int32_t FX_FireBallUpdate_15(void* context, int32_t param_2, int32_t param_3, float param_4)

{
    return Bones_PlayAnimation(*(context + 0x4ec) + 0x68, 0, param_2, param_3, param_4);
}
