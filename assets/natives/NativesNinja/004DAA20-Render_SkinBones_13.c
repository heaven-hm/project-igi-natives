#include "004DAA20-Render_SkinBones_13.h"
/* 0x004daa20 Render_SkinBones_13 full linked: callers=8 callees=1 */
void* sub_4daa20(int32_t* a1)

{
    void* result = (g_b041d0 << 2) + &g_b01a00;
    memcpy(result, &g_b04200, g_b03df0 << 2);
    int32_t ecx_1 = g_b03df0;
    g_b041d0 += ecx_1;
    *a1 = ecx_1;
    return result;
}
