// IGI native provenance: Display_OpenDevice_16 - 0x00498350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498350-Display_OpenDevice_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_OpenDevice_16.h"
int32_t Display_OpenDevice_16()

{
    int32_t result = Sys_PopStack_2(g_6e5bb8);
    g_6e5bbc = 0;
    return result;
}
