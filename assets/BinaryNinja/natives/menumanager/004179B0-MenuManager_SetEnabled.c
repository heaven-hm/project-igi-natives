// Original IGI.EXE function: MenuManager_SetEnabled (VA 0x004179B0; static CFG gate FAIL, CFG score 0.833).
#include "MenuManager_SetEnabled.h"
int32_t MenuManager_SetEnabled(int32_t context, void* param_2, float param_3)

// Sig: void MenuManager_SetEnabled(int enabled)
// Note: Enables/disables menu-manager input processing. Param: enabled = 1
// menus react to input, 0 frozen. Use to freeze menus during scripted
// sequences.
{
    if (Script_GetArg(param_3, 0) != 1)
        *(param_2 + 0x28) = 0x10;
    else
        *(param_2 + 0x28) = 0x11;

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
