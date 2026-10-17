// IGI native provenance: Display_SwapBuffers - 0x00490350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490350-Display_SwapBuffers.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers.h"
int32_t Display_SwapBuffers(char context)

{
    g_c28c60 = context;
    return context;
}
