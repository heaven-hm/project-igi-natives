// IGI native provenance: MenuManager_LoadParameters - 0x00417260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00417260-MenuManager_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuManager_LoadParameters.h"
struct status_msg* MenuManager_LoadParameters(int32_t context)

{
    Game_DefineOptions("MenuManager_RequestScreen", MenuManager_RequestScreen, context, 2);
    Game_DefineOptions("MenuManager_LeaveMenus", MenuManager_LeaveMenus, context, 2);
    Game_DefineOptions("MenuManager_SetLanguage", MenuManager_SetLanguage, context, 1);
    Game_DefineOptions("MenuManager_PushScreen", MenuManager_PushScreen, context, 1);
    Game_DefineOptions("MenuManager_PopScreen", MenuManager_PopScreen, context, 1);
    Game_DefineOptions("MenuManager_ForceUpdateWindow", MenuManager_ForceUpdateWindow, context, 1);
    Game_DefineOptions("MenuManager_ActivatePopupScreen", MenuManager_ActivatePopupScreen, context, 1);
    Game_DefineOptions("MenuManager_DeactivatePopuScreen", MenuManager_DeactivatePopuScreen, context,
        0);
    Game_DefineOptions("MenuManager_SetEnabled", MenuManager_SetEnabled, context, 1);
    TaskType_Set("MENUMANAGER_QUIT", 0xa);
    TaskType_Set("MENUMANAGER_QUITTOMAINMENU", 0xb);
    TaskType_Set("MENUMANAGER_STARTGAME", 0xd);
    TaskType_Set("MENUMANAGER_IDLE", 9);
    TaskType_Set("MENUMANAGER_RESTARTLEVEL", 0xc);
    *(context + 0x26be) = 0;

    if (g_c28c61)
    {
        int32_t data_2 = 0;

        if (g_c28f80)
            data_2 = 3;

        int32_t item_48_1 = 0x3e800000;
        void* data_3 = Config_SetGamma();
        InputPort_Action(0, Config_SetResolution(), data_3, data_2, 0x3d4ccccd, 0x3b5a740e, 0x3b5a740e,
            0x3b5a740e, 0x3b5a740e, 0x3d4ccccd, 0x3b5a740e, 0x3b5a740e, 0x3e800000, 0x3b5a740e,
            0x3b5a740e);
        g_bc20a0 = 1;
    }

    FX_DebrisSpawn_16();
    *(context + 0x26be) = 1;
    int32_t item_18 = 0;
    int32_t item_14 = 0;
    float item_10 = g_c28b44;
    float item_c = g_c28b48;
    Display_SyncVSync_13(context + 0x266c, 1);
    Display_CheckCapabilities_13(context + 0x266c, &item_18);
    *(context + 0x20) = 0xffffffff;
    *(context + 0x24) = 0xffffffff;
    *(context + 0x30) = 0;
    *(context + 0x34) = 0;
    *(context + 0x26bc) = 0;
    *(context + 0x26bd) = 0;
    *(context + 0x27cc) = 0;
    *(context + 0xd4) = 0;
    *(context + 0x1d4) = 0;
    *(context + 0x1d8) = 0;
    *(context + 0x25c) = 0;
    *(context + 0x2664) = 0;
    *(context + 0x260) = 0;
    *(context + 0x2666) = 0;
    *(context + 0x26bf) = 0;
    *(context + 0x38) = 0;
    *(context + 0x2668) = 0;
    struct status_msg* result = Menu_UpdateLanguage_15(context);
    *(context + 0x27c8) = result;
    *(context + 0x27e0) = 0;
    *(context + 0x27e8) = 0;
    return result;
}
