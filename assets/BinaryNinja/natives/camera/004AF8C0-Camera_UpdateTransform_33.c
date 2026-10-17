// Original IGI.EXE function: Camera_UpdateTransform_33 (VA 0x004AF8C0; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_33.h"
int32_t Camera_UpdateTransform_33()

{
    Camera_ApplyBandFilter_32(0);
    Camera_UpdateViewCone_32(0);
    Camera_ApplyHandiCam_32(0);
    Camera_ApplyWideScreen_32(0);
    Camera_ApplyPostProcess_32(0);
    return Camera_ResetMatrix_32(0);
}
