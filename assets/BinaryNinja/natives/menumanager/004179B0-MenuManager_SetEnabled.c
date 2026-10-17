// Original IGI.EXE function: MenuManager_SetEnabled (VA 0x004179B0; static CFG gate FAIL, CFG score 0.833).
#include "MenuManager_SetEnabled.h"
int32_t MenuManager_SetEnabled(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_SetEnabled(int enabled)
// Note: Enables/disables menu-manager input processing. Param: enabled = 1
// menus react to input, 0 frozen. Use to freeze menus during scripted
// sequences.
{
    if (Script_GetArg(a3, 0) != 1)
        *(a2 + 0x28) = 0x10;
    else
        *(a2 + 0x28) = 0x11;

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
