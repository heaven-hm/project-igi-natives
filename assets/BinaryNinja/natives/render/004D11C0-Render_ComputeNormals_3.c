// Original IGI.EXE function: Render_ComputeNormals_3 (VA 0x004D11C0; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_3.h"
int32_t Render_ComputeNormals_3()

{
    for (int32_t* i = &g_b04358; i < 0xb12358; i = &i[7])
    {
        i[-2] = 0xffffffff;
        *i = 0;
    }

    Sys_FreeMemory_2(&g_b12b60, 0x640, 0x2bc, 0x20);
    Sys_FreeMemory_2(&g_b12c40, 0xc80, 0x32, 0x20);
    return Sys_FreeMemory_2(&g_b16cc0, 0x1f40, 0, 0x20);
}
