// Original IGI.EXE function: Render_ClipMesh_11 (VA 0x004D95E0; static CFG gate PASS, CFG score 1.000).
#include "Render_ClipMesh_11.h"
uint32_t Render_ClipMesh_11()

{
    QTask_CloseEvent_2(g_548618);
    char objC = g_54861a;
    g_548618 = 0x181;
    uint32_t result = QTask_InitContext(objC);
    g_54861a = 0xff;
    return result;
}
