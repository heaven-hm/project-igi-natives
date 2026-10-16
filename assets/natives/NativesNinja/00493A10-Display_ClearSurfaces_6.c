#include "00493A10-Display_ClearSurfaces_6.h"
/* 0x00493a10 Display_ClearSurfaces_6 full linked: callers=2 callees=0 */
int32_t* sub_493a10()

{
    int32_t* eax_1 = g_bcad00;

    if (eax_1)
    {
        (*(*eax_1 + 8))(eax_1);
        g_bcad00 = 0;
    }

    int32_t* eax = g_bcad80;

    if (eax)
    {
        (*(*eax + 8))(eax);
        g_bcad80 = 0;
    }

    int32_t* result = g_bcad90;

    if (result)
    {
        result = (*(*result + 8))(result);
        g_bcad90 = 0;
    }

    return result;
}
