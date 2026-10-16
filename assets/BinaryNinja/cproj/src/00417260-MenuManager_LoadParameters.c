#include "gi_platform.h"
#include "00417260-MenuManager_LoadParameters.h"
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
    (*(int32_t*)(uintptr_t)(a1 + 0x26be)) = 0;

    if (g_c28c61)
    {
        int32_t valA2 = 0;

        if (g_c28f80)
            valA2 = 3;

        int32_t v_48_1 = 0x3e800000;
        void* valA3 = Config_SetGamma();
        InputPort_Action(0, Config_SetResolution(), valA3, valA2, 0x3d4ccccd, 0x3b5a740e, 0x3b5a740e,
            0x3b5a740e, 0x3b5a740e, 0x3d4ccccd, 0x3b5a740e, 0x3b5a740e, 0x3e800000, 0x3b5a740e,
            0x3b5a740e);
        g_bc20a0 = 1;
    }

    FX_DebrisSpawn_16();
    (*(int32_t*)(uintptr_t)(a1 + 0x26be)) = 1;
    int32_t v_18 = 0;
    int32_t v_14 = 0;
    float v_10 = g_c28b44;
    float v_c = g_c28b48;
    Display_SyncVSync_13(a1 + 0x266c, 1);
    Display_CheckCapabilities_13(a1 + 0x266c, &v_18);
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x24)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x30)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x34)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x26bc)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x26bd)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x27cc)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xd4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x1d4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x1d8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x25c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x2664)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x260)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x2666)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x26bf)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x38)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x2668)) = 0;
    struct status_msg* result = Menu_UpdateLanguage_15(a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x27c8)) = result;
    (*(int32_t*)(uintptr_t)(a1 + 0x27e0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x27e8)) = 0;
    return result;
}
