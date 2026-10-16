#include "gi_platform.h"
#include "00417960-MenuManager_DeactivatePopuScreen.h"
int32_t MenuManager_DeactivatePopuScreen(int32_t a1, void* a2)

// Sig: void MenuManager_DeactivatePopuScreen()
// Note: Deactivates the currently-active popup screen and returns to the screen
// beneath. Takes no args. Pair with MenuManager_ActivatePopupScreen. NOTE: name
// mirrors the retail registration string exactly, including its "Popu" typo -
// do not "fix" it against the binary.
{
    (*(int32_t*)(uintptr_t)(a2 + 0x28)) = 8;
    (*(int32_t*)(uintptr_t)(a2 + 0x2c)) = 0xf;
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
