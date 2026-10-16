#include "FlatSky_OnEvent.h"
int32_t FlatSky_OnEvent(void* a1)

{
    *(a1 + 0x44) = 0;
    *(a1 + 0x24c) = 0;
    *(a1 + 0x250) = 0;
    *(a1 + 0x254) = 0;
    *(a1 + 0x258) = 0;
    *(a1 + 0x248) = 0x38d1b717;
    *(a1 + 0x25c) = 0x3f800000;
    *(a1 + 0x260) = 0x3f800000;
    *(a1 + 0x264) = 0x3f800000;
    *(a1 + 0x268) = 0x3f800000;
    Game_DataSymbolLoad(a1 + 0x48, &g_567c74);
    return Game_DataSymbolLoad(a1 + 0x148, &g_567c74);
}
