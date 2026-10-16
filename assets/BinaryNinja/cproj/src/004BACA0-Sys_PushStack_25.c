#include "gi_platform.h"
#include "004BACA0-Sys_PushStack_25.h"
int32_t Sys_PushStack_25(int32_t* a1)

{
    Camera_ApplyHandiCam_33(a1);
    Camera_ApplyLineFilter_33(&g_a43eb0, a1);
    int32_t result = g_a43e8c - 1;
    g_a43e8c = result;
    return result;
}
