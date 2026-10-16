#include "Render_DrawSplineMesh_5.h"
void* Render_DrawSplineMesh_5(int32_t* a1)

{
    int32_t i = 0;

    if (*(*a1 * 0xc + &g_a542f0) > 0)
    {
        int32_t dstD1 = 0;

        do
        {
            void* valA2 = *(dstD1 + a1[2] + 0x80);

            if (valA2)
                Render_DrawBoneMesh_6(valA2);

            i += 1;
            *(dstD1 + a1[2] + 0x80) = 0;
            dstD1 += 0x84;
        } while (i < *(*a1 * 0xc + &g_a542f0));
    }

    void* result = a1[2];

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        a1[2] = 0;
    }

    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return result;
}
