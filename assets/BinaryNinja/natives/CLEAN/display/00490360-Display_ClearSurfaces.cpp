// IGI native provenance: Display_ClearSurfaces - 0x00490360 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490360-Display_ClearSurfaces.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces.h"
uint32_t Display_ClearSurfaces()

{
    uint32_t result = GetTickCount();
    g_tick_base = result;
    return result;
}
