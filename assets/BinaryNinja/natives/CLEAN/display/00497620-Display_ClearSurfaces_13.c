// IGI native provenance: Display_ClearSurfaces_13 - 0x00497620 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00497620-Display_ClearSurfaces_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces_13.h"
int32_t* Display_ClearSurfaces_13(int32_t* context, int32_t param_2)

{
    int32_t temp_1 = g_684110 + 1;
    memcpy(0xbcaba0, context, 0x4c);
    g_684110 = temp_1;

    if (!param_2)
        return context;

    context[1] = 0;
    *context = 0;
    return Camera_SetFieldOfView_33(&g_684100, context);
}
