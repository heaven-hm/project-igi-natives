#include "004D4710-Render_ClipMesh_7.h"
/* 0x004d4710 Render_ClipMesh_7 full linked: callers=6 callees=0 */
int32_t sub_4d4710()

{
    int32_t ecx_2 = g_a545f8;
    int32_t result = *(g_a545f4 + (ecx_2 << 2)) * g_a54600 + g_a545f0;
    *(g_a54604 + result) = ecx_2;
    g_a545f8 += 1;
    return result;
}
