#include "00485D20-FX_SmokeEmit_6.h"
/* 0x00485d20 FX_SmokeEmit_6 full linked: callers=4 callees=3 */
int32_t sub_485d20(int32_t a1, int32_t a2)

{
    void* eax = sub_485d00(a1, a2);

    if (eax)
    {
        void* ecx_1 = g_bc2360;

        if (!ecx_1)
            *(eax + 0x1cc) = 0;
        else
            *(eax + 0x1cc) = *(ecx_1 + 0x68);

        *(eax + 0x1d6) = 1;
        *(eax + 0x1d0) = 0;
    }

    int32_t edx = a2 * 0x40b;
    void* esi_1 = a1 + (edx << 2);
    Qtask_UpdateList(*(a1 + (edx << 2) + 0x20));
    *(esi_1 + 0x20) = 0;
    *(esi_1 + 0x40) = 0;
    int32_t* esi_2 = esi_1 + 0x30;
    int32_t i_1 = 3;
    int32_t result;
    int32_t i;

    do
    {
        result = sub_4b6f30(*esi_2);
        *esi_2 = 0;
        esi_2 = &esi_2[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
