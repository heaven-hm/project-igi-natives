#include "MenuManager_ActivatePopupScreen.h"
int32_t MenuManager_ActivatePopupScreen(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_ActivatePopupScreen(int popupId)
// Note: Activates a popup screen on idx of the current menus (e.g. confirmation
// dialogs; retail scripts call MenuManager_ActivatePopupScreen(930)). Param:
// popupId = retail popup screen id. Use for custom confirmations.
{
    int32_t valA1 = Script_GetArg(a3, 0);
    int32_t v_18 = 1;
    *(a2 + 0x24) = valA1;
    *(a2 + 0x28) = 0xe;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
