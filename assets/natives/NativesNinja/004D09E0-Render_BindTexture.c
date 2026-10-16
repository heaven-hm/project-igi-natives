#include "004D09E0-Render_BindTexture.h"
/* 0x004d09e0 Render_BindTexture full linked: callers=1 callees=1 */
void** sub_4d09e0(void** a1, void* a2, int32_t a3, char* a4)

{
    void** result = sub_4cec10(a4);

    if (result)
    {
        result = *result;

        if (result)
        {
            int32_t* ecx_3 = *(*(result[3] + 0xc) + 0x88) + (a3 << 4);
            result = a1;
            *result = *ecx_3;
            result[1] = ecx_3[1];
            result[2] = ecx_3[2];
            *result = *(a2 + 0x98) * *result;
            result[1] = *(a2 + 0x9c) * result[1];
            result[2] = *(a2 + 0xa0) * result[2];
        }
    }

    return result;
}
