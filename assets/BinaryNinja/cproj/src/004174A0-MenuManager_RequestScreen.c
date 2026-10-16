#include "gi_platform.h"
#include "004174A0-MenuManager_RequestScreen.h"
int32_t MenuManager_RequestScreen(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_RequestScreen(int screenId, int flags)
// Note: Requests a menu screen by id through the menu manager (queued request).
// Params: screenId = retail screen resource id, flags = request modifier (0 =
// normal). Use outside the menu stack internals when you just want a screen
// opened next tick.
{
    if (Script_GetArg(a3, 1))
        Menu_UpdateLanguage(a2);

    (*(int32_t*)(uintptr_t)(a2 + 0x20)) = Script_GetArg(a3, 0);
    (*(int32_t*)(uintptr_t)(a2 + 0x2c)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x28)) = 6;
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
