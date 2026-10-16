#include "Display_ClearSurfaces.h"
uint32_t Display_ClearSurfaces()

{
    uint32_t result = GetTickCount();
    g_tick_base = result;
    return result;
}
