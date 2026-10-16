#include "gi_platform.h"
#include "004D74F0-Render_BindTexture_11.h"
int32_t Render_BindTexture_11(int32_t* a1, int32_t a2, int32_t a3)

{
    if (a1)
    {
        int32_t valA1 = *a1;

        if (a1[2] && a2 >= 0 && a2 < *(valA1 * 0xc + &g_a542f0))
        {
            int32_t valA3 = valA1 * 0x28;
            int32_t objC1 = *(valA3 + 0xa53914);

            if (objC1 && a3 < objC1)
            {
                int32_t result = 0;
                result = (*(int32_t*)(uintptr_t)(*(valA3 + &g_a538f4) + (a3 << 2)));
                return result;
            }
        }
    }

    return 0;
}
