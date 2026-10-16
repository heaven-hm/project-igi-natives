#include "Display_RestoreDevice.h"
int32_t Timer_Now()

{
    return GetTickCount() - g_tick_base;
}
