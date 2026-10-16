#include "004D0970-Render_SetupLighting.h"
/* 0x004d0970 Render_SetupLighting full linked: callers=2 callees=0 */
void** sub_4d0970(void** a1, void* a2, int32_t a3)

{
    void** result = *(a2 + 0x6c);

    if (result)
    {
        result = *result;

        if (result)
        {
            int32_t* edx_3 = *(*(result[3] + 0xc) + 0x88) + (a3 << 4);
            result = a1;
            *result = *edx_3;
            result[1] = edx_3[1];
            result[2] = edx_3[2];
            *result = *(a2 + 0x98) * *result;
            result[1] = *(a2 + 0x9c) * result[1];
            result[2] = *(a2 + 0xa0) * result[2];
        }
    }

    return result;
}
