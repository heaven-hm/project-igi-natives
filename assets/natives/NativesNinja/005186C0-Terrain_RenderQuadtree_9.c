#include "005186C0-Terrain_RenderQuadtree_9.h"
/* 0x005186c0 Terrain_RenderQuadtree_9 full linked: callers=3 callees=2 */
int32_t sub_5186c0(int32_t* a1)

{
    int32_t ecx = 0;

    for (char* i = &g_a800f8; i < 0xa801f8; )
    {
        if (!*i)
        {
            *((ecx << 3) + &g_a800f8) = 1;
            int32_t result = 1 << (ecx & 0x1f);
            *((ecx << 3) + &g_a800fc) = a1;
            TaskType_Set(a1, result);
            return result;
        }

        i = &i[8];
        ecx += 1;
    }

    int32_t* __saved_esi = a1;
    Error_Show("Unable to register NodeCriteria %s");

    while (true)
        /* nop */
}
