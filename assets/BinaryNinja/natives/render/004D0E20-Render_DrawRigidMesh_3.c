#include "Render_DrawRigidMesh_3.h"
int32_t* Render_DrawRigidMesh_3(void* a1)

{
    int32_t* result = *(a1 + 0xc);
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
                int32_t srcS1 = *result;
                int32_t ctxB1 = result[1];
                result = &result[5];
                i = i_1;
                i_1 -= 1;
                *(*(a1 + 0x10) + (srcS1 << 2)) = ctxB1;
            } while (i != 1);
        }
    }

    return result;
}
