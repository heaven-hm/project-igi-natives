// Original IGI.EXE function: MenuManager_Setup (VA 0x00417A20; static CFG gate PASS, CFG score 1.000).
#include "MenuManager_Setup.h"
int32_t MenuManager_Setup(void* a1)

{
    if (*(a1 + 0x282c))
        SoundSys_EvaluateTrigger_8();

    if (*(a1 + 0x26be))
    {
        FX_TrailUpdate_16();
        *(a1 + 0x26be) = 0;
    }

    Menu_FormatScreen_3(*(a1 + 0x27c8));
    Menu_LocalMenusystemSound(a1);
    Display_SwapBuffers_13(a1 + 0x266c);

    if (*(a1 + 0x26b8) > 0xffffffff)
    {
        char ctxB1 = g_bcadf4;
        char flagP1 = g_bcadf8;
        char dstD1 = g_bcadf0;
        Display_SetBackgroundColourFn(0, 0, 0);
        Display_CreateSurface_3();
        Display_SetBackgroundColourFn(dstD1, ctxB1, flagP1);
        Frames_Set(*(a1 + 0x26b8));
    }

    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA4 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        int32_t valA8 = *(((valA4 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA8)
            valA8(a1);
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
