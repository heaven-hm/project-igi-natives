// Original IGI.EXE function: Render_ClipMesh_2 (VA 0x004D0DE0; static CFG gate PASS, CFG score 1.000).
#include "Render_ClipMesh_2.h"
int32_t* Render_ClipMesh_2(void* context)

{
    int32_t* result = *(context + 0xc);
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
                int32_t entity_1 = result[1];
                int32_t source_1 = *result;
                result = &result[5];
                i = i_1;
                i_1 -= 1;
                result[-3] = *(*(context + 0x10) + (entity_1 << 2));
                int32_t temp_3 = *(context + 0x10);
                *(temp_3 + (entity_1 << 2)) = *(temp_3 + (source_1 << 2));
            } while (i != 1);
        }
    }

    return result;
}
