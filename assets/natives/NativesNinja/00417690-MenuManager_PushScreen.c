#include "00417690-MenuManager_PushScreen.h"
/* 0x00417690 MenuManager_PushScreen full linked: callers=0 callees=2 */
int32_t MenuManager_PushScreen(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_PushScreen(int screenId)
// Note: Pushes a screen onto the menu stack: allocates the screen object
// (objsize 0x2898) and stores it in the manager's screen stack at mgr+0x27EC
// (verified in igi.exe). Param: screenId = retail screen id. Remember to
// MenuManager_PopScreen when done.
{
    int32_t var_24 = 0;
    *(a2 + (*(a2 + 0x27e8) << 2) + 0x27ec) = *(a2 + 0x20);
    *(a2 + 0x27e8) += 1;
    *(a2 + 0x20) = sub_4b8a20(a3, var_24);
    *(a2 + 0x2c) = 0;
    *(a2 + 0x28) = 6;
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
