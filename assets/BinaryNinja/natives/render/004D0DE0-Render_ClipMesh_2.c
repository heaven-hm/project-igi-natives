// Original IGI.EXE function: Render_ClipMesh_2 (VA 0x004D0DE0; static CFG gate PASS, CFG score 1.000).
#include "Render_ClipMesh_2.h"
int32_t* Render_ClipMesh_2(void* a1)

{
    int32_t* result = *(a1 + 0xc);
    int32_t i_1 = result[4];

    if (i_1)
    {
        result = result[5];

        if (i_1 > 0)
        {
            result = &result[1];
            int32_t i;

            do
            {
                int32_t objC1 = result[1];
                int32_t srcS1 = *result;
                result = &result[5];
                i = i_1;
                i_1 -= 1;
                result[-3] = *(*(a1 + 0x10) + (objC1 << 2));
                int32_t tmpD3 = *(a1 + 0x10);
                *(tmpD3 + (objC1 << 2)) = *(tmpD3 + (srcS1 << 2));
            } while (i != 1);
        }
    }

    return result;
}
