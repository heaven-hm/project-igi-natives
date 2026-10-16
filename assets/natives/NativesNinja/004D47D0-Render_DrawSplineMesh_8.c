#include "004D47D0-Render_DrawSplineMesh_8.h"
/* 0x004d47d0 Render_DrawSplineMesh_8 full linked: callers=2 callees=4 */
int32_t* sub_4d47d0(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t* result = sub_4d4710();
    int32_t* edx = *(*(a1 * 0x28 + &g_a538f4) + (a3 << 2));
    int32_t* eax_1 = sub_4d4f20();
    int32_t ecx_1 = a4;
    *(&ecx_1 + 1) |= 0x80;
    sub_4d4f60(eax_1, edx, ecx_1, a1, a2, a3);
    sub_4d4750(result, sub_4d4840, sub_4d5180, sub_4d4b60, sub_4d5080, eax_1);
    return result;
}
