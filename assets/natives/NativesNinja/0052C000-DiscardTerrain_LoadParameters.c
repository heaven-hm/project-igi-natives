#include "0052C000-DiscardTerrain_LoadParameters.h"
/* 0x0052c000 DiscardTerrain_LoadParameters full linked: callers=0 callees=4 */
int32_t sub_52c000(int32_t* a1)

{
    __builtin_memset(&a1[0x3c], 0, 0x48);
    a1[0x54] = 0xa;
    void* eax = sub_4cec10("johan");
    sub_4c5710(g_a44344, a1, eax);
    return sub_4c7140(a1[0x1a], a1, &a1[0x3c], 4096f, 4);
}
