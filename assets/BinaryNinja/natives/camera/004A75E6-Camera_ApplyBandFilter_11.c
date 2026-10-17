// Original IGI.EXE function: Camera_ApplyBandFilter_11 (VA 0x004A75E6; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_11.h"
void Camera_ApplyBandFilter_11(char* context, int32_t param_2)

{
    if (param_2)
        Camera_ApplyHandiCam_26(&context[param_2], context, Camera_UpdateViewCone_20(context) + 1);
}
