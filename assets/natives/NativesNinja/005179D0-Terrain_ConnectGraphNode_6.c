#include "005179D0-Terrain_ConnectGraphNode_6.h"
/* 0x005179d0 Terrain_ConnectGraphNode_6 full linked: callers=4 callees=0 */
int32_t sub_5179d0(char* a1)

{
    int32_t ecx = 0;
    int32_t edx = 0;
    *(&ecx + 1) = *a1;
    edx = a1[2];
    ecx = a1[1];
    int32_t edx_1 = 0;
    edx_1 = a1[3];
    return (ecx << 8 | edx) << 8 | edx_1;
}
