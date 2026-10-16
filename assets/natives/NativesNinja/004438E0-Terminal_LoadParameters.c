#include "004438E0-Terminal_LoadParameters.h"
/* 0x004438e0 Terminal_LoadParameters full linked: callers=0 callees=3 */
char sub_4438e0(int80_t a1 @ st0, void* a2)

{
    (*((sub_481340() << 2) + &g_a970e0))(a2);

    if (*(a2 + 0x190))
        *(a2 + 0x240) = 0;
    else if (sub_4f16c0(a2 + 0x250))
    {
        sub_4f16e0(a2 + 0x250, a2);
        *(a2 + 0x240) = a1;
    }

    if (*(g_bc2360 + 0x68) > *(a2 + 0x23c) + 2)
        *(a2 + 0x238) = 0;

    char result = *(a2 + 0x238);
    int32_t ecx_2 = *(a2 + 0x244);
    *(a2 + 0x239) = result;

    if (*(g_bc2360 + 0x68) > ecx_2 + 2)
        *(a2 + 0x242) = 0;

    return result;
}
