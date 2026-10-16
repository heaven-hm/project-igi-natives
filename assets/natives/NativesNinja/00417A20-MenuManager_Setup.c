#include "00417A20-MenuManager_Setup.h"
/* 0x00417a20 MenuManager_Setup full linked: callers=0 callees=25 */
int32_t MenuManager_Setup(void* a1)

{
    if (*(a1 + 0x282c))
        sub_4e7130();

    if (*(a1 + 0x26be))
    {
        sub_48a8a0();
        *(a1 + 0x26be) = 0;
    }

    Menu_FormatScreen_3(*(a1 + 0x27c8));
    Menu_LocalMenusystemSound(a1);
    sub_4975f0(a1 + 0x266c);

    if (*(a1 + 0x26b8) > 0xffffffff)
    {
        char ebx_1 = g_bcadf4;
        char ebp_1 = g_bcadf8;
        char edi_1 = g_bcadf0;
        Display_SetBackgroundColourFn(0, 0, 0);
        sub_491a30();
        Display_SetBackgroundColourFn(edi_1, ebx_1, ebp_1);
        Frames_Set(*(a1 + 0x26b8));
    }

    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_4 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_8 = *(((eax_4 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_8)
            eax_8(a1);
    }

    sub_4b8920("MenuManager_RequestScreen");
    sub_4b8920("MenuManager_LeaveMenus");
    sub_4b8920("MenuManager_SetLanguage");
    sub_4b8920("MenuManager_PushScreen");
    sub_4b8920("MenuManager_PopScreen");
    sub_4b8920("MenuManager_ForceUpdateWindow");
    sub_4b8920("MenuManager_ActivatePopupScreen");
    sub_4b8920("MenuManager_DeactivatePopuScreen");
    sub_4b8920("MenuManager_SetEnabled");
    sub_4b8920("MENUMANAGER_QUIT");
    sub_4b8920("MENUMANAGER_QUITTOMAINMENU");
    sub_4b8920("MENUMANAGER_IDLE");
    sub_4b8920("MENUMANAGER_RESTARTLEVEL");
    return sub_4b8920("MENUMANAGER_STARTGAME");
}
