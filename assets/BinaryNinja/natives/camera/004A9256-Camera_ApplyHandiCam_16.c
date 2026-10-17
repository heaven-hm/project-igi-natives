// IGI native provenance: Camera_ApplyHandiCam_16 - 0x004A9256 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9256-Camera_ApplyHandiCam_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_16.h"
int32_t Camera_ApplyHandiCam_16(long double context , long double param_2 ) {
    int16_t fpu_control;
    return Camera_ApplyLineFilter_16(fpu_control, context, param_2);
}
