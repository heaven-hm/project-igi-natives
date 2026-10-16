#include "004D0E20-Render_DrawRigidMesh_3.h"
/* 0x004d0e20 Render_DrawRigidMesh_3 full linked: callers=2 callees=0 */
int32_t* sub_4d0e20(void* a1)

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
                int32_t esi_1 = *result;
                int32_t ebx_1 = result[1];
                result = &result[5];
                i = i_1;
                i_1 -= 1;
                *(*(a1 + 0x10) + (esi_1 << 2)) = ebx_1;
            } while (i != 1);
        }
    }

    return result;
}
