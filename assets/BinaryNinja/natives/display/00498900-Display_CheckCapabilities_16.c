// Original IGI.EXE function: Display_CheckCapabilities_16 (VA 0x00498900; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_16.h"
int32_t Display_CheckCapabilities_16()

{
    Camera_UpdateViewCone_32(sub_498930);
    Camera_ApplyBandFilter_32(Display_RestoreDevice_16);
    Camera_ApplyWideScreen_32(Display_RestoreDevice_16);
    return Camera_ApplyPostProcess_32(Display_RestoreDevice_16);
}
