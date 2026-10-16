#include "00406200-Config_SetVolume.h"
/* 0x00406200 Config_SetVolume full linked: callers=1 callees=0 */
int32_t Config_SetVolume(int32_t a1)

{
    int32_t result = g_bc2384 * 0x159;
    (&g_bc28bc)[result] = a1;
    return result;
}
