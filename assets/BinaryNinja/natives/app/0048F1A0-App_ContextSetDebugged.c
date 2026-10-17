// Original IGI.EXE function: App_ContextSetDebugged (VA 0x0048F1A0; static CFG gate PASS, CFG score 1.000).
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
