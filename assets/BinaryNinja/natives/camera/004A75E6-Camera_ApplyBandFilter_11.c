#include "Camera_ApplyBandFilter_11.h"
void Camera_ApplyBandFilter_11(char* a1, int32_t a2)

{
    if (a2)
        Camera_ApplyHandiCam_26(&a1[a2], a1, Camera_UpdateViewCone_20(a1) + 1);
}
