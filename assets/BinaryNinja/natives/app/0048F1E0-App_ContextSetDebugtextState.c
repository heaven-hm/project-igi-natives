// IGI native provenance: App_ContextSetDebugtextState - 0x0048F1E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048F1E0-App_ContextSetDebugtextState.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "App_ContextSetDebugtextState.h"
int32_t App_ContextSetDebugtextState(char context)

// Sig: void App_ContextSetDebugtextState(int8_t state)
// Note: Toggles on-screen DEBUG TEXT output (global 0x5C8BF4). Param: state = 1
// show engine debug text, 0 hide. Handy while reverse-engineering other
// systems.
{
    int32_t result = context;
    g_5c8bf4 = result;
    return result;
}
