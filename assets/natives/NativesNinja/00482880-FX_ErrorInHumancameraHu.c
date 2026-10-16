#include "00482880-FX_ErrorInHumancameraHu.h"
/* 0x00482880 FX_ErrorInHumancameraHu full linked: callers=1 callees=1 */
int32_t* sub_482880(void* a1)

{
    int32_t ecx = 0;
    char* eax = &g_5c118d;

    while (!*eax)
    {
        eax = &eax[8];
        ecx += 1;

        if (eax >= 0x5c158d)
            return eax;
    }

    int32_t* eax_1 = *((ecx << 3) + &g_5c1188);

    if (*eax_1)
    {
        *(a1 + 0x68) = eax_1;
        *(a1 + 0x118) = ecx;
        return eax_1;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
