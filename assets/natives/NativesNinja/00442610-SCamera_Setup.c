#include "00442610-SCamera_Setup.h"
/* 0x00442610 SCamera_Setup full linked: callers=0 callees=2 */
int32_t* sub_442610(int80_t a1 @ st0, void* a2)

{
    int32_t* i = *(a2 + 8);
    int32_t* eax;

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_4;

            if (!esi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *esi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_4;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_5 = 0;
            g_afa7e0 = edx_2;
            eax_5 = i[7];
            eax = *((eax_5 << 2) + &g_a970e0);

            if (eax)
            {
                eax = eax(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    eax = *(a2 + 0x170);

    if (eax)
        *(a2 + 0x168) = 0;
    else
    {
        eax = sub_4f16c0(a2 + 0x174);

        if (eax)
        {
            int32_t eax_6 = sub_4f16e0(a2 + 0x174, a2);
            *(a2 + 0x168) = a1;
            return eax_6;
        }
    }

    return eax;
}
