#include "gi_platform.h"
#include "004AF8C0-Camera_UpdateTransform_33.h"
int32_t Camera_UpdateTransform_33()

{
    Camera_ApplyBandFilter_32(0);
    Camera_UpdateViewCone_32(0);
    Camera_ApplyHandiCam_32(0);
    Camera_ApplyWideScreen_32(0);
    Camera_ApplyPostProcess_32(0);
    return Camera_ResetMatrix_32(0);
}
