// Original IGI.EXE function: Camera_ApplyBandFilter_11 (VA 0x004A75E6; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_11.h"
void Camera_ApplyBandFilter_11(char* a1, int32_t a2)

{
    if (a2)
        Camera_ApplyHandiCam_26(&a1[a2], a1, Camera_UpdateViewCone_20(a1) + 1);
}
