// IGI native provenance: FlatSky_OnEvent - 0x0051DB80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051DB80-FlatSky_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FlatSky_OnEvent.h"
int32_t FlatSky_OnEvent(void* context)

{
    *(context + 0x44) = 0;
    *(context + 0x24c) = 0;
    *(context + 0x250) = 0;
    *(context + 0x254) = 0;
    *(context + 0x258) = 0;
    *(context + 0x248) = 0x38d1b717;
    *(context + 0x25c) = 0x3f800000;
    *(context + 0x260) = 0x3f800000;
    *(context + 0x264) = 0x3f800000;
    *(context + 0x268) = 0x3f800000;
    Game_DataSymbolLoad(context + 0x48, &g_567c74);
    return Game_DataSymbolLoad(context + 0x148, &g_567c74);
}
