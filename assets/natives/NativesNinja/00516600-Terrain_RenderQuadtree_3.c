#include "00516600-Terrain_RenderQuadtree_3.h"
/* 0x00516600 Terrain_RenderQuadtree_3 full linked: callers=1 callees=3 */
int32_t* sub_516600()

{
    sub_495170(sub_516640);
    sub_4951e0(sub_5166c0);
    sub_495200(sub_5166f0);
    int32_t* i;

    for (i = &g_a7e080; i < 0xa7f85c; )
    {
        int32_t* ecx_1 = &i[1];
        *i = ecx_1;
        i[2] = i;
        i = &i[3];
        *ecx_1 = 0;
    }

    return i;
}
