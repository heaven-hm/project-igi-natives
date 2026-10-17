// IGI native provenance: Camera_ResetMatrix_28 - 0x004ADA58 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ADA58-Camera_ResetMatrix_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_28.h"
int32_t Camera_ResetMatrix_28(int32_t context, int32_t param_2, int32_t* param_3)

{
    int32_t result = 0;
    int32_t entity_val = context + param_2;

    if (entity_val < context || entity_val < param_2)
        result = 1;

    *param_3 = entity_val;
    return result;
}
