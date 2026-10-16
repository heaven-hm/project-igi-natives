#include "App_ContextSetDebugged.h"
int32_t App_ContextSetDebugged(char a1)

// Sig: void App_ContextSetDebugged(int8_t state)
// Note: Sets the app-level DEBUGGED flag (global 0x5C8BF8). Param: state = 1
// mark debugger attached/debug mode, 0 clear. BlankName's IGIPatch calls this
// by name. Use to toggle engine debug paths.
{
    int32_t result = a1;
    g_5c8bf8 = result;
    return result;
}
