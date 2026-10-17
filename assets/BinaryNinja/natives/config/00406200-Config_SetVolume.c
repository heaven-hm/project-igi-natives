// Original IGI.EXE function: Config_SetVolume (VA 0x00406200; static CFG gate PASS, CFG score 1.000).
#include "Config_SetVolume.h"
int32_t Config_SetVolume(int32_t context)

{
    int32_t result = g_bc2384 * 0x159;
    (&g_bc28bc)[result] = context;
    return result;
}
