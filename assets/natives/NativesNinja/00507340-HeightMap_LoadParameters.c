#include "00507340-HeightMap_LoadParameters.h"
/* 0x00507340 HeightMap_LoadParameters full linked: callers=0 callees=2 */
void* sub_507340(void* a1)

{
    if (!*(a1 + 0xe0))
    {
        void* eax_1 = *(a1 + 0xc0);

        if (eax_1 != 0xffffffff && !*(eax_1 + 0xb81920))
        {
            sub_4b0d10(*(*(*(a1 + 0x68) + 0xdd0) + eax_1 * 0xc));
            *(*(*(a1 + 0x68) + 0xdd0) + *(a1 + 0xc0) * 0xc) = 0;
            *(*(*(a1 + 0x68) + 0xdd0) + *(a1 + 0xc0) * 0xc) = 0;
        }

        int32_t eax_7 = *(a1 + 0xf8);

        if (eax_7 != 0xffffffff)
        {
            int32_t ecx_6 = g_a7b250;

            if (eax_7 != ecx_6 - 1)
            {
                void* ecx_7 = *((ecx_6 << 2) + &g_a7ad0c);
                *((eax_7 << 2) + &g_a7ad10) = ecx_7;
                *(ecx_7 + 0xf8) = eax_7;
            }

            g_a7b250 -= 1;
        }
    }

    return sub_4c7560(*(a1 + 0x68), a1);
}
