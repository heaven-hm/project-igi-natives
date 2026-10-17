// Original IGI.EXE function: menu_music (VA 0x00418520; static CFG gate PASS, CFG score 1.000).
#include "menu_music.h"
int32_t menu_music(void* a1)

{
    if (!*(a1 + 0x2838))
    {
        *(a1 + 0x2830) = Display_CheckCapabilities_12("menu_music");
        *(a1 + 0x2834) = Display_RestoreDevice_12("menu_music");
        *(a1 + 0x283c) = 0x30;
        Display_SetGammaRamp_12(a1 + 0x2840);
    }

    return SoundSys_Update3DPosition_8(a1 + 0x2830);
}
