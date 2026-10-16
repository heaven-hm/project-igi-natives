#include "gi_platform.h"
#include "0051DB80-FlatSky_OnEvent.h"
int32_t FlatSky_OnEvent(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x44)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x24c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x250)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x254)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x258)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x248)) = 0x38d1b717;
    (*(int32_t*)(uintptr_t)(a1 + 0x25c)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x260)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x264)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x268)) = 0x3f800000;
    Game_DataSymbolLoad(a1 + 0x48, &g_567c74);
    return Game_DataSymbolLoad(a1 + 0x148, &g_567c74);
}
