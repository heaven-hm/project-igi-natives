#include "00517580-Terrain_ConnectGraphNode_5.h"
/* 0x00517580 Terrain_ConnectGraphNode_5 full linked: callers=2 callees=0 */
int32_t sub_517580(char* a1)

{
    char* ecx = a1;
    char i = *ecx;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *ecx = i - 0x20;

        i = ecx[1];
        ecx = &ecx[1];
    }

    return i;
}
