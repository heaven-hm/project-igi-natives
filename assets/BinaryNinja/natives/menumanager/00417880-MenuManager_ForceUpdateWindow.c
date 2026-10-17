// Original IGI.EXE function: MenuManager_ForceUpdateWindow (VA 0x00417880; static CFG gate PASS, CFG score 0.917).
#include "MenuManager_ForceUpdateWindow.h"
int32_t MenuManager_ForceUpdateWindow(int32_t a1, float a2 @ 0xc)

// Sig: void MenuManager_ForceUpdateWindow(int param)
// Note: Forces the menu manager to redraw/update its windows this frame. Param:
// observed retail value 0. Use after changing control contents from script.
{
    void* valA1 = Script_ExecuteLevelScript_4(Script_GetArg(a2, 0));

    if (valA1)
    {
        int32_t valA2 = Menu_HandleInput_13();
        int32_t tmpD1 = 0;
        tmpD1 = *(valA1 + 0x1c);
        int32_t valA3 = *(((valA2 * 0x180 + tmpD1) << 2) + &g_a96ae0);

        if (valA3)
            valA3(valA1);
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
