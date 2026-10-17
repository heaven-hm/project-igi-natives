// IGI native provenance: Display_CreateSurface_11 - 0x00496D80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00496D80-Display_CreateSurface_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CreateSurface_11.h"
int32_t Display_CreateSurface_11(int32_t context, void* param_2, int32_t param_3, int32_t param_4)

{
    if (param_3 <= 0)
        return param_3;

    Resource_Unpack(*(param_2 + 0x18), context, param_3 * param_4);
    return Sys_ResolveSymbol_4(*(param_2 + 0x18));
}
