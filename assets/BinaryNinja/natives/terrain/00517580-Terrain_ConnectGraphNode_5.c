#include "Terrain_ConnectGraphNode_5.h"
int32_t Terrain_ConnectGraphNode_5(char* a1)

{
    char* objC = a1;
    char i = *objC;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *objC = i - 0x20;

        i = objC[1];
        objC = &objC[1];
    }

    return i;
}
