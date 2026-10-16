#include "004174A0-MenuManager_RequestScreen.h"
/* 0x004174a0 MenuManager_RequestScreen full linked: callers=0 callees=4 */
int32_t MenuManager_RequestScreen(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_RequestScreen(int screenId, int flags)
// Note: Requests a menu screen by id through the menu manager (queued request).
// Params: screenId = retail screen resource id, flags = request modifier (0 =
// normal). Use outside the menu stack internals when you just want a screen
// opened next tick.
{
    if (sub_4b8a20(a3, 1))
        Menu_UpdateLanguage(a2);

    *(a2 + 0x20) = sub_4b8a20(a3, 0);
    *(a2 + 0x2c) = 0;
    *(a2 + 0x28) = 6;
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
