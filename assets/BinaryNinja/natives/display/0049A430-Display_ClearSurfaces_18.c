// IGI native provenance: Display_ClearSurfaces_18 - 0x0049A430 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0049A430-Display_ClearSurfaces_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces_18.h"
int32_t Display_ClearSurfaces_18(int32_t context, int32_t param_2)

{
    memcpy(context + 0x20, param_2, 0x18);
    return context;
}
