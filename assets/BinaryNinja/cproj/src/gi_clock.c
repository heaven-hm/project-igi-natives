#include "gi_platform.h"

#include <SDL.h>

uint32_t gi_platform_get_tick_count(void)
{
    return SDL_GetTicks();
}
