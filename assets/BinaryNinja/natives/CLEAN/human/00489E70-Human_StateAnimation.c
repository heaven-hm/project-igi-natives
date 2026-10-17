// IGI native provenance: Human_StateAnimation - 0x00489E70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489E70-Human_StateAnimation.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_StateAnimation.h"
int32_t Human_StateAnimation(void* context, int32_t param_2, float param_3)

{
    int32_t* data_1 = *(context + 0x338) + (param_2 << 3);
    return FX_DebrisSpawn_14(context, *data_1, data_1[1], param_3);
}
