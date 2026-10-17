// IGI native provenance: AnimRigidDynCubeObj_OnEvent - 0x0052AC10 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0052AC10-AnimRigidDynCubeObj_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimRigidDynCubeObj_OnEvent.h"
int32_t AnimRigidDynCubeObj_OnEvent(int32_t context, int32_t* param_2)

{
    int32_t result = *param_2;
    memcpy(param_2[2], context + 0x20, 0x18);
    memcpy(result + 0x18, context + 0x70, 0x28);
    memcpy(result, context + 0x20, 0x18);
    return result;
}
