// IGI native provenance: App_ContextSetDebugged - 0x0048F1A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048F1A0-App_ContextSetDebugged.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "App_ContextSetDebugged.h"
int32_t App_ContextSetDebugged(char context)

// Sig: void App_ContextSetDebugged(int8_t state)
// Note: Sets the app-level DEBUGGED flag (global 0x5C8BF8). Param: state = 1
// mark debugger attached/debug mode, 0 clear. BlankName's IGIPatch calls this
// by name. Use to toggle engine debug paths.
{
    int32_t result = context;
    g_5c8bf8 = result;
    return result;
}
