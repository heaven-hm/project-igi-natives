// IGI native provenance: Display_ClearSurfaces_16 - 0x00498460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498460-Display_ClearSurfaces_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces_16.h"
int32_t Display_ClearSurfaces_16(int16_t context )

{
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(context);
    g_6e5bc4 = f0;
    g_6e5bc4 |= 0xc00;
    int16_t fpu_control;
    int16_t x87status_1;
    fpu_control = __fldcw_memmem16(g_6e5bc4);
}
