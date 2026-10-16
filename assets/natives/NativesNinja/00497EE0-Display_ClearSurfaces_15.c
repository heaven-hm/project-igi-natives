#include "00497EE0-Display_ClearSurfaces_15.h"
/* 0x00497ee0 Display_ClearSurfaces_15 full linked: callers=1 callees=3 */
int32_t** sub_497ee0(int32_t a1)

{
    int32_t* eax = sub_497800(0xb8);
    eax[1] = g_543a68;
    memcpy(&eax[4], a1, 0xa8);
    return sub_4978b0(g_bcabe0 - 1, eax);
}
