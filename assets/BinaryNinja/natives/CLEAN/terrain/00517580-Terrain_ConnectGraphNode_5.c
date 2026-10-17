// IGI native provenance: Terrain_ConnectGraphNode_5 - 0x00517580 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517580-Terrain_ConnectGraphNode_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
