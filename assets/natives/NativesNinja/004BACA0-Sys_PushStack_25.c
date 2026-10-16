#include "004BACA0-Sys_PushStack_25.h"
/* 0x004baca0 Sys_PushStack_25 full linked: callers=2 callees=2 */
int32_t sub_4baca0(int32_t* a1)

{
    sub_4af960(a1);
    sub_4af910(&g_a43eb0, a1);
    int32_t result = g_a43e8c - 1;
    g_a43e8c = result;
    return result;
}
