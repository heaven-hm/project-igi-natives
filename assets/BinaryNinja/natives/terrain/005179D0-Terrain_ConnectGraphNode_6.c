// Original IGI.EXE function: Terrain_ConnectGraphNode_6 (VA 0x005179D0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_ConnectGraphNode_6.h"
int32_t Terrain_ConnectGraphNode_6(char* context)

{
    int32_t entity_val = 0;
    int32_t temp_val = 0;
    *(&entity_val + 1) = *context;
    temp_val = context[2];
    entity_val = context[1];
    int32_t temp_1 = 0;
    temp_1 = context[3];
    return (entity_val << 8 | temp_val) << 8 | temp_1;
}
