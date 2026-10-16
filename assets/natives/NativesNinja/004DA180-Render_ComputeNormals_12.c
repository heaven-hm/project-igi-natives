#include "004DA180-Render_ComputeNormals_12.h"
/* 0x004da180 Render_ComputeNormals_12 full linked: callers=10 callees=1 */
int32_t sub_4da180(void** a1, int32_t* a2)

{
    void* edi = (g_a5e300 << 2) + &g_a546bc;
    *a1 = edi;
    memcpy(edi, &g_a54694, g_a5e2fc << 2);
    *a2 = g_a5e2fc;
    int32_t result = g_a5e300 + g_a5e2fc;
    g_a5e300 = result;
    return result;
}
