#include "004D74F0-Render_BindTexture_11.h"
/* 0x004d74f0 Render_BindTexture_11 full linked: callers=10 callees=0 */
int32_t sub_4d74f0(int32_t* a1, int32_t a2, int32_t a3)

{
    if (a1)
    {
        int32_t eax_1 = *a1;

        if (a1[2] && a2 >= 0 && a2 < *(eax_1 * 0xc + &g_a542f0))
        {
            int32_t eax_3 = eax_1 * 0x28;
            int32_t ecx_1 = *(eax_3 + 0xa53914);

            if (ecx_1 && a3 < ecx_1)
            {
                int32_t result = 0;
                result = *(*(eax_3 + &g_a538f4) + (a3 << 2));
                return result;
            }
        }
    }

    return 0;
}
