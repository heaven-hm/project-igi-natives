#include "004D0DE0-Render_ClipMesh_2.h"
/* 0x004d0de0 Render_ClipMesh_2 full linked: callers=2 callees=0 */
int32_t* sub_4d0de0(void* a1)

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
                int32_t ecx_1 = result[1];
                int32_t esi_1 = *result;
                result = &result[5];
                i = i_1;
                i_1 -= 1;
                result[-3] = *(*(a1 + 0x10) + (ecx_1 << 2));
                int32_t edx_3 = *(a1 + 0x10);
                *(edx_3 + (ecx_1 << 2)) = *(edx_3 + (esi_1 << 2));
            } while (i != 1);
        }
    }

    return result;
}
