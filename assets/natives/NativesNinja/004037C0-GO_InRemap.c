#include "004037C0-GO_InRemap.h"
/* 0x004037c0 GO_InRemap full linked: callers=0 callees=4 */
int32_t GO_InRemap(int32_t a1, float a2 @ 0xc)

// Sig: int GO_InRemap(int key1, int key2, int action)
// Note: Adds one input binding (key remap) to the current profile. Params: key1
// = primary key code, key2 = secondary key code, action = in-game action id
// being bound. Use in input/config scripts, repeat once per binding. Returns 1.
{
    int32_t eax = g_bc2380;
    int32_t ecx_4 = eax * 0x159;
    int32_t eax_2 = eax * 0x73 + *((ecx_4 << 2) + &g_bc2358) - 0x73;
    int32_t eax_4 = sub_4b8a20(a2, 0);
    int32_t var_30 = 1;
    *(eax_2 * 0xc + &g_bc25bc) = eax_4;
    *(eax_2 * 0xc + 0xbc25c0) = sub_4b8a20(a2, var_30);
    *(eax_2 * 0xc + 0xbc25c4) = sub_4b8a20(a2, 2) & 0x3fffffff;
    *((ecx_4 << 2) + &g_bc2358) += 1;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
