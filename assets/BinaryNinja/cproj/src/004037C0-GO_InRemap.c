#include "gi_platform.h"
#include "004037C0-GO_InRemap.h"
int32_t GO_InRemap(int32_t a1, float a2 )

// Sig: int GO_InRemap(int key1, int key2, int action)
// Note: Adds one input binding (key remap) to the current profile. Params: key1
// = primary key code, key2 = secondary key code, action = in-game action id
// being bound. Use in input/config scripts, repeat once per binding. Returns 1.
{
    int32_t valA = g_bc2380;
    int32_t objC4 = valA * 0x159;
    int32_t valA2 = valA * 0x73 + *((objC4 << 2) + &g_bc2358) - 0x73;
    int32_t valA4 = Script_GetArg(a2, 0);
    int32_t v_30 = 1;
    *(valA2 * 0xc + &g_bc25bc) = valA4;
    *(valA2 * 0xc + 0xbc25c0) = Script_GetArg(a2, v_30);
    *(valA2 * 0xc + 0xbc25c4) = Script_GetArg(a2, 2) & 0x3fffffff;
    *((objC4 << 2) + &g_bc2358) += 1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
