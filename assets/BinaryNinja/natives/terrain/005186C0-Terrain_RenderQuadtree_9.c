#include "Terrain_RenderQuadtree_9.h"
int32_t Terrain_RenderQuadtree_9(int32_t* a1)

{
    int32_t objC = 0;

    for (char* i = &g_a800f8; i < 0xa801f8; )
    {
        if (!*i)
        {
            *((objC << 3) + &g_a800f8) = 1;
            int32_t result = 1 << (objC & 0x1f);
            *((objC << 3) + &g_a800fc) = a1;
            TaskType_Set(a1, result);
            return result;
        }

        i = &i[8];
        objC += 1;
    }

    int32_t* saved_src = a1;
    Error_Show("Unable to register NodeCriteria %s");

    while (true)
        /* nop */
}
