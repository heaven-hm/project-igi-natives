#include "00491240-Display_SetGammaRamp_2.h"
/* 0x00491240 Display_SetGammaRamp_2 full linked: callers=1 callees=1 */
void sub_491240(int32_t a1, int32_t a2, int32_t* a3)

{
    if (a2 >= 0 && a2 < 4 && a3 && a1 && !*(a1 + (a2 << 2) + 0x1b8))
        *(a1 + (a2 << 2) + 0x1b8) = sub_4b7000(a3);
}
