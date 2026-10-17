// IGI native provenance: Display_CreateSurface_13 - 0x004977B0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004977B0-Display_CreateSurface_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CreateSurface_13.h"
int32_t** Display_CreateSurface_13(int32_t context, int32_t param_2)

{
    int32_t* data_val = Display_CloseDevice_14(0x24);
    memcpy(data_val, context, 0x24);
    data_val[1] = Display_SetGammaRamp_4();
    return Display_ClearSurfaces_14(param_2, data_val);
}
