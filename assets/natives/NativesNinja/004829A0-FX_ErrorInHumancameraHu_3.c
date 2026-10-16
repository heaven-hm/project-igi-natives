#include "004829A0-FX_ErrorInHumancameraHu_3.h"
/* 0x004829a0 FX_ErrorInHumancameraHu_3 full linked: callers=1 callees=1 */
void* sub_4829a0(void* a1)

{
    int32_t ecx_1 = *(a1 + 0x118) - 1;
    int32_t esi = 0;
    *(a1 + 0x118) = ecx_1;
    int32_t eax = ecx_1;
    int32_t edi = ecx_1 + 0x80;
    int32_t edx = ecx_1 << 3;
    int32_t ecx_2;
    int32_t ebx_1;

    while (true)
    {
        ebx_1 = eax;
        ecx_2 = edx;

        if (eax < 0)
        {
            ebx_1 = edi;
            ecx_2 += 0x400;
        }

        if (*(ecx_2 + &g_5c118d))
            break;

        esi += 1;
        edx -= 8;
        eax -= 1;
        edi -= 1;

        if (esi >= 0x80)
        {
            *(a1 + 0x118) = ecx_1 + 1;
            return a1;
        }
    }

    int32_t* ecx_3 = *(ecx_2 + &g_5c1188);

    if (*ecx_3)
    {
        *(a1 + 0x118) = ebx_1;
        *(a1 + 0x68) = ecx_3;
        return a1;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
