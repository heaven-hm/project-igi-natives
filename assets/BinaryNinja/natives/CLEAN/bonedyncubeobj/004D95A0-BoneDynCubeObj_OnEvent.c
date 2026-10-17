// IGI native provenance: BoneDynCubeObj_OnEvent - 0x004D95A0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004D95A0-BoneDynCubeObj_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BoneDynCubeObj_OnEvent.h"
int32_t BoneDynCubeObj_OnEvent(void* context, double* param_2)

{
    int32_t result = WorldObject_CommitTransform(g_a44344, context, param_2, *(context + 0xa0));
    memcpy(context + 0x78, &param_2[3], 0x28);
    return result;
}
