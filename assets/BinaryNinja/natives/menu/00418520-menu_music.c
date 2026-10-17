// IGI native provenance: menu_music - 0x00418520 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418520-menu_music.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "menu_music.h"
int32_t menu_music(void* context)

{
    if (!*(context + 0x2838))
    {
        *(context + 0x2830) = Display_CheckCapabilities_12("menu_music");
        *(context + 0x2834) = Display_RestoreDevice_12("menu_music");
        *(context + 0x283c) = 0x30;
        Display_SetGammaRamp_12(context + 0x2840);
    }

    return SoundSys_Update3DPosition_8(context + 0x2830);
}
