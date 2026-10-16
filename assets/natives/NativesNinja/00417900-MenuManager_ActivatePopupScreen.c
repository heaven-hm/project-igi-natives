#include "00417900-MenuManager_ActivatePopupScreen.h"
/* 0x00417900 MenuManager_ActivatePopupScreen full linked: callers=0 callees=2 */
int32_t MenuManager_ActivatePopupScreen(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_ActivatePopupScreen(int popupId)
// Note: Activates a popup screen on top of the current menus (e.g. confirmation
// dialogs; retail scripts call MenuManager_ActivatePopupScreen(930)). Param:
// popupId = retail popup screen id. Use for custom confirmations.
{
    int32_t eax_1 = sub_4b8a20(a3, 0);
    int32_t var_18 = 1;
    *(a2 + 0x24) = eax_1;
    *(a2 + 0x28) = 0xe;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
