#include "gi_platform.h"
#include "00498460-Display_ClearSurfaces_16.h"
int32_t Display_ClearSurfaces_16(int16_t a1 )

{
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(a1);
    g_6e5bc4 = f0;
    g_6e5bc4 |= 0xc00;
    int16_t x87control;
    int16_t x87status_1;
    x87control = __fldcw_memmem16(g_6e5bc4);
}
