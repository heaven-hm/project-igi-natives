#include "gi_platform.h"
#include "004DA180-Render_ComputeNormals_12.h"
int32_t Render_ComputeNormals_12(void** a1, int32_t* a2)

{
    void* dstD = (g_a5e300 << 2) + &g_a546bc;
    *a1 = dstD;
    memcpy(dstD, &g_a54694, g_a5e2fc << 2);
    *a2 = g_a5e2fc;
    int32_t result = g_a5e300 + g_a5e2fc;
    g_a5e300 = result;
    return result;
}
