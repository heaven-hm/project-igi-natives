#include "gi_platform.h"
#include "004D4710-Render_ClipMesh_7.h"
int32_t Render_ClipMesh_7()

{
    int32_t objC2 = g_a545f8;
    int32_t result = *(g_a545f4 + (objC2 << 2)) * g_a54600 + g_a545f0;
    *(g_a54604 + result) = objC2;
    g_a545f8 += 1;
    return result;
}
