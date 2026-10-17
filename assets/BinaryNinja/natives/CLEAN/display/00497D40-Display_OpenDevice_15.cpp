// IGI native provenance: Display_OpenDevice_15 - 0x00497D40 - CFG score 72.2% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00497D40-Display_OpenDevice_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_OpenDevice_15.h"
int32_t Display_OpenDevice_15()

{
    Sys_ResolveSymbol_2(g_6e5ba8);
    Sys_ResolveSymbol_2(g_6e5ba4);
    g_543a68 = 0xffffffff;
    /* tailcall */
    return Display_SwapBuffers_15();
}
