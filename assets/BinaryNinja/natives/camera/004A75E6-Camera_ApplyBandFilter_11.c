// IGI native provenance: Camera_ApplyBandFilter_11 - 0x004A75E6 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A75E6-Camera_ApplyBandFilter_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyBandFilter_11.h"
void Camera_ApplyBandFilter_11(char* context, int32_t param_2)

{
    if (param_2)
        Camera_ApplyHandiCam_26(&context[param_2], context, Camera_UpdateViewCone_20(context) + 1);
}
