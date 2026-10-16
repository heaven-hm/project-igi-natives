#include "Config_SetVolume.h"
int32_t Config_SetVolume(int32_t a1)

{
    int32_t result = g_bc2384 * 0x159;
    (&g_bc28bc)[result] = a1;
    return result;
}
