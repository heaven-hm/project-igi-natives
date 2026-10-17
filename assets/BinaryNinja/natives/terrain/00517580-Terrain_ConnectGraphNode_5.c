// Original IGI.EXE function: Terrain_ConnectGraphNode_5 (VA 0x00517580; static CFG gate PASS, CFG score 1.000).
#include "Terrain_ConnectGraphNode_5.h"
int32_t Terrain_ConnectGraphNode_5(char* context)

{
    char* entity_val = context;
    char i = *entity_val;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *entity_val = i - 0x20;

        i = entity_val[1];
        entity_val = &entity_val[1];
    }

    return i;
}
