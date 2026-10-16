#include "00482930-FX_ErrorInHumancameraHu_2.h"
/* 0x00482930 FX_ErrorInHumancameraHu_2 full linked: callers=1 callees=1 */
int32_t sub_482930(void* a1)

{
    int32_t ebx;
    int32_t var_4 = ebx;
    int32_t eax_1 = *(a1 + 0x118) + 1;
    int32_t esi = 0;
    *(a1 + 0x118) = eax_1;
    int32_t ecx = eax_1;
    int32_t result;

    while (true)
    {
        result = ecx & 0x8000007f;

        if (result < 0)
            result = ((result - 1) | 0xffffff80) + 1;

        if (*((result << 3) + &g_5c118d))
            break;

        esi += 1;
        ecx += 1;

        if (esi >= 0x80)
        {
            *(a1 + 0x118) = eax_1 - 1;
            return result;
        }
    }

    int32_t* ecx_1 = *((result << 3) + &g_5c1188);

    if (*ecx_1)
    {
        *(a1 + 0x68) = ecx_1;
        *(a1 + 0x118) = result;
        return result;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
