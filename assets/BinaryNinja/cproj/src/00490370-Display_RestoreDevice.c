#include "gi_platform.h"
#include "00490370-Display_RestoreDevice.h"
int32_t Timer_Now()

{
    return GetTickCount() - g_tick_base;
}
