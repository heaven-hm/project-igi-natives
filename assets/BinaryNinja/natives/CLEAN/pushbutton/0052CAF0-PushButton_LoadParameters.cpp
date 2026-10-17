// IGI native provenance: PushButton_LoadParameters - 0x0052CAF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052CAF0-PushButton_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PushButton_LoadParameters.h"
int32_t PushButton_LoadParameters(void* context, int32_t* param_2)

{
    int32_t result = *(context + 0x78);

    if (!result)
        return result;

    *(context + 0x74) = context;
    Sys_ExecuteBytecode_18(result, context + 0x5c);
    return EditRigidObjAttachedToBone_Process_2(param_2, context + 0x54);
}
