// Original IGI.EXE function: Level_InitTextures_5 (VA 0x00416A70; static CFG gate PASS, CFG score 1.000).
#include "Level_InitTextures_5.h"
int32_t Level_InitTextures_5(int32_t context)

{
    int32_t* entity_1 = *(g_57babc + (context << 2) + 0xc0);

    if (!entity_1)
        return 0;

    return *entity_1;
}
