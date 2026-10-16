#include "00490370-Display_RestoreDevice.h"
/* 0x00490370 Display_RestoreDevice full linked: callers=20 callees=1 */
int32_t Timer_Now()

{
    return GetTickCount() - g_tick_base;
}
