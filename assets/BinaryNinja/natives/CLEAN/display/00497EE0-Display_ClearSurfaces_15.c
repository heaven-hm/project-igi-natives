// IGI native provenance: Display_ClearSurfaces_15 - 0x00497EE0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497EE0-Display_ClearSurfaces_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces_15.h"
int32_t** Display_ClearSurfaces_15(int32_t context)

{
    int32_t* data_val = Display_CloseDevice_14(0xb8);
    data_val[1] = g_543a68;
    memcpy(&data_val[4], context, 0xa8);
    return Display_ClearSurfaces_14(g_bcabe0 - 1, data_val);
}
