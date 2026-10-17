// Original IGI.EXE function: Light_ApplyLightmap_5 (VA 0x00526860; static CFG gate PASS, CFG score 1.000).
#include "Light_ApplyLightmap_5.h"
uint32_t Light_ApplyLightmap_5()

{
    Light_SetLightColor();
    Sys_ExecuteBytecode_2(g_a83b28);
    g_a83b28 = 0;
    Display_SwapBuffers_13(0xa83980);
    QTask_InitContext(g_a83b44);
    QTask_InitContext(g_a8397c);
    QTask_InitContext(g_a83a18);
    Sys_OpenFileStream_2(&g_a83cf8);
    Sys_OpenFileStream_2(&g_a83a00);
    DynObj_CreateMagicObject_4(g_a83b3c);
    return QTask_CloseEvent_2(g_54f040);
}
