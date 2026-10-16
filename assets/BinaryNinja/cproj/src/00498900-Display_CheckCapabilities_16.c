#include "gi_platform.h"
#include "00498900-Display_CheckCapabilities_16.h"
int32_t Display_CheckCapabilities_16()

{
    Camera_UpdateViewCone_32(sub_498930);
    Camera_ApplyBandFilter_32(Display_RestoreDevice_16);
    Camera_ApplyWideScreen_32(Display_RestoreDevice_16);
    return Camera_ApplyPostProcess_32(Display_RestoreDevice_16);
}
