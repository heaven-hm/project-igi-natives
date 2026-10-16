#include "00498460-Display_ClearSurfaces_16.h"
/* 0x00498460 Display_ClearSurfaces_16 full linked: callers=5 callees=0 */
int32_t sub_498460(int16_t a1 @ x87control)

{
    int16_t x87status;
    int16_t temp0;
    temp0 = __fnstcw_memmem16(a1);
    g_6e5bc4 = temp0;
    g_6e5bc4 |= 0xc00;
    int16_t x87control;
    int16_t x87status_1;
    x87control = __fldcw_memmem16(g_6e5bc4);
}
