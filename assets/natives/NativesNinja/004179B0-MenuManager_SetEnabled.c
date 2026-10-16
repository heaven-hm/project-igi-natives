#include "004179B0-MenuManager_SetEnabled.h"
/* 0x004179b0 MenuManager_SetEnabled full linked: callers=0 callees=2 */
int32_t MenuManager_SetEnabled(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_SetEnabled(int enabled)
// Note: Enables/disables menu-manager input processing. Param: enabled = 1
// menus react to input, 0 frozen. Use to freeze menus during scripted
// sequences.
{
    if (sub_4b8a20(a3, 0) != 1)
        *(a2 + 0x28) = 0x10;
    else
        *(a2 + 0x28) = 0x11;

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
