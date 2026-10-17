// IGI native provenance: Display_SwapBuffers_16 - 0x00498410 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498410-Display_SwapBuffers_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers_16.h"
int32_t* Display_SwapBuffers_16(int32_t* context)

{
    g_bcaaa0 = *context;
    g_bcaaa4 = context[1];
    int32_t entity_1 = context[2];
    g_bcaac0 = 0;
    g_bcaaa8 = entity_1;
    g_bcaac4 = 0;
    g_bcaac8 = *context;
    g_bcaacc = context[1];
    return context;
}
