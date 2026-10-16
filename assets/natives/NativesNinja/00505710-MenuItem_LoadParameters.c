#include "00505710-MenuItem_LoadParameters.h"
/* 0x00505710 MenuItem_LoadParameters full linked: callers=0 callees=1 */
int32_t sub_505710(void* a1, int32_t a2)

{
    char eax_1 = 1;

    if (!*(a1 + 0x4d))
        eax_1 = *(a1 + 0x4e);

    int32_t* i = *(a1 + 8);
    *(a1 + 0x4e) = eax_1;

    if (!*i || !i)
    {
        *(a1 + 0x4d) = 0;
        return eax_1;
    }

    int32_t ecx = g_afa7e0;
    int32_t eax_11;

    do
    {
        int32_t* edx_1 = *i;
        void* eax_5;

        if (!edx_1)
            eax_5 = nullptr;
        else
        {
            int32_t eax_2 = *edx_1;
            int32_t eax_3 = -(eax_2);
            eax_5 = (eax_3 - eax_3) & edx_1;
        }

        *((ecx << 2) + &g_afa6e0) = eax_5;
        g_afa7e0 = ecx + 1;
        uint32_t eax_7 = sub_505c70();
        int32_t ecx_2 = 0;
        ecx_2 = i[7];
        eax_11 = *(((eax_7 * 0x180 + ecx_2) << 2) + &g_a96ae0);

        if (eax_11)
            eax_11 = eax_11(i, a2);

        ecx = g_afa7e0 - 1;
        g_afa7e0 = ecx;
        i = *((ecx << 2) + &g_afa6e0);
    } while (i);

    *(a1 + 0x4d) = 0;
    return eax_11;
}
