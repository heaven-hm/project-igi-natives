#include "gi_platform.h"
#include "00418520-menu_music.h"
int32_t menu_music(void* a1)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 0x2838)))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x2830)) = Display_CheckCapabilities_12("menu_music");
        (*(int32_t*)(uintptr_t)(a1 + 0x2834)) = Display_RestoreDevice_12("menu_music");
        (*(int32_t*)(uintptr_t)(a1 + 0x283c)) = 0x30;
        Display_SetGammaRamp_12(a1 + 0x2840);
    }

    return SoundSys_Update3DPosition_8(a1 + 0x2830);
}
