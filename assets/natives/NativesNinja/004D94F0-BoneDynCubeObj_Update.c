#include "004D94F0-BoneDynCubeObj_Update.h"
/* 0x004d94f0 BoneDynCubeObj_Update full linked: callers=0 callees=2 */
void sub_4d94f0(int32_t* a1, int32_t* a2)

{
    if (!*a2)
        sub_4c7140(a2[1], a1, &a1[8], a1[0x28], a2[2]);

    int32_t* i = a1[2];

    if (!*i || !i)
        return;

    int32_t ecx_2 = g_afa7e0;

    do
    {
        int32_t* edx_2 = *i;
        void* eax_6;

        if (!edx_2)
            eax_6 = nullptr;
        else
        {
            int32_t eax_3 = *edx_2;
            int32_t eax_4 = -(eax_3);
            eax_6 = (eax_4 - eax_4) & edx_2;
        }

        *((ecx_2 << 2) + &g_afa6e0) = eax_6;
        g_afa7e0 = ecx_2 + 1;
        uint32_t eax_8 = sub_4cea10();
        int32_t edx_3 = 0;
        edx_3 = i[7];
        int32_t eax = *(((eax_8 * 0x180 + edx_3) << 2) + &g_a96ae0);

        if (eax)
            eax(i, a2);

        ecx_2 = g_afa7e0 - 1;
        g_afa7e0 = ecx_2;
        i = *((ecx_2 << 2) + &g_afa6e0);
    } while (i);
}
