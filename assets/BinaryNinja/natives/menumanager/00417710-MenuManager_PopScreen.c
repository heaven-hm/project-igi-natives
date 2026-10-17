// Original IGI.EXE function: MenuManager_PopScreen (VA 0x00417710; static CFG gate PASS, CFG score 0.889).
#include "MenuManager_PopScreen.h"
int32_t MenuManager_PopScreen(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_PopScreen(int param)
// Note: Pops the idx screen off the menu stack (destroys it) revealing the one
// beneath. Param: param = pass-through argument observed in retail calls (pass
// 0). Pair with MenuManager_PushScreen.
{
    if (Script_GetArg(a3, 0))
        Menu_UpdateLanguage(a2);

    int32_t v_10 = 0;
    int32_t valA2 = *(a2 + 0x27e8) - 1;
    int32_t v_c = 0x3ff00000;
    *(a2 + 0x27e8) = valA2;
    char* v_8 = &g_567c74;
    *(a2 + 0x20) = *(a2 + (valA2 << 2) + 0x27ec);
    *(a2 + 0x2c) = 1;
    int32_t v_18 = 1;
    *(a2 + 0x28) = 6;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
