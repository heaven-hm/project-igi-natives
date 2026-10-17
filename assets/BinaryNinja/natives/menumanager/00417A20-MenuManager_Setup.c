// IGI native provenance: MenuManager_Setup - 0x00417A20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00417A20-MenuManager_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuManager_Setup.h"
int32_t MenuManager_Setup(void* context)

{
    if (*(context + 0x282c))
        SoundSys_EvaluateTrigger_8();

    if (*(context + 0x26be))
    {
        FX_TrailUpdate_16();
        *(context + 0x26be) = 0;
    }

    Menu_FormatScreen_3(*(context + 0x27c8));
    Menu_LocalMenusystemSound(context);
    Display_SwapBuffers_13(context + 0x266c);

    if (*(context + 0x26b8) > 0xffffffff)
    {
        char context_1 = g_bcadf4;
        char flagP1 = g_bcadf8;
        char dest_1 = g_bcadf0;
        Display_SetBackgroundColourFn(0, 0, 0);
        Display_CreateSurface_3();
        Display_SetBackgroundColourFn(dest_1, context_1, flagP1);
        Frames_Set(*(context + 0x26b8));
    }

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_4 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_8 = *(((data_4 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_8)
            data_8(context);
    }

    Sys_CloseFileStream_23("MenuManager_RequestScreen");
    Sys_CloseFileStream_23("MenuManager_LeaveMenus");
    Sys_CloseFileStream_23("MenuManager_SetLanguage");
    Sys_CloseFileStream_23("MenuManager_PushScreen");
    Sys_CloseFileStream_23("MenuManager_PopScreen");
    Sys_CloseFileStream_23("MenuManager_ForceUpdateWindow");
    Sys_CloseFileStream_23("MenuManager_ActivatePopupScreen");
    Sys_CloseFileStream_23("MenuManager_DeactivatePopuScreen");
    Sys_CloseFileStream_23("MenuManager_SetEnabled");
    Sys_CloseFileStream_23("MENUMANAGER_QUIT");
    Sys_CloseFileStream_23("MENUMANAGER_QUITTOMAINMENU");
    Sys_CloseFileStream_23("MENUMANAGER_IDLE");
    Sys_CloseFileStream_23("MENUMANAGER_RESTARTLEVEL");
    return Sys_CloseFileStream_23("MENUMANAGER_STARTGAME");
}
