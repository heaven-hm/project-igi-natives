#include "0048F1E0-App_ContextSetDebugtextState.h"
/* 0x0048f1e0 App_ContextSetDebugtextState full linked: callers=1 callees=0 */
int32_t App_ContextSetDebugtextState(char a1)

// Sig: void App_ContextSetDebugtextState(int8_t state)
// Note: Toggles on-screen DEBUG TEXT output (global 0x5C8BF4). Param: state = 1
// show engine debug text, 0 hide. Handy while reverse-engineering other
// systems.
{
    int32_t result = a1;
    g_5c8bf4 = result;
    return result;
}
