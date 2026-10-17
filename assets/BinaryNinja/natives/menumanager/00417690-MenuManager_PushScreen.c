// Original IGI.EXE function: MenuManager_PushScreen (VA 0x00417690; static CFG gate FAIL, CFG score 0.833).
#include "MenuManager_PushScreen.h"
int32_t MenuManager_PushScreen(int32_t context, void* param_2, float param_3)

// Sig: void MenuManager_PushScreen(int screenId)
// Note: Pushes a screen onto the menu stack: allocates the screen object
// (objsize 0x2898) and stores it in the manager's screen stack at mgr+0x27EC
// (verified in igi.exe). Param: screenId = retail screen id. Remember to
// MenuManager_PopScreen when done.
{
    int32_t item_24 = 0;
    *(param_2 + (*(param_2 + 0x27e8) << 2) + 0x27ec) = *(param_2 + 0x20);
    *(param_2 + 0x27e8) += 1;
    *(param_2 + 0x20) = Script_GetArg(param_3, item_24);
    *(param_2 + 0x2c) = 0;
    *(param_2 + 0x28) = 6;
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
