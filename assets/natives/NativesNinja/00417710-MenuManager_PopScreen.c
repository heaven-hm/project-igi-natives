#include "00417710-MenuManager_PopScreen.h"
/* 0x00417710 MenuManager_PopScreen full linked: callers=0 callees=3 */
int32_t MenuManager_PopScreen(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_PopScreen(int param)
// Note: Pops the top screen off the menu stack (destroys it) revealing the one
// beneath. Param: param = pass-through argument observed in retail calls (pass
// 0). Pair with MenuManager_PushScreen.
{
    if (sub_4b8a20(a3, 0))
        Menu_UpdateLanguage(a2);

    int32_t var_10 = 0;
    int32_t eax_2 = *(a2 + 0x27e8) - 1;
    int32_t var_c = 0x3ff00000;
    *(a2 + 0x27e8) = eax_2;
    char* var_8 = &g_567c74;
    *(a2 + 0x20) = *(a2 + (eax_2 << 2) + 0x27ec);
    *(a2 + 0x2c) = 1;
    int32_t var_18 = 1;
    *(a2 + 0x28) = 6;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
