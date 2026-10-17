// Original IGI.EXE function: Render_BindTexture_4 (VA 0x004D2C30; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_4.h"
int32_t Render_BindTexture_4()

{
    Render_DrawRigidMesh_7(0, 0);
    g_a54678 = 1;
    int32_t* objC = &g_a538f0;

    for (int32_t* i = &g_a542f4; i < &g_a545f4; )
    {
        i[-1] = 0;
        *i = 0;
        objC[9] = 0;
        i[1] = 0;
        *objC = 0;
        objC[1] = 0;
        i = &i[3];
        objC = &objC[0xa];
    }

    Sys_FreeMemory_2(&g_a54640, 0x10, 0x80, 4);
    Sys_FreeMemory_2(&g_a54620, 0x34, 0x80, 4);
    Sys_FreeMemory_2(&g_a54608, 0x1c, 0x80, 4);
    Sys_FreeMemory_2(&g_a54660, 0x2c, 0x80, 4);
    int32_t result = Sys_FreeMemory_2(&g_a545f0, 0x14, 0x100, 4);
    g_a54684 = 0;
    g_a54688 = 0;
    g_a54658 = 0;
    return result;
}
