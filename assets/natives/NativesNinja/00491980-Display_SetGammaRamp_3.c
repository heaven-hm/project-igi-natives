#include "00491980-Display_SetGammaRamp_3.h"
/* 0x00491980 Display_SetGammaRamp_3 full linked: callers=2 callees=0 */
int32_t sub_491980(void* a1, char a2, int32_t a3)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t result = 0;
    int32_t i = 0;
    int32_t result_1 = 0;

    if (g_c10384 <= 0)
        return 0;

    int32_t* esi = &g_bcae28;

    do
    {
        int32_t eax_1 = 1;

        if (!a1)
        {
        label_4919f2:

            if (a3)
            {
                a3(&esi[-2]);
                result = result_1;
            }

            result += 1;
            result_1 = result;
        }
        else
        {
            if (1 & a2 && *(a1 + 4) != esi[-1])
                eax_1 = 0;

            if (a2 & 2 && *(a1 + 8) != *esi)
                eax_1 = 0;

            if (a2 & 4 && *(a1 + 0x10) != esi[2])
                eax_1 = 0;

            if ((!(a2 & 8) || *(a1 + 0x18) == esi[4]) && eax_1)
                goto label_4919f2;
        }

        i += 1;
        esi = &esi[0x47];
    } while (i < g_c10384);

    return result;
}
