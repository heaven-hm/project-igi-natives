#include "00490360-Display_ClearSurfaces.h"
/* 0x00490360 Display_ClearSurfaces full linked: callers=2 callees=1 */
uint32_t sub_490360()

{
    uint32_t result = GetTickCount();
    g_tick_base = result;
    return result;
}
