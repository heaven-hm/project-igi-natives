#include "004B72E0-Sys_AllocateMemory_19.h"
/* 0x004b72e0 Sys_AllocateMemory_19 full linked: callers=11 callees=0 */
int32_t sub_4b72e0(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* edx_4 = g_a43e50;
    int32_t ecx = *edx_4;
    *edx_4 = ecx + 1;
    edx_4[ecx * 3 + 3] = g_a43e54 + 0x943e4c;
    g_a43e54 += a2;
    edx_4[ecx * 3 + 2] = a1;
    edx_4[ecx * 3 + 4] = a3;
    return edx_4[ecx * 3 + 3];
}
