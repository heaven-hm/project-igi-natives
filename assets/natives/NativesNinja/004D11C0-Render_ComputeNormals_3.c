#include "004D11C0-Render_ComputeNormals_3.h"
/* 0x004d11c0 Render_ComputeNormals_3 full linked: callers=1 callees=3 */
int32_t sub_4d11c0()

{
    for (int32_t* i = &g_b04358; i < 0xb12358; i = &i[7])
    {
        i[-2] = 0xffffffff;
        *i = 0;
    }

    sub_4b0b00(&g_b12b60, 0x640, 0x2bc, 0x20);
    sub_4b0b00(&g_b12c40, 0xc80, 0x32, 0x20);
    return sub_4b0b00(&g_b16cc0, 0x1f40, 0, 0x20);
}
