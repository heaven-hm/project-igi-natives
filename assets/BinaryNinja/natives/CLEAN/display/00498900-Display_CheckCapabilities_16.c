// IGI native provenance: Display_CheckCapabilities_16 - 0x00498900 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498900-Display_CheckCapabilities_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CheckCapabilities_16.h"
int32_t Display_CheckCapabilities_16()

{
    Camera_UpdateViewCone_32(sub_498930);
    Camera_ApplyBandFilter_32(Display_RestoreDevice_16);
    Camera_ApplyWideScreen_32(Display_RestoreDevice_16);
    return Camera_ApplyPostProcess_32(Display_RestoreDevice_16);
}
