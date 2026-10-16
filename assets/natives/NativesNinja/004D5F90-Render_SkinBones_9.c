#include "004D5F90-Render_SkinBones_9.h"
/* 0x004d5f90 Render_SkinBones_9 full linked: callers=3 callees=0 */
int32_t sub_4d5f90()

{
    int32_t ecx_2 = g_a54648;
    int32_t result = *(g_a54644 + (ecx_2 << 2)) * g_a54650 + g_a54640;
    *(g_a54654 + result) = ecx_2;
    g_a54648 += 1;
    return result;
}
