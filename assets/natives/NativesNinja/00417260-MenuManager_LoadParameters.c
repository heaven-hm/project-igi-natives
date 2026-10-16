#include "00417260-MenuManager_LoadParameters.h"
/* 0x00417260 MenuManager_LoadParameters full linked: callers=0 callees=23 */
struct status_msg* MenuManager_LoadParameters(int32_t a1)

{
    Game_DefineOptions("MenuManager_RequestScreen", MenuManager_RequestScreen, a1, 2);
    Game_DefineOptions("MenuManager_LeaveMenus", MenuManager_LeaveMenus, a1, 2);
    Game_DefineOptions("MenuManager_SetLanguage", MenuManager_SetLanguage, a1, 1);
    Game_DefineOptions("MenuManager_PushScreen", MenuManager_PushScreen, a1, 1);
    Game_DefineOptions("MenuManager_PopScreen", MenuManager_PopScreen, a1, 1);
    Game_DefineOptions("MenuManager_ForceUpdateWindow", MenuManager_ForceUpdateWindow, a1, 1);
    Game_DefineOptions("MenuManager_ActivatePopupScreen", MenuManager_ActivatePopupScreen, a1, 1);
    Game_DefineOptions("MenuManager_DeactivatePopuScreen", MenuManager_DeactivatePopuScreen, a1,
        0);
    Game_DefineOptions("MenuManager_SetEnabled", MenuManager_SetEnabled, a1, 1);
    TaskType_Set("MENUMANAGER_QUIT", 0xa);
    TaskType_Set("MENUMANAGER_QUITTOMAINMENU", 0xb);
    TaskType_Set("MENUMANAGER_STARTGAME", 0xd);
    TaskType_Set("MENUMANAGER_IDLE", 9);
    TaskType_Set("MENUMANAGER_RESTARTLEVEL", 0xc);
    *(a1 + 0x26be) = 0;

    if (g_c28c61)
    {
        int32_t eax_2 = 0;

        if (g_c28f80)
            eax_2 = 3;

        int32_t var_48_1 = 0x3e800000;
        void* eax_3 = Config_SetGamma();
        sub_4ed5e0(0, Config_SetResolution(), eax_3, eax_2, 0x3d4ccccd, 0x3b5a740e, 0x3b5a740e,
            0x3b5a740e, 0x3b5a740e, 0x3d4ccccd, 0x3b5a740e, 0x3b5a740e, 0x3e800000, 0x3b5a740e,
            0x3b5a740e);
        g_bc20a0 = 1;
    }

    sub_48a710();
    *(a1 + 0x26be) = 1;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    float var_10 = g_c28b44;
    float var_c = g_c28b48;
    sub_497570(a1 + 0x266c, 1);
    sub_497680(a1 + 0x266c, &var_18);
    *(a1 + 0x20) = 0xffffffff;
    *(a1 + 0x24) = 0xffffffff;
    *(a1 + 0x30) = 0;
    *(a1 + 0x34) = 0;
    *(a1 + 0x26bc) = 0;
    *(a1 + 0x26bd) = 0;
    *(a1 + 0x27cc) = 0;
    *(a1 + 0xd4) = 0;
    *(a1 + 0x1d4) = 0;
    *(a1 + 0x1d8) = 0;
    *(a1 + 0x25c) = 0;
    *(a1 + 0x2664) = 0;
    *(a1 + 0x260) = 0;
    *(a1 + 0x2666) = 0;
    *(a1 + 0x26bf) = 0;
    *(a1 + 0x38) = 0;
    *(a1 + 0x2668) = 0;
    struct status_msg* result = Menu_UpdateLanguage_15(a1);
    *(a1 + 0x27c8) = result;
    *(a1 + 0x27e0) = 0;
    *(a1 + 0x27e8) = 0;
    return result;
}
