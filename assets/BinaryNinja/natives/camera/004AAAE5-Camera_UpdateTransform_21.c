// IGI native provenance: Camera_UpdateTransform_21 - 0x004AAAE5 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AAAE5-Camera_UpdateTransform_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_21.h"
int32_t Camera_UpdateTransform_21(char* context, void** param_2, int32_t param_3)

{
    return Camera_SetFieldOfView_21(context, param_2, param_3, 0);
}
