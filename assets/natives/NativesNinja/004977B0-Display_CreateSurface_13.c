#include "004977B0-Display_CreateSurface_13.h"
/* 0x004977b0 Display_CreateSurface_13 full linked: callers=1 callees=4 */
int32_t** sub_4977b0(int32_t a1, int32_t a2)

{
    int32_t* eax = sub_497800(0x24);
    memcpy(eax, a1, 0x24);
    eax[1] = sub_491db0();
    return sub_4978b0(a2, eax);
}
