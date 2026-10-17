// Original IGI.EXE function: Sys_PushStack_25 (VA 0x004BACA0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_25.h"
int32_t Sys_PushStack_25(int32_t* a1)

{
    Camera_ApplyHandiCam_33(a1);
    Camera_ApplyLineFilter_33(&g_a43eb0, a1);
    int32_t result = g_a43e8c - 1;
    g_a43e8c = result;
    return result;
}
