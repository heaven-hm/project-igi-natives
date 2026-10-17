// Original IGI.EXE function: Render_DrawRigidMesh_3 (VA 0x004D0E20; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawRigidMesh_3.h"
int32_t* Render_DrawRigidMesh_3(void* context)

{
    int32_t* result = *(context + 0xc);
    int32_t i_1 = result[4];

    if (i_1)
    {
        result = result[5];

        if (i_1 > 0)
        {
            result = &result[2];
            int32_t i;

            do
            {
                int32_t source_1 = *result;
                int32_t context_1 = result[1];
                result = &result[5];
                i = i_1;
                i_1 -= 1;
                *(*(context + 0x10) + (source_1 << 2)) = context_1;
            } while (i != 1);
        }
    }

    return result;
}
