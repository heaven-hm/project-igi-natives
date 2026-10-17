// Original IGI.EXE function: Render_SetupLighting_3 (VA 0x004D1220; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting_3.h"
int32_t Render_SetupLighting_3()

{
    for (int32_t* i = &g_b04358; i < 0xb12358; i = &i[7])
    {
        i[-2] = 0xffffffff;
        *i = 0;
    }

    Sys_OpenFileStream_2(&g_b12b60);
    Sys_OpenFileStream_2(&g_b12c40);
    return Sys_OpenFileStream_2(&g_b16cc0);
}
