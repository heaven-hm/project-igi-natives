// Original IGI.EXE function: Terrain_RenderQuadtree_9 (VA 0x005186C0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_RenderQuadtree_9.h"
int32_t Terrain_RenderQuadtree_9(int32_t* context)

{
    int32_t entity_val = 0;

    for (char* i = &g_a800f8; i < 0xa801f8; )
    {
        if (!*i)
        {
            *((entity_val << 3) + &g_a800f8) = 1;
            int32_t result = 1 << (entity_val & 0x1f);
            *((entity_val << 3) + &g_a800fc) = context;
            TaskType_Set(context, result);
            return result;
        }

        i = &i[8];
        entity_val += 1;
    }

    int32_t* saved_src = context;
    Error_Show("Unable to register NodeCriteria %s");

    while (true)
        /* nop */
}
